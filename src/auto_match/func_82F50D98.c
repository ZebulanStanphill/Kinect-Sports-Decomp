typedef struct Inner_82F50D98 {
    char pad0[0x7d8];
    int id; /* 0x7d8 */
} Inner_82F50D98;

typedef struct Obj_82F50D98 {
    int unk0;
    Inner_82F50D98 *inner; /* 0x4 */
} Obj_82F50D98;

extern void *fn_82F4EBC0(unsigned char id);

void *fn_82F50D98(Obj_82F50D98 *self)
{
    return fn_82F4EBC0(self->inner->id);
}
