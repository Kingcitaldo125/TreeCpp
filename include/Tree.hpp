#pragma once

struct Node
{
    Node() : val(-1), left(nullptr), right(nullptr) {}
    Node(int v) : val(v), left(nullptr), right(nullptr) {}

    int val;
    Node* left;
    Node* right;
};

class Tree
{
 public:
    Tree() : root(nullptr) {}
    Tree(int v) : root(new Node(v)) {}
    ~Tree() { destroy(root); }

    void add(int val);
    void traverse();

 protected:
    void add_help(Node*& xroot, const int val);
    void destroy(Node* xroot);
    void traverse_help(Node* xroot);

 private:
    Node* root;
};
