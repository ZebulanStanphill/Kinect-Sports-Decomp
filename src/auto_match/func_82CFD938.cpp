#include "havok/hkClassMember.h"

extern "C" void fn_82CFD938(const hkClassMember *member, void *p, int x)
{
    switch (member->getSizeInBytes()) {
    case 1: *(char *)p = (char)x; break;
    case 2: *(short *)p = (short)x; break;
    case 4: *(int *)p = x; break;
    }
}
