#include "havok/hkClass.h"

typedef struct Object Object;
typedef struct { void *reserved[4]; void (*call)(Object *, void *, int); } Vtable;
struct Object { Vtable *vtable; };

extern "C" int fn_82CEB1F0(void *, int, void **, const hkClassMember **);

extern "C" int fn_82CEB2D8(void *source, int index, Object *output)
{
    void *value;
    const hkClassMember *record;
    int status = fn_82CEB1F0(source, index, &value, &record);
    if (status == 0)
        output->vtable->call(output, value, record->getSizeInBytes());
    return status;
}
