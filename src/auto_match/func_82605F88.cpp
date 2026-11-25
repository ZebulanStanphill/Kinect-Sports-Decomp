#include "havok/hkVector4.h"

struct Pool_82605F88;

struct Record_82605F88 {
    int type;               // 0x00
    float length;           // 0x04
    int count;              // 0x08
    int padC;
    hkVector4 origin;       // 0x10
    hkVector4 vector;       // 0x20
};

extern "C" void *fn_8251E4D0(Pool_82605F88 *pool);

extern "C" int fn_82605F88(Pool_82605F88 *pool, int type, const hkVector4 &origin, const hkVector4 &vector,
                           int count)
{
    Record_82605F88 *record = (Record_82605F88 *)fn_8251E4D0(pool);

    if (record != 0) {
        record->type = type;
        record->length = vector.length3();
        record->count = count;
        record->origin = origin;
        record->vector = vector;
        return 1;
    }
    return 0;
}
