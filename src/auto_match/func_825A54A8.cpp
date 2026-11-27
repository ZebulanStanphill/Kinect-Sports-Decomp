// Game code that loads the packfile embedded in a resource entry of type 4: an hkBinaryPackfileReader over an
// hkMemoryStreamReader in place; after the version update (82E10A30) it keeps the top-level object and a
// reference to the packfile data.
#include "havok/hkMemoryStreamReader.h"
#include "havok/hkBinaryPackfileReader.h"

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
extern void fn_82E10A30(hkPackfileReader *a, unsigned int b);
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
    hkPackfileData *v;

    d = find(o, 4);
    if (d != 0) {
        hkBinaryPackfileReader reader;
        o->fc = 4;
        hkMemoryStreamReader stream(reinterpret_cast<const void *>(d[0]), d[1], hkMemoryStreamReader::MEMORY_INPLACE);
        char result[4];
        if (*fn_82CEBB58(result, &stream) != 0 && reader.loadEntireFile(&stream) == HK_SUCCESS) {
            fn_82E10A30(&reader, lbl_8323FDE4);
            o->f8 = (int)reader.getContents(reader.getContentsClassName());
            v = reader.getPackfileData();
            v->addReference();
            v->addReference();
            *fn_825A2410(&o->sub14) = (int)v;
        }
    }
}
