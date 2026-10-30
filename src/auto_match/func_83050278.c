typedef struct {
    char pad[0x10];
    __int64 x10;
    char pad2[0x24 - 0x18];
    unsigned char flags24;
} Obj_83050278;

__int64 fn_83050278(Obj_83050278 *o, unsigned char *out)
{
    if (out != 0) {
        /* the flags word sits just before the object */
        *out = (((unsigned int *)o)[-1] & 0x10000000) != 0 && (o->flags24 & 1) == 0;
    }
    return o->x10;
}
