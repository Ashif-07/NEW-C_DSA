#include <iostream>
#include <queue>
using namespace std; 

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};

Node *CreateBinaryTree(int n)
{
    int leftData, rightData;
    queue<Node *> q;
    Node *rootNode = new Node(n);
    q.push(rootNode);
    while (!q.empty())
    {
        Node *ptr = q.front();
        q.pop();
        cout << "Enter Data for Left Child Node of " << ptr->data << " : ";
        cin >> leftData;
        if (leftData != -1)
        {
            ptr->left = new Node(leftData);
            q.push(ptr->left);
        }
        cout << "Enter Data for Right Child Node of " << ptr->data << " : ";
        cin >> rightData;
        if (rightData != -1)
        {
            ptr->right = new Node(rightData);
            q.push(ptr->right);
        }
    }
    return rootNode;
}

void preorderTraverse(Node *root)  ///preorder Traverse
{
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preorderTraverse(root->left);
    preorderTraverse(root->right);
    return;
}
void inorderTraverse(Node *root) //inorder Traverse
{
    if (root == nullptr)
        return;
        inorderTraverse(root->left);
        cout << root->data << " ";
    inorderTraverse(root->right);
    return;
}
void postorderTraverse(Node *root)  //postorder Traverse
{
    if (root == nullptr)
        return;
        postorderTraverse(root->left);
        postorderTraverse(root->right);
        cout << root->data << " ";
    return;
}
int main()
{
    int n;
    system("cls");
    cout << "Enter the data of root Node : ";
    cin >> n;
    Node *root = CreateBinaryTree(n);
    cout<<"\nPreorder Traverse : ";
    preorderTraverse(root);
    cout<<"\nInorder Traverse : ";
    inorderTraverse(root);
    cout<<"\nPostorder Traverse : ";
    postorderTraverse(root);
    return 0;
}
