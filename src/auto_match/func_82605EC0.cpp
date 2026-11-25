#include "havok/hkVector4.h"

struct Pool_82605EC0;

struct Record_82605EC0 {
    int type;               // 0x00
    float length;           // 0x04
    int count;              // 0x08
    int padC;
    hkVector4 origin;       // 0x10
    hkVector4 vector;       // 0x20
};

extern "C" void *fn_8251E4D0(Pool_82605EC0 *pool);

extern "C" int fn_82605EC0(Pool_82605EC0 *pool, const hkVector4 &vector)
{
    Record_82605EC0 *record = (Record_82605EC0 *)fn_8251E4D0(pool);

    if (record != 0) {
        record->type = -5;
        record->length = vector.length3();
        record->count = 1;
        record->origin.setZero4();
        record->vector = vector;
        return 1;
    }
    return 0;
}
