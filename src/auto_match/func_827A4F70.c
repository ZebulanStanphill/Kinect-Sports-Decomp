typedef struct Inner_827A4F70 {
    int pad0[2];
    void *stream; /* 0x08 */
} Inner_827A4F70;

typedef struct Obj_827A4F70 {
    int pad0[2];
    Inner_827A4F70 *inner; /* 0x08 */
    int pad0c[3];
    unsigned int length; /* 0x18 */
    char pad1c[0x68 - 0x1c];
    unsigned short flags; /* 0x68 */
} Obj_827A4F70;

extern unsigned int fn_827912D8(void *stream);
extern void fn_827A3A50(Obj_827A4F70 *self, unsigned int pos, int b);

/* The flag tests go through a helper with a 16-bit parameter (shift, then the low bit). */
static __forceinline unsigned char Bit0(short v)
{
    return v & 1;
}

void fn_827A4F70(Obj_827A4F70 *self, unsigned int mode)
{
    unsigned int pos;
    unsigned short f;

    if (mode & 0x102) {
        f = self->flags;
        if (Bit0(f) && !Bit0(f >> 1)) {
            return;
        }
        pos = 0;
    } else {
        if (self->length <= fn_827912D8(self->inner->stream)) {
            return;
        }
        pos = fn_827912D8(self->inner->stream);
        f = self->flags;
    }
    fn_827A3A50(self, pos, (f >> 1) & 1);
}
