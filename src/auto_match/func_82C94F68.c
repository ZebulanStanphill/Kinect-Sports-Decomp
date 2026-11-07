typedef struct Obj_82C94F68 {
    char pad0[0x88];
    int stride;
    char pad8C[0x6F0 - 0x8C];
    unsigned short *map;
    char pad6F4[0x55D0 - 0x6F4];
    int *rows;
} Obj_82C94F68;

int fn_82C94F68(Obj_82C94F68 *o, int x, int y)
{
    int idx;
    int pitch;
    int r;

    idx = o->stride * y * 2 + x;
    pitch = o->stride * 2;
    r = 0;
    if ((y & 1) != 0 || (y != 0 && o->rows[y >> 1] == 0)) {
        if (o->map[idx - pitch] == 0x4000) {
            r = 1;
        }
    }
    if (x == 0) {
        return r;
    }
    if (o->map[idx - 1] != 0x4000) {
        return r;
    }
    return 1;
}
