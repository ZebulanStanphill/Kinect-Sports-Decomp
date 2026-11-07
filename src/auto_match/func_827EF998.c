typedef struct Obj_827EF998 {
    char pad0[0x32];
    unsigned short count;
    char pad34[0x84 - 0x34];
    char *table;
} Obj_827EF998;

extern Obj_827EF998 *fn_827F3C20(void *p);

int *fn_827EF998(void *param_1, unsigned short param_2)
{
    unsigned int off;

    off = (fn_827F3C20(param_1)->count * 12 + param_2) * 4;
    return (int *)(fn_827F3C20(param_1)->table + off);
}
