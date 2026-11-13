typedef struct Obj_8268FE90 {
    unsigned char pad[0x19c];
    unsigned int count;   /* 0x19c */
    unsigned int current; /* 0x1a0 */
    unsigned int pad1a4;  /* 0x1a4 */
    unsigned int flag;    /* 0x1a8 */
} Obj_8268FE90;

extern unsigned int fn_8268FCB8(Obj_8268FE90 *obj, unsigned int index, int a, int b);

unsigned int fn_8268FE90(Obj_8268FE90 *obj, int a, int b)
{
    unsigned int r;
    unsigned int i;

    if ((int)obj->current != -1) {
        r = fn_8268FCB8(obj, obj->current, a, b);
        if (r != 0) {
            return r;
        }
        obj->flag = 0;
    }
    for (i = 0; i < obj->count; i++) {
        if (i != obj->current) {
            r = fn_8268FCB8(obj, i, a, b);
            if (r != 0) {
                return r;
            }
            obj->flag = 0;
        }
    }
    return 0;
}
