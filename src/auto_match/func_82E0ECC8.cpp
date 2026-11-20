#include "havok/hkClass.h"
#include "havok/hkString.h"

extern "C" int fn_82E181D8(void *ctx, const hkClassMember *x, const hkClassMember *y);
extern "C" const hkClass lbl_8323AB38;

extern "C" int fn_82E0ECC8(void *ctx, const hkClassMember *x, const hkClassMember *y)
{
  unsigned char a = x->m_type;
  unsigned char b = y->m_type;
  unsigned char sameA = (a == b || (a == 0x1a && b == 0x16)) ? 1 : 0;
  unsigned char pairA = (a == 0x1d && b == 0x21) ? 1 : 0;
  unsigned char specA = (a == 0x1c && b == 0x14 && y->m_subtype == 0x19 && y->getClass() != 0 &&
      hkString::strCmp(lbl_8323AB38.getName(), y->getStructClass().getName()) == 0) ? 1 : 0;
  unsigned char sameB = (x->m_subtype == y->m_subtype || (x->m_subtype == 0x1d && y->m_subtype == 0x21)) ? 1 : 0;
  unsigned char specB = (x->m_subtype == 0x1c && y->m_subtype == 0x14 && y->getClass() != 0 &&
      hkString::strCmp(lbl_8323AB38.getName(), y->getStructClass().getName()) == 0) ? 1 : 0;
  if (fn_82E181D8(ctx, x, y) != 0 || pairA || specA || (sameA && (sameB || specB))) {
    return 1;
  }
  return 0;
}
