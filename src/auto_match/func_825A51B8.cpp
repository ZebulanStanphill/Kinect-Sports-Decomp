// Game code that loads the convex vertices shapes of a resource entry of type 3: one packfile, or one per
// part (then an hkpListShape over them, 82D3E3F0), each read with an hkBinaryPackfileReader
// over an hkMemoryStreamReader in place.
#include "havok/hkMemoryStreamReader.h"
#include "havok/hkBinaryPackfileReader.h"
#include "havok/hkpListShape.h"
inline void *operator new(unsigned int,void *p) throw() { return p; }
extern "C" {
unsigned char *fn_82CEBB58(void *, void *);
hkReferencedObject **fn_825A2410(void *);
void *fn_8265CA60(unsigned int);
void fn_8265CAA0(void *);
}
inline void *operator new[](unsigned int size) { return fn_8265CA60(size); }
struct Blob {
    const char *data;
    int size;
    int pad;
    int count;
    unsigned int *offsets;
    int *sizes;
};
struct Entry { int type; Blob *blob; };
struct Obj {
    Entry *entries;
    unsigned int count;
    hkReferencedObject *shape;
    int state;
    int pad;
    int reference;
};
static HK_FORCE_INLINE Blob *findBlob(Obj *o)
{
    for (unsigned int i=0;i<o->count;++i)
        if (o->entries[i].type==3) return o->entries[i].blob;
    return 0;
}
extern "C" void fn_825A51B8(Obj *o)
{
    struct Stack { unsigned char result; char padding[15]; char stream[0x20]; } stack;
    Blob *blob=findBlob(o);
    if (!blob) return;
    if (blob->count==1) {
        hkBinaryPackfileReader reader;
        o->state=1;
        new (stack.stream) hkMemoryStreamReader(blob->data, blob->size, hkMemoryStreamReader::MEMORY_INPLACE);

        if (*fn_82CEBB58(&stack.result,stack.stream) && reader.loadEntireFile(reinterpret_cast<hkStreamReader *>(stack.stream))==HK_SUCCESS) {
            o->shape=(hkReferencedObject *)reader.getContents("hkpConvexVerticesShape");
            hkReferencedObject *r=reader.getPackfileData();
            r->addReference(); r->addReference();
            *fn_825A2410(&o->reference)=r;
        }
        reinterpret_cast<hkMemoryStreamReader *>(stack.stream)->hkMemoryStreamReader::~hkMemoryStreamReader();
            } else {
        o->state=2;
        int count=blob->count;
        unsigned int *offsets=blob->offsets;
        int *sizes=blob->sizes;
        hkReferencedObject **shapes=new hkReferencedObject *[count];
        for (int i=0;i<count;++i) {
            const char *data=blob->data+offsets[i];
            hkBinaryPackfileReader reader;
            new (stack.stream) hkMemoryStreamReader(data, sizes[i], hkMemoryStreamReader::MEMORY_INPLACE);
    
            if (*fn_82CEBB58(&stack.result,stack.stream) && reader.loadEntireFile(reinterpret_cast<hkStreamReader *>(stack.stream))==HK_SUCCESS) {
                shapes[i]=(hkReferencedObject *)reader.getContents("hkpConvexVerticesShape");
                hkReferencedObject *r=reader.getPackfileData();
                r->addReference(); r->addReference();
                *fn_825A2410(&o->reference)=r;
            }
            reinterpret_cast<hkMemoryStreamReader *>(stack.stream)->hkMemoryStreamReader::~hkMemoryStreamReader();
                    }
        o->shape=new hkpListShape((const hkpShape *const *)shapes,count,hkpShapeContainer::REFERENCE_POLICY_INCREMENT);
        for (int i=0;i<count;++i) shapes[i]->removeReference();
        fn_8265CAA0(shapes);
    }
}
