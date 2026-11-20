#include "havok/hkClassMember.h"

extern "C" int fn_82CFD8C0(const hkClassMember *member, const void *p)
{
    int r = 0;
    switch (member->getSizeInBytes()) {
    case 1: r = *(const signed char *)p; break;
    case 2: r = *(const short *)p; break;
    case 4: r = *(const int *)p; break;
    }
    return r;
}
