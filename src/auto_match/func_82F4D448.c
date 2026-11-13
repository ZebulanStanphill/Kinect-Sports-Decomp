typedef struct Entry_82F4D448 {
    unsigned char data[0x1c0];
} Entry_82F4D448;

typedef struct Table_82F4D448 {
    unsigned char header[0x30];
    Entry_82F4D448 entries[6];
} Table_82F4D448;

typedef struct Obj_82F4D448 {
    char pad0[0x2c];
    unsigned int index;    /* 0x2c */
} Obj_82F4D448;

extern Table_82F4D448 lbl_83261840;
extern void fn_824B4298(void *dst, const void *src, unsigned int size);

void fn_82F4D448(Obj_82F4D448 *self, Entry_82F4D448 *out)
{
    if (out == 0)
        return;
    if (self->index < 6)
        fn_824B4298(out, &lbl_83261840.entries[self->index], sizeof(Entry_82F4D448));
}
