typedef struct Obj_830273B8 {
    char pad0[0x33];
    unsigned char flags;
    int size;
    char pad38[0xc];
    void *data;
    int count;
} Obj_830273B8;

extern int lbl_832642F8;
extern int fn_8301B348(int ctx, void *dest, void *data, int count, int size, unsigned char flags, void *out);

int fn_830273B8(Obj_830273B8 *o, void *dest, void *out)
{
    return fn_8301B348(lbl_832642F8, dest, o->data, o->count, o->size, o->flags, out);
}
