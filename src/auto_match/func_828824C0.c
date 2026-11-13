typedef struct Obj_828824C0 {
    char pad0[0x8];
    int id;                 /* 0x08 */
    unsigned char disabled; /* 0x0c */
    char pad0d[0x4b];
    unsigned char data[8];  /* 0x58 */
} Obj_828824C0;

extern char lbl_831599FC[];
extern void fn_8223C478(void *writer, unsigned int bits, int flags);
extern void fn_828E9DB8(void *writer, unsigned int value, unsigned int bits);
extern void fn_828EA2D8(void *writer, const void *data, unsigned int bytes);

static __forceinline void WriteBits(void *writer, unsigned int value, unsigned int bits)
{
    fn_8223C478(writer, bits, 0);
    fn_828E9DB8(writer, value, bits);
}

void fn_828824C0(Obj_828824C0 *self)
{
    if (self->id >= 0) {
        WriteBits(lbl_831599FC, 1, 1);
        WriteBits(lbl_831599FC, 0, 1);
        WriteBits(lbl_831599FC, self->disabled == 0, 1);
        fn_8223C478(lbl_831599FC, 0x40, 0);
        fn_828EA2D8(lbl_831599FC, self->data, 8);
    } else {
        WriteBits(lbl_831599FC, 0, 1);
    }
}
