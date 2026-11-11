#include "game/Node_8267D248.h"

extern "C" void *fn_8267F530(Wrapper_8267F0E0 *p, unsigned flags)
{
  if ((flags & 2) != 0) {
    void *r = (char *)p - 4;
    int n = *(int *)r;
    int i;
    p = p + n;
    for (i = n - 1; i >= 0; i--) {
      p--;
      p->Wrapper_8267F0E0::~Wrapper_8267F0E0();
    }
    if ((flags & 1) != 0) {
      fn_8265CA20(r);
    }
    return r;
  }
  p->Wrapper_8267F0E0::~Wrapper_8267F0E0();
  if ((flags & 1) != 0) {
    fn_8267BE38(p);
  }
  return p;
}
