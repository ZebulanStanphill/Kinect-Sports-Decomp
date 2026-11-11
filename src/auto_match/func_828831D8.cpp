// std::map<unsigned, unsigned __int64>-style operator[] over the tree whose
// hinted insert is func_82880FB8.cpp (std::set<Element_8288C5A8>::_Insert).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct __declspec(align(8)) Element_8288C5A8 {
    unsigned int data[4];
};

typedef std::set<Element_8288C5A8> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

template <> Tree::iterator Tree::_Insert(Tree::const_iterator, _Nodeptr);

struct Node_828831D8 {
  Node_828831D8 *left, *parent, *right;
  int pad0;
  unsigned key;
  unsigned __int64 val;
  char color;
  unsigned char isnil;
};
struct Tree_828831D8 { int pad; Node_828831D8 *head; };
extern "C" Node_828831D8 *fn_828807A0(Tree_828831D8 *);

extern "C" unsigned __int64 *fn_828831D8(Tree_828831D8 *t, unsigned *key)
{
  Node_828831D8 *where = t->head;
  Node_828831D8 *n = t->head->parent;
  while (n->isnil == 0) {
    if (n->key < *key) {
      n = n->right;
    } else {
      where = n;
      n = n->left;
    }
  }
  if (where == t->head || *key < where->key) {
    unsigned k = *key;
    Node_828831D8 *nn = fn_828807A0(t);
    unsigned q = (unsigned)nn + 0x10;
    if (q != 0) {
      *(unsigned *)q = k;
      *(unsigned __int64 *)(q + 8) = 0;
    }
    Tree::iterator out = ((Tree *)t)->_Insert(Tree::const_iterator((Node *)where, (Tree *)t), (Node *)nn);
    where = (Node_828831D8 *)out._Ptr;
  }
  return &where->val;
}
