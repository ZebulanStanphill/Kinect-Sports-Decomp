// operator[] of the unsigned-keyed tree whose hinted insert is
// func_8288A9B8.cpp (std::set<Element_8288A658>::_Insert, Allocator_825089A0).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"

struct Element_8288A658 {
    unsigned int data[2];
};

typedef std::set<Element_8288A658, std::less<Element_8288A658>, Allocator_825089A0<Element_8288A658, 0> > Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

template <> Tree::iterator Tree::_Insert(Tree::const_iterator, _Nodeptr);

struct Node_8288AE70 {
  Node_8288AE70 *left;
  Node_8288AE70 *parent;
  Node_8288AE70 *right;
  unsigned int key;
  int val;
  char color;
  char isnil;
};

struct Tree_8288AE70 {
  int pad0;
  Node_8288AE70 *head;
};

struct Pair_8288AE70 {
  unsigned int first;
  unsigned char second;
};

extern "C" int fn_8288AB68(Tree_8288AE70 *, Pair_8288AE70 *);

extern "C" unsigned int *fn_8288AE70(Tree_8288AE70 *tree, unsigned int *key)
{
  Node_8288AE70 *where;
  Node_8288AE70 *node;
  Pair_8288AE70 p;
  int r;

  where = tree->head;
  node = tree->head->parent;
  while (node->isnil == 0) {
    if (node->key < *key) {
      node = node->right;
    } else {
      where = node;
      node = node->left;
    }
  }
  if (where == tree->head || *key < where->key) {
    p.first = *key;
    p.second = 0;
    r = fn_8288AB68(tree, &p);
    ::new ((void *)&p) Tree::iterator(((Tree *)tree)->_Insert(Tree::const_iterator((Node *)where, (Tree *)tree), (Node *)r));
    where = (Node_8288AE70 *)p.first;
  }
  return (unsigned int *)((char *)where + 0x10);
}
