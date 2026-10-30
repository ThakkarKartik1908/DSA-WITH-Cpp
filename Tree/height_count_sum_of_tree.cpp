#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node *buildTree(vector<int> preorder)
{ // O(n)
    idx++;
    if (preorder[idx] == -1)
    {
        return NULL;
    }
    Node *root = new Node(preorder[idx]);
    root->left = buildTree(preorder);  // left
    root->right = buildTree(preorder); // right

    return root;
}

int height(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    int leftHt = height(root->left);
    int rightHt = height(root->right);
    return max(leftHt, rightHt) + 1; // current height
}

int count(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    int leftcount = count(root->left);
    int rightcount = count(root->right);
    return leftcount + rightcount + 1; // current height
}

int sumOfNode(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    int leftsum = sumOfNode(root->left);
    int rightsum = sumOfNode(root->right);
    return leftsum + rightsum + root->data; // current height
}

int main()
{
    vector<int> tree = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(tree);

    cout << "heightOfTree : " << height(root) << endl;
    cout << "countOfNode : " << count(root) << endl;
    cout << "sumOfNode: " << sumOfNode(root) << endl;
    return 0;
}
