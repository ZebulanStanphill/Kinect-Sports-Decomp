#include "havok/hkClass.h"

extern "C" int fn_82E17878(char *p, const hkClass *klass, int arg);

extern "C" int fn_82E176B8(char *p, int count, const hkClass *klass, int arg)
{
    int stride;
    int i;

    stride = klass->getObjectSize();
    for (i = 0; i < count; i++) {
        if (fn_82E17878(p + i * stride, klass, arg) == 1) {
            return 1;
        }
    }
    return 0;
}
