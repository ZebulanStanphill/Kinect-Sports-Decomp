#include "havok/hkBase.h"
inline void *operator new(unsigned int,void *p) throw() { return p; }
extern "C" {
void fn_82E0B980(void *);
void fn_82E0C7A0(void *);
void fn_82CEBB90(void *, const void *, int, int);
void fn_82CEBC18(void *);
unsigned char *fn_82CEBB58(void *, void *);
int fn_82E0D7E8(void *, void *);
void *fn_82E12AC8(void *, const char *);
hkReferencedObject *fn_82E0C868(void *);
hkReferencedObject **fn_825A2410(void *);
void *fn_8265CA60(unsigned int);
void fn_8265CAA0(void *);
hkReferencedObject *fn_82D3E3F0(void *, hkReferencedObject **, int, int);
}
inline void *operator new[](unsigned int size) { return fn_8265CA60(size); }
struct PackfileReader {
    HK_FORCE_INLINE PackfileReader() { fn_82E0B980(this); }
    HK_FORCE_INLINE ~PackfileReader() { fn_82E0C7A0(this); }
    char data[0x80];
};
struct MemoryStream {
    HK_FORCE_INLINE MemoryStream(const void *p,int n) { fn_82CEBB90(this,p,n,2); }
    HK_FORCE_INLINE ~MemoryStream() { fn_82CEBC18(this); }
    char data[0x1C];
};
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
    struct Stack { unsigned char result; char padding[15]; char stream[0x20]; char reader[0x80]; } stack;
    Blob *blob=findBlob(o);
    if (!blob) return;
    if (blob->count==1) {
        PackfileReader &reader=*new (stack.reader) PackfileReader;
        o->state=1;
        MemoryStream &stream=*new (stack.stream) MemoryStream(blob->data,blob->size);

        if (*fn_82CEBB58(&stack.result,&stream) && fn_82E0D7E8(&reader,&stream)==0) {
            o->shape=(hkReferencedObject *)fn_82E12AC8(&reader,"hkpConvexVerticesShape");
            hkReferencedObject *r=fn_82E0C868(&reader);
            r->addReference(); r->addReference();
            *fn_825A2410(&o->reference)=r;
        }
        stream.~MemoryStream();
        reader.~PackfileReader();
    } else {
        o->state=2;
        int count=blob->count;
        unsigned int *offsets=blob->offsets;
        int *sizes=blob->sizes;
        hkReferencedObject **shapes=new hkReferencedObject *[count];
        for (int i=0;i<count;++i) {
            const char *data=blob->data+offsets[i];
            PackfileReader &reader=*new (stack.reader) PackfileReader;
            MemoryStream &stream=*new (stack.stream) MemoryStream(data,sizes[i]);
    
            if (*fn_82CEBB58(&stack.result,&stream) && fn_82E0D7E8(&reader,&stream)==0) {
                shapes[i]=(hkReferencedObject *)fn_82E12AC8(&reader,"hkpConvexVerticesShape");
                hkReferencedObject *r=fn_82E0C868(&reader);
                r->addReference(); r->addReference();
                *fn_825A2410(&o->reference)=r;
            }
            stream.~MemoryStream();
            reader.~PackfileReader();
        }
        hkReferencedObject *shape=(hkReferencedObject *)hkReferencedObject::operator new(0x70);
        o->shape=fn_82D3E3F0(shape,shapes,count,1);
        for (int i=0;i<count;++i) shapes[i]->removeReference();
        fn_8265CAA0(shapes);
    }
}
