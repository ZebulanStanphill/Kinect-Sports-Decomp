typedef struct Elem_827F7090 {
    float pad0[3];
    float w;             /* 0x0c */
    float pad10[4];
    float x;             /* 0x20 */
    float y;             /* 0x24 */
    float z;             /* 0x28 */
    float pad2c;
} Elem_827F7090;

typedef struct Obj_827F7090 {
    char pad0[0x32];
    unsigned short count;        /* 0x32 */
    char pad34[0x84 - 0x34];
    Elem_827F7090 *elems;        /* 0x84 */
} Obj_827F7090;

extern unsigned int fn_827F7028(Obj_827F7090 *self);
extern void *XMemSet(void *dst, int value, unsigned int size);

void fn_827F7090(Obj_827F7090 *self)
{
    unsigned int count = self->count;
    Elem_827F7090 *e = self->elems;
    unsigned short i;

    XMemSet(e, 0, fn_827F7028(self));
    for (i = 0; i < count; i++) {
        e->w = 1.0f;
        e->x = 1.0f;
        e->y = 1.0f;
        e->z = 1.0f;
        e++;
    }
}
