typedef struct Obj_828D91D8 Obj_828D91D8;

typedef struct Vtbl_828D91D8 {
    void *pad[16];
    void (*Read)(Obj_828D91D8 *self, unsigned char *buf);
} Vtbl_828D91D8;

struct Obj_828D91D8 {
    Vtbl_828D91D8 *vt;
};

typedef struct BitStream_828D91D8 {
    int hdr[4];
    unsigned char *data;
    int size;
    void *alloc;
    int f1;
    int f2;
} BitStream_828D91D8;

typedef struct BitPos_828D91D8 {
    unsigned int byteOff : 29;
    unsigned int bitOff : 3;
} BitPos_828D91D8;

extern BitPos_828D91D8 lbl_82024DA0[];

extern void fn_8265CA20(void *p);
extern void fn_828E9D28(BitStream_828D91D8 *s, unsigned char *data, int size);
extern int fn_828E9D90(BitStream_828D91D8 *s);
extern int fn_828E9DA8(BitStream_828D91D8 *s);
extern void fn_828E9FF8(BitStream_828D91D8 *s, int bits);
extern void fn_828EA180(BitStream_828D91D8 *s, int a, int b);

void fn_828D91D8(Obj_828D91D8 *obj, int index, int value, int count)
{
    unsigned char buf[32];
    BitStream_828D91D8 s;
    unsigned int bytes;
    unsigned int bits;

    bytes = lbl_82024DA0[index].byteOff;
    bits = lbl_82024DA0[index].bitOff;
    obj->vt->Read(obj, buf);
    s.data = buf + bytes;
    s.alloc = 0;
    s.f1 = 0;
    s.f2 = 0;
    s.size = 0x19;
    fn_828E9D28(&s, s.data, 0x19);
    if (bits != 0) {
        if ((int)bits <= fn_828E9DA8(&s) - fn_828E9D90(&s)) {
            fn_828E9FF8(&s, bits);
        }
    }
    if (count * 8 <= fn_828E9DA8(&s) - fn_828E9D90(&s)) {
        fn_828EA180(&s, value, count);
    }
    if (s.alloc != 0) {
        fn_8265CA20(s.alloc);
    }
}
