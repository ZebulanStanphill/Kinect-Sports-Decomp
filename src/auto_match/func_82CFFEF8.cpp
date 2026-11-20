#include "havok/hkClass.h"

// hkClassMemberAccessor-like pair: { object address, member }.
extern "C" const hkClassMember *fn_82CEAFA8(const hkClass *klass, const char *name);

extern "C" int *fn_82CFFEF8(int *param_1, int *param_2, const char *name)
{
  int iVar1;
  const hkClass *klass;
  const hkClassMember *member;

  klass = &((const hkClassMember *)param_2[1])->getStructClass();
  iVar1 = *param_2;
  *param_1 = 0;
  member = fn_82CEAFA8(klass, name);
  param_1[1] = (int)member;
  if (member != 0) {
    *param_1 = (unsigned int)member->m_offset + iVar1;
  }
  return param_1;
}
