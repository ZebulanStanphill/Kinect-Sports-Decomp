// Destroys a subtree of the network library's map whose value holds a std::set<Element_8224ED20>
// (std::_Tree::_Erase): for each node, the right subtree first, then the value's set is emptied
// and its head node freed, then the node itself.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range
#include "game/Element_8224ED20.h"

typedef std::set<Element_8224ED20>::_Mybase Tree_8224ED20;
template <> Tree_8224ED20::iterator Tree_8224ED20::erase(const_iterator, const_iterator);

struct Node_82896900 {
    Node_82896900 *left;
    Node_82896900 *parent;
    Node_82896900 *right;
    int key;
    Tree_8224ED20 set;      // 0x10: the head node pointer is at 0x14
    char color;
    char isnil;
};

extern "C" void fn_8265CA20(void *);

extern "C" void fn_82896900(void *self, Node_82896900 *root)
{
    Node_82896900 *p;

    for (p = root; !p->isnil; root = p) {
        fn_82896900(self, p->right);
        p = p->left;
        root->set.erase(root->set.begin(), root->set.end());
        fn_8265CA20(root->set._Myhead);
        fn_8265CA20(root);
    }
}
