#include "havok/hkClass.h"

hkClassMember &hkClass::getMember(int memberIndex)
{
    return const_cast<hkClassMember &>(static_cast<const hkClass *>(this)->getMember(memberIndex));
}
