// Game code that loads a packfile embedded in a resource: finds the entry of
// type 5, reads it through an hkIArchive over the memory and returns the
// hkRootLevelContainer. It needs C++ because hkIArchive's constructor and
// destructor are renamed (??0hkIArchive@@QAA@PBXHVhkBool@@@Z, ??1hkIArchive@@UAA@XZ).
// The packfile is read with an hkBinaryPackfileReader.
#include "havok/hkBase.h"

#include "havok/hkIArchive.h"
#include "havok/hkBinaryPackfileReader.h"

extern "C" {
int *fn_825A2410(int *p);
void fn_82E10A30(hkPackfileReader *reader, unsigned int v);
extern unsigned int lbl_8323FDE4;
}

struct Blob {
    const void *data;
    unsigned int size;
};

struct Entry {
    int type;
    Blob *data;
};

struct Obj {
    Entry *entries;
    unsigned int count;
    int f8;
    int fc;
    int f10;
    int sub14;
};

static Blob *find(Obj *o, int type)
{
    unsigned int i;
    for (i = 0; i < o->count; i++) {
        if (o->entries[i].type == type)
            return o->entries[i].data;
    }
    return 0;
}

extern "C" void *fn_826034A0(Obj *o)
{
    Blob *b = find(o, 5);
    if (b != 0 && b->size != 0) {
        hkIArchive ar(b->data, b->size, false);
        hkBinaryPackfileReader reader;
        reader.loadEntireFile(ar.getStreamReader());
        fn_82E10A30(&reader, lbl_8323FDE4);
        void *root = reader.getContents("hkRootLevelContainer");
        hkPackfileData *data = reader.getPackfileData();
        data->addReference();
        *fn_825A2410(&o->sub14) = (int)data;
        return root;
    }
    return 0;
}
