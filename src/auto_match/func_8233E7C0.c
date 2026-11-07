typedef struct BitReader_8233E7C0 {
    unsigned char state[16];
    unsigned char *ptr;
    int size;
    void *alloc;
    int f1c;
    int f20;
} BitReader_8233E7C0;

typedef struct BitPos_8233E7C0 {
    unsigned int byteOff : 29;
    unsigned int bitOff : 3;
} BitPos_8233E7C0;

typedef struct Obj_8233E7C0 Obj_8233E7C0;
typedef struct Vtbl_8233E7C0 {
    void *slots[16];
    void (*getData)(Obj_8233E7C0 *self, unsigned char *out);
} Vtbl_8233E7C0;
struct Obj_8233E7C0 {
    Vtbl_8233E7C0 *vt;
};

extern BitPos_8233E7C0 lbl_821B15DC[];
extern unsigned int lbl_821B15A0[];
extern void fn_828E9D28(BitReader_8233E7C0 *r, unsigned char *p, int n);
extern void fn_8223C610(BitReader_8233E7C0 *r, unsigned int bits, int a, int b);
extern void fn_8223C478(BitReader_8233E7C0 *r, unsigned int bits, int a);
extern void fn_828E9DB8(BitReader_8233E7C0 *r, int value, unsigned int bits);
extern void fn_8233EBE0(Obj_8233E7C0 *self, unsigned char *data);
extern void fn_8265CA20(void *p);

void fn_8233E7C0(Obj_8233E7C0 *self, int value, int index)
{
    unsigned char buf[16];
    BitReader_8233E7C0 r;
    unsigned int byteOff;
    unsigned int bitOff;
    unsigned int bits;

    byteOff = lbl_821B15DC[index].byteOff;
    bitOff = lbl_821B15DC[index].bitOff;
    self->vt->getData(self, buf);
    r.ptr = buf + byteOff;
    r.alloc = 0;
    r.f1c = 0;
    r.f20 = 0;
    r.size = 5;
    fn_828E9D28(&r, r.ptr, 5);
    if (bitOff != 0) {
        fn_8223C610(&r, bitOff, 0, 0);
    }
    bits = lbl_821B15A0[index];
    fn_8223C478(&r, bits, 0);
    fn_828E9DB8(&r, value, bits);
    fn_8233EBE0(self, buf);
    if (r.alloc != 0) {
        fn_8265CA20(r.alloc);
    }
}
