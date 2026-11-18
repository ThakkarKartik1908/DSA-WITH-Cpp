#include <iostream>
#include <vector>
#include <climits>
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

// insert a node in a BST
Node *insert(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }
    return root;
}

Node *buildBST(vector<int> arr)
{
    Node *root = NULL;

    for (int val : arr)
    {
        root = insert(root, val);
    }

    return root;
}

// find inorder predecessor and successor for BST
// TC = O(H) SC = O(1);
Node *rightMostInLeftSubtree(Node *root)
{
    Node *ans = NULL;
    while (root != NULL)
    {
        ans = root;
        root = root->right;
    }
    return ans;
}
Node *leftMostInrightSubtree(Node *root)
{
    Node *ans = NULL;
    while (root != NULL)
    {
        ans = root;
        root = root->left;
    }
    return ans;
}
pair<int, int> getPredSucc(Node *root, int key)
{ //  also use for return vector<int>
    Node *curr = root;
    Node *pred = NULL;
    Node *succ = NULL;

    while (curr != NULL)
    {
        if (key > curr->data)
        {
            pred = curr;
            curr = curr->right;
        }
        else if (key < curr->data)
        {
            succ = curr;
            curr = curr->left;
        }
        else
        { // key == curr->data
            if (curr->left != NULL)
            {
                // IP
                pred = rightMostInLeftSubtree(curr->left);
            }
            if (curr->right != NULL)
            {
                // IS
                succ = leftMostInrightSubtree(curr->left);
            }
            break;
        }
    }
    return {pred->data, succ->data};
}

int main()
{

    Node *root = new Node(6);
    root->left = new Node(4);
    root->right = new Node(8);
    root->left->left = new Node(1);
    root->left->right = new Node(5);
    root->right->left = new Node(7);
    root->right->right = new Node(9);

    int key = 7;
    pair<int, int> ans = getPredSucc(root, key);   // also use vector<int> ans =
    cout << "predecessor : " << ans.first << endl; // ans[0]
    cout << "successor : " << ans.second << endl;  // ans[1]
    return 0;
}