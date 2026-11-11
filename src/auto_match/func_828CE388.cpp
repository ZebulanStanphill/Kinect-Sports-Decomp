// operator[] of the unsigned-keyed tree whose hinted insert is
// func_828CE1D8.cpp (std::set<Element_828CDD30>::_Insert): finds the value
// stored under a key and inserts an empty one when the key is missing.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_828CDD30 {
    unsigned int key;
    int data[2];
};

typedef std::set<Element_828CDD30> Set;
typedef Set::_Mybase SetTree;

template <> SetTree::iterator SetTree::_Insert(SetTree::const_iterator, _Nodeptr);

struct Node {
  Node *left;
  Node *parent;
  Node *right;
  unsigned int key;
  int a;
  void *b;
  char color;
  char isnil;
};

struct Tree {
  int unk0;
  Node *head;
  int size;
};

struct Val { unsigned int key; int a; void *b; };

extern "C" {
int fn_822315A0(void *);
Node *fn_828CD830(Tree *t, Val *v);
}

static void lbound(Tree *t, Node **out, unsigned int *key)
{
  Node *p = t->head->parent;
  Node *where = t->head;
  while (!p->isnil) {
    if (p->key < *key) {
      p = p->right;
    } else {
      where = p;
      p = p->left;
    }
  }
  *out = where;
}

extern "C" int *fn_828CE388(Tree *t, unsigned int *key)
{
  Node *where;
  lbound(t, &where, key);
  if (where == t->head || *key < where->key) {
    Val v;
    v.key = *key;
    v.b = 0;
    v.a = 0;
    SetTree *set = (SetTree *)t;
    SetTree::iterator res = set->_Insert(
        SetTree::const_iterator((SetTree::_Nodeptr)where, set),
        (SetTree::_Nodeptr)fn_828CD830(t, &v));
    where = (Node *)res._Ptr;
    if (v.b != 0) {
      fn_822315A0(v.b);
    }
  }
  return &where->a;
}
