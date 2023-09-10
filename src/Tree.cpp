#include <iostream>

#include "Tree.hpp"

void Tree::add(int val)
{
    add_help(root, val);
}

void Tree::add_help(Node*& xroot, const int val)
{
    if (xroot == nullptr)
    {
        xroot = new Node(val);
        return;
    }

    if (val < xroot->val)
    {
        add_help(xroot->left, val);
        return;
    }
    add_help(xroot->right, val);
}

void Tree::destroy(Node* xroot)
{
    if (xroot == nullptr)
        return;

    destroy(xroot->left);
    destroy(xroot->right);

    delete xroot;
    xroot = nullptr;
}

void Tree::traverse_help(Node* xroot)
{
    if (xroot == nullptr) return;

    traverse_help(xroot->left);
    std::cout << xroot->val << "\n";
    traverse_help(xroot->right);
}

void Tree::traverse()
{
    traverse_help(root);
    std::cout << std::endl;
}
