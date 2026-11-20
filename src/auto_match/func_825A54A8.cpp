#include "havok/hkMemoryStreamReader.h"

typedef struct Entry {
    int type;
    unsigned int *data;
} Entry;

typedef struct Obj {
    Entry *entries;
    unsigned int count;
    int f8;
    int fc;
    int f10;
    int sub14;
} Obj;

extern "C" {
extern int *fn_825A2410(int *p);
extern unsigned char *fn_82CEBB58(void *a, void *b);
extern int fn_82E0A1C0(void *a);
extern void fn_82E0B980(void *a);
extern void fn_82E0C7A0(void *a);
extern int fn_82E0C868(void *a);
extern int fn_82E0D7E8(void *a, void *b);
extern void fn_82E10A30(void *a, unsigned int b);
extern int fn_82E12AC8(void *a, int b);
extern unsigned int lbl_8323FDE4;
}

static unsigned int *find(Obj *o, int type)
{
    unsigned int i;
    for (i = 0; i < o->count; i++) {
        if (o->entries[i].type == type)
            return o->entries[i].data;
    }
    return 0;
}

extern "C" void fn_825A54A8(Obj *o)
{
    unsigned int *d;
    int v;
    struct Stack {
        char result[4];
        char padding[12];
        char stream[32];
        char reader[136];
    } stack;

    d = find(o, 4);
    if (d != 0) {
        fn_82E0B980(stack.reader);
        o->fc = 4;
        new (stack.stream) hkMemoryStreamReader(
            reinterpret_cast<const void *>(d[0]), d[1], hkMemoryStreamReader::MEMORY_INPLACE);
        if (*fn_82CEBB58(stack.result, stack.stream) != 0 && fn_82E0D7E8(stack.reader, stack.stream) == 0) {
            fn_82E10A30(stack.reader, lbl_8323FDE4);
            o->f8 = fn_82E12AC8(stack.reader, fn_82E0A1C0(stack.reader));
            v = fn_82E0C868(stack.reader);
            reinterpret_cast<hkReferencedObject *>(v)->addReference();
            reinterpret_cast<hkReferencedObject *>(v)->addReference();
            *fn_825A2410(&o->sub14) = v;
        }
        reinterpret_cast<hkMemoryStreamReader *>(stack.stream)->hkMemoryStreamReader::~hkMemoryStreamReader();
        fn_82E0C7A0(stack.reader);
    }
}
