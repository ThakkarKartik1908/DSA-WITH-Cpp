#include <iostream>
#include <vector>
#include <queue>
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
{ //O(n)
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
// preorder traversal
void preOreder(Node *root)
{//O(n)
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOreder(root->left);  // left subtree
    preOreder(root->right); // right subtree
}

int sumTree(Node* root){ //O(n)
    if(root == NULL){
        return 0;
    }

    int leftsum = sumTree(root->left);
    int rightsum = sumTree(root->right);
    root->data += leftsum + rightsum;
    
    return root->data;
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);
  
    cout << "Befor Conversion:";
    preOreder(root);
    cout << endl;

    sumTree(root);

    cout << "after Conversion:";
    preOreder(root);
    cout << endl;
    return 0;
}