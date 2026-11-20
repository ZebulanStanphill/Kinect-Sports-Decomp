#include "havok/hkString.h"

typedef struct Iface Iface;
typedef struct IfaceVt { void *pad[4]; int (*f10)(Iface *); } IfaceVt;
struct Iface { IfaceVt *vt; };
extern "C" int fn_82E0E658(void);
extern "C" int fn_82E14238(int, unsigned);
extern "C" Iface *lbl_8323FD9C;
extern "C" int lbl_8323FDE4;

extern "C" int fn_82E0A398(unsigned p)
{
  if (p == 0)
    return p;
  if (hkString::strCmp(reinterpret_cast<const char *>(fn_82E0E658()), reinterpret_cast<const char *>(p)) == 0)
    return lbl_8323FD9C->vt->f10(lbl_8323FD9C);
  return fn_82E14238(lbl_8323FDE4, p);
}
