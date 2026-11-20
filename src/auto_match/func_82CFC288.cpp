#include "havok/hkString.h"
#include "havok/hkMemoryRouter.h"

extern "C" void fn_82CE5430(void *p);

extern "C" void fn_82CFC288(const char *param_1)
{
    unsigned char auStack_40[48];

    fn_82CE5430(auStack_40);
    hkString::strDup(param_1, hkMemoryRouter::getInstance().heap());
}
