#include "havok/hkClassMember.h"

extern "C" unsigned int fn_82E17660(const hkClassMember *member)
{
  if (member->getCstyleArraySize() != 0) {
    return member->getCstyleArraySize();
  }
  return 1;
}
