#include "havok/hkBaseTypes.h"
extern "C" {
void fn_82D53BD8(void *);
void fn_82D53F68(void *);
void fn_82D54AA8(void *);
void fn_82D557B0(void *);
void fn_82D582A0(void *);
void fn_82D58748(void *, hkBool);
}

extern "C" void fn_82D40318(void *p)
{
  fn_82D58748(p, false);
  fn_82D582A0(p);
  fn_82D557B0(p);
  fn_82D54AA8(p);
  fn_82D53F68(p);
  fn_82D53BD8(p);
  fn_82D58748(p, true);
}
