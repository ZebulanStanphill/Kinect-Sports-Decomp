#include "havok/hkBase.h"
class hkStreamReader : public hkReferencedObject {
public: hkStreamReader(hkFinishLoadedObjectFlag f):hkReferencedObject(f) {}
};
class hkMemoryStreamReader : public hkStreamReader {
public:
    hkMemoryStreamReader(hkFinishLoadedObjectFlag f):hkStreamReader(f) {}
};
template <class T> static const void *getVtable()
{
    union { const void *vtable; char storage[sizeof(T)]; } u;
    hkFinishLoadedObjectFlag f;
    new (u.storage) T(f);
    return u.vtable;
}
struct StreamLayout {
    const void *vtable;
    unsigned short memSize; short references;
    char *buffer;
    int current, size, mark, memoryType;
};
extern "C" StreamLayout *fn_82CEBB90(StreamLayout *self,const void *data,int size,int type)
{
    self->size=size;
    self->memoryType=type;
    self->references=1;
    self->vtable=getVtable<hkMemoryStreamReader>();
    self->current=0;
    self->mark=-1;
    if (type==0) {
        self->buffer=(char *)hkMemoryRouter::easyAlloc(hkMemoryRouter::getInstance().heap(),size);
        fn_82CFC050(self->buffer,data,size);
    } else self->buffer=(char *)data;
    return self;
}
