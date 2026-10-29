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

// inorder traversal
void inOreder(Node *root)
{//O(n)
    if (root == NULL)
    {
        return;
    }
    inOreder(root->left); // left subtree
    cout << root->data << " ";
    inOreder(root->right); // right subtree
}
// postorder traversal
void postOreder(Node *root)
{//O(n)
    if (root == NULL)
    {
        return;
    }
    postOreder(root->left);  // left subtree
    postOreder(root->right); // right subtree
    cout << root->data << " ";
}

void LevelOreder(Node *root)
{//O(n)
    queue<Node *> q;

    q.push(root);

    while (q.size() > 0)
    {
        Node *curr = q.front();
        q.pop();

        cout << curr->data << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

void LevelOreder_WithNextLine(Node *root)
{//O(n)
    queue<Node *> q;

    q.push(root);
    q.push(NULL);

    while (q.size() > 0)
    {
        Node *curr = q.front();
        q.pop();

        if (curr == NULL)
        {
            if (!q.empty())
            {
                cout << endl;
                q.push(NULL);
                continue;
            }
            else
            {
                break;
            }
        }
        cout << curr->data << " ";

        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);
    // cout << root->data<<endl;
    // cout << root->left->data<<endl;
    // cout << root->right->data<<endl;
    cout << "preOreder:";
    preOreder(root);
    cout << endl;

    cout << "inOreder:";
    inOreder(root);
    cout << endl;

    cout << "postOreder:";
    postOreder(root);
    cout << endl;

    cout << "LevelOreder:";
    LevelOreder(root);
    cout << endl;

    cout << "LevelOreder_WithNextLine:" << endl;
    LevelOreder_WithNextLine(root);
    cout << endl;
    return 0;
}