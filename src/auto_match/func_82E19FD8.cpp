#include "havok/hkClass.h"

extern "C" int fn_82CFD778(const hkClassMember *member);  // the member's alignment

// The alignment of a member of the given type: pointer-like types take the
// layout's pointer alignment, structs the largest of their members', and
// ALIGN_8 / ALIGN_16 raise it.
extern "C" int fn_82E19FD8(const hkClassMember *member, unsigned int type, int pointerAlign)
{
  int align;
  int numMembers;
  int childAlign;
  const hkClass *klass;
  int i;
  
  align = -1;
  switch(type) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x18:
  case 0x1f:
  case 0x20:
    align = fn_82CFD778(member);
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x21:
    align = pointerAlign;
    break;
  case 0x13:
    align = fn_82E19FD8(member, member->m_subtype, pointerAlign);
    break;
  case 0x19: {
    int maxval;
    maxval = 1;
    klass = &member->getStructClass();
    i = 0;
    numMembers = klass->getNumMembers();
    if (0 < numMembers) {
      do {
        const hkClassMember &child = klass->getMember(i);
        childAlign = fn_82E19FD8(&child, child.m_type, pointerAlign);
        if (childAlign > maxval) {
          maxval = childAlign;
        }
        i = i + 1;
        numMembers = klass->getNumMembers();
      } while (i < numMembers);
    }
    align = maxval;
    break;
  }
  }

  { int alignment=(short)member->m_flags & 0x180;
    if(alignment != 0) {
     if(alignment==0x100) alignment=16; else alignment=8;
     if(alignment > align) align=alignment;
    }
  }
  return align;
}
