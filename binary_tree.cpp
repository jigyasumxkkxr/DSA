#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
  int data;
  Node* left;
  Node* right;
  Node(int val){
    this->data=val;
    this->left=NULL;
    this->right=NULL;
  }
};

//return root node of created tree
Node* createTree(){
  cout<<"Enter Node value:"<<endl;
  int data;
  cin>>data;
  if(data==-1){
    return NULL;
  }
  //step1: Create Node
  Node* root=new Node(data);
  //step2: Create left subtree
  cout<<"left node data of "<<root->data<<endl;
  root->left=createTree();
  //step3: Create right subtree
  cout<<"right node data of "<<root->data<<endl;
  root->right=createTree();

  return root;
}

//preorder triversal and printing
void preorder(Node* root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}

//inorder triversal and printing
void inorder(Node* root){
  if(root==NULL){
    return;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}

//postorder triversal and printing
void postorder(Node* root){
  if(root==NULL){
    return;
  }
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}

//level order traversal
void levelorder(Node* root){
  queue<Node*>q;
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
    Node* front=q.front();
    q.pop();
    if(front==NULL){
      cout<<endl;
      if(!q.empty())
        q.push(NULL);
    }
    else{
      cout<<front->data<<" ";
      if(front->left!=NULL){
        q.push(front->left);
      }
      if(front->right!=NULL){
        q.push(front->right);
      }
    }
  }
}

vector<vector<int>> levelordervector(Node* root){
  vector<vector<int>> v;
  if(root==NULL){
    return v;
  }
  queue<Node*>q;
  q.push(root);
  while(!q.empty()){
    int n=q.size();
    vector<int>temp;
    for(int i=0;i<n;i++){
      Node* front=q.front();
      q.pop();
      temp.push_back(front->data);
      if(front->left!=NULL){
        q.push(front->left);
      }
      if(front->right!=NULL){
        q.push(front->right);
      }
    }
    v.push_back(temp);
  }
  return v;
}
int main(){
  Node* root=createTree();
  cout<<"Preorder: ";
  preorder(root);
  cout<<endl;
  cout<<"Inorder: ";
  inorder(root);
  cout<<endl;
  cout<<"Postorder: ";
  postorder(root);
  cout<<endl;
  cout<<"Level order:"<<endl;
  levelorder(root);
  cout<<endl;
  cout<<"Level Order Vector"<<endl;
  vector<vector<int>> level=levelordervector(root);
  for(auto lev:level){
    for(auto l:lev){
      cout<<l<<" ";
    }
    cout<<endl;
  }
  return 0;
}
//5 10 20 -1 -1 60 -1 -1 58 69 -1 -1 59 58 -1 -1 -1
//level order traversal TC:O(number of nodes) SC:O(maximunm number of nodes in perticular level)