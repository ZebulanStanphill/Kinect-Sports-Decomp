namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828A57C0.h"

// The container at +8 of the manager is a std::set<Element_828A57C0> (func_828A6130 is its range erase).
typedef std::set<Element_828A57C0> Set;
typedef Set::_Mybase Tree;

template <> Tree::iterator Tree::erase(const_iterator, const_iterator);

// placement new without the null check of the library's throw() version
struct NoNullCheck {};
inline void *operator new(unsigned int, void *where, NoNullCheck) { return where; }
inline void operator delete(void *, void *, NoNullCheck) {}

typedef struct { unsigned int first; unsigned int second; } Pair_828CE460;
typedef struct { void *ptr; void *rc; } SP_828CE460;

extern "C" {
void fn_822315A0(void *);
void *fn_823F2E20(void *, void *);
void *fn_8265C9E0(unsigned int);
void fn_828CCDD8(Pair_828CE460 *, void *, unsigned int *);
void fn_828CD0D8(unsigned int *, void *, unsigned int *);
SP_828CE460 *fn_828CD4E0(SP_828CE460 *, void *);
unsigned char fn_828CD8A8(void *, void *);
void **fn_828CE388(void *, unsigned int *);

typedef struct { char pad[0x84]; unsigned int key; char pad2[0xc0 - 0x88]; unsigned char flag; } Obj_828CE460;
typedef struct { int pad0; unsigned int cur; char map[4]; unsigned int end; } Mgr_828CE460;

void fn_828CE460(Mgr_828CE460 *param_1, Obj_828CE460 *param_2)
{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar7;
  void *map;
  void **pp;
  struct { unsigned int key; unsigned int it; unsigned int er[2]; Pair_828CE460 pr; SP_828CE460 sp; } L;
  void *q;

  uVar1 = param_1->cur;
  L.key = param_2->key;
  uVar7 = (uVar1 + 0x40) & 0xff;
  uVar2 = (uVar1 - 0x40) & 0xff;
  if (((uVar2 < uVar7) && (L.key >= uVar2) && (L.key < uVar7)) ||
      ((uVar7 < uVar2) && ((L.key >= uVar2) || (L.key < uVar7)))) {
    if (L.key != uVar1) {
      param_1->cur = L.key;
      uVar2 = (L.key - 0x40) & 0xff;
      uVar7 = ((L.key + 0x40) & 0xff) + 1;
      if (uVar7 != uVar2) {
        do {
          L.it = uVar7;
          fn_828CCDD8(&L.pr, (char *)param_1 + 8, &L.it);
          {
            Tree *t = (Tree *)((char *)param_1 + 8);
            new ((void *)L.er, NoNullCheck()) Tree::iterator(t->erase(Tree::const_iterator((Tree::_Nodeptr)L.pr.first, t),
                            Tree::const_iterator((Tree::_Nodeptr)L.pr.second, t)));
          }
          uVar7 = (uVar7 + 1) & 0xff;
        } while (uVar7 != uVar2);
      }
    }
    map = (char *)param_1 + 8;
    fn_828CD0D8(&L.it, map, &L.key);
    if (L.it == param_1->end) {
      unsigned int *p = (unsigned int *)fn_8265C9E0(0x14);
      if (p != 0) {
        p[0] = 0;
        p[1] = 0;
        p[2] = 0;
        p[3] = 0;
        q = p;
      } else {
        q = 0;
      }
      fn_823F2E20(fn_828CE388(map, &L.key), fn_828CD4E0(&L.sp, q));
      if (L.sp.rc != 0) {
        fn_822315A0(L.sp.rc);
      }
    }
    pp = fn_828CE388(map, &L.key);
    if (fn_828CD8A8(*pp, param_2) != 0) {
      fn_828CCDD8(&L.pr, map, &L.key);
      {
        Tree *t = (Tree *)map;
        new ((void *)L.er, NoNullCheck()) Tree::iterator(t->erase(Tree::const_iterator((Tree::_Nodeptr)L.pr.first, t),
                        Tree::const_iterator((Tree::_Nodeptr)L.pr.second, t)));
      }
    }
  }
  else {
    param_2->flag = 1;
  }
}
}
