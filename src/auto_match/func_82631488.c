#include <string.h>
typedef struct {
    unsigned int flags;
    unsigned int headerSize;
    unsigned int dataSize;
    unsigned int hdr;
    int i;
} Desc_82631488;
typedef union {
    unsigned int flags;
    unsigned __int64 q[5];
} ObjHead_82631488;
typedef struct {
    ObjHead_82631488 head;
    char header[1];
} Obj_82631488;

extern int (*lbl_83275B48)(void);
extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_82A1DDC0(void *dst, const void *src, unsigned int size);
extern void fn_82631450(Obj_82631488 *o, void *data);

Obj_82631488 *fn_82631488(Desc_82631488 *d)
{
    Obj_82631488 *o;
    void *data;
    unsigned int dataSize;
    unsigned int hdr;
    int i;
    char *src;
    if (lbl_83275B48 != 0 && lbl_83275B48() == 0)
        return 0;
    dataSize = d->dataSize;
    src = (char *)d + d->headerSize;
    o = (Obj_82631488 *)fn_8265C940(((d->flags & 1) ? 0x368 : 0x28) + d->headerSize, 0x24800000);
    if (o == 0)
        return 0;
    hdr = d->headerSize;
    for (i = 0; i < 5; i++)
        o->head.q[i] = 0;
    fn_82A1DDC0(o->header, d, hdr);
    data = fn_8265C940(dataSize, 0xb5800000);
    if (data == 0) {
        fn_8265C990(o, 0x24800000);
        return 0;
    }
    memcpy(data, src, dataSize);
    fn_82631450(o, data);
    o->head.flags |= 0x100000;
    return o;
}
