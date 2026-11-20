#include "havok/hkClassMember.h"

extern "C" unsigned int fn_82E17EE8(const hkClassMember *member)
{
  if (member->getCstyleArraySize() != 0) {
    return member->getCstyleArraySize();
  }
  return 1;
}
