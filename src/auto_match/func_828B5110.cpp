// Destructor body of an object that owns two std::set<Element_828B45A8> (at 0x44 and 0x54)
// besides other containers; each set's range erase is func_828B45A8.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828B45A8.h"

typedef std::set<Element_828B45A8> Set;
typedef Set::_Mybase Tree;

template <> Tree::iterator Tree::erase(const_iterator, const_iterator);

// placement new without the null check of the library's throw() version
struct NoNullCheck {};
inline void *operator new(unsigned int, void *where, NoNullCheck) { return where; }
inline void operator delete(void *, void *, NoNullCheck) {}

extern "C" {
void *fn_8240D930();
unsigned char fn_825B5568();
void fn_8265CA20(void *);
void fn_828B22F0(void *);
void fn_828B2BF8();
void fn_828B3E88(void *);
extern unsigned int lbl_82024E20;
extern unsigned int lbl_82024E60;

struct Vt_828B5110 { char pad[0x24]; void (*f24)(void *, unsigned int); };

void fn_828B5110(unsigned int *param_1)
{
  unsigned char cVar2;
  Vt_828B5110 **piVar1;
  unsigned char auStack_20[8];

  *param_1 = (unsigned int)&lbl_82024E60;
  if (*(char *)(param_1 + 0xe) != '\0') {
    fn_828B2BF8();
    cVar2 = fn_825B5568();
    if (cVar2 != '\0') {
      fn_828B2BF8();
      piVar1 = (Vt_828B5110 **)fn_8240D930();
      (*piVar1)->f24(piVar1, param_1[0x10]);
    }
    *(unsigned char *)(param_1 + 0xe) = 0;
  }
  {
    Set *t = (Set *)(param_1 + 0x15);
    new ((void *)auStack_20, NoNullCheck()) Tree::iterator(t->erase(t->begin(), t->end()));
  }
  fn_8265CA20((void *)param_1[0x16]);
  {
    Set *t = (Set *)(param_1 + 0x11);
    new ((void *)auStack_20, NoNullCheck()) Tree::iterator(t->erase(t->begin(), t->end()));
  }
  fn_8265CA20((void *)param_1[0x12]);
  *param_1 = (unsigned int)&lbl_82024E20;
  fn_828B22F0(param_1 + 8);
  fn_8265CA20((void *)param_1[8]);
  fn_828B3E88(param_1 + 2);
  fn_8265CA20((void *)param_1[2]);
  param_1[2] = 0;
}
}
