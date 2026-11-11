namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_822AC640 {
    int data[2];
};

typedef std::set<Element_822AC640> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

template <> Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);

typedef struct { unsigned int key; int val; } Pair;
extern "C" int fn_828C88C0(int, unsigned int);
extern "C" char *fn_83062700(void *);

extern "C" void fn_8288FB88(char *self)
{
  unsigned int key = 0x8000;
  int val = fn_828C88C0(*(int *)(self + 0xd4), key);
  void *tree = self + 0xc0;
  char *node = fn_83062700(tree);
  Pair *p = (Pair *)(node + 0xc);
  if (p != 0) {
    p->val = val;
    p->key = key;
  }
  ((Tree *)tree)->_Linsert((Node *)node, false);
  self[0xd0] = 1;
}
