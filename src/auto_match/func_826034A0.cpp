// Game code that loads a packfile embedded in a resource: finds the entry of
// type 5, reads it through an hkIArchive over the memory and returns the
// hkRootLevelContainer. It needs C++ because hkIArchive's constructor and
// destructor are renamed (??0hkIArchive@@QAA@PBXHVhkBool@@@Z, ??1hkIArchive@@UAA@XZ).
// The packfile reader is used as an opaque object with its fn_ functions, as
// the matching fn_825A54A8 does.
#include "havok/hkBase.h"

#include "havok/hkIArchive.h"

extern "C" {
int *fn_825A2410(int *p);
void fn_82E0B980(void *reader);              // packfile reader constructor
void fn_82E0C7A0(void *reader);              // packfile reader destructor
int fn_82E0D7E8(void *reader, hkStreamReader *sr);
void fn_82E10A30(void *reader, unsigned int v);
void *fn_82E12AC8(void *reader, const char *className);
hkReferencedObject *fn_82E0C868(void *reader);
extern unsigned int lbl_8323FDE4;
}

struct PackfileReader {
    HK_FORCE_INLINE PackfileReader() { fn_82E0B980(this); }
    HK_FORCE_INLINE ~PackfileReader() { fn_82E0C7A0(this); }
    char m_storage[0x80];
};

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
        PackfileReader reader;
        fn_82E0D7E8(&reader, ar.getStreamReader());
        fn_82E10A30(&reader, lbl_8323FDE4);
        void *root = fn_82E12AC8(&reader, "hkRootLevelContainer");
        hkReferencedObject *data = fn_82E0C868(&reader);
        data->addReference();
        *fn_825A2410(&o->sub14) = (int)data;
        return root;
    }
    return 0;
}
