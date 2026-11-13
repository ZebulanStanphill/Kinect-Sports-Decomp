typedef struct Obj_828ABBC0 {
    char pad[8];
    unsigned char varLength;
    char pad9[3];
    int base;
    int pad10;
    int size;
} Obj_828ABBC0;

extern int fn_828E9DA8(void *r);
extern int fn_828E9D90(void *r);
extern int fn_828E9FF8(void *r, int bits);

void fn_828ABBC0(Obj_828ABBC0 *self, void *r, int *out)
{
    int n;
    int len;

    if (self->varLength != 0) {
        if (fn_828E9DA8(r) - fn_828E9D90(r) >= 5)
            n = fn_828E9FF8(r, 5);
        else
            n = 0;
        len = n + 1;
        if (len <= fn_828E9DA8(r) - fn_828E9D90(r))
            n = fn_828E9FF8(r, len);
        else
            n = 0;
        if (out != 0)
            *out = n;
    } else {
        len = self->size;
        if (len <= fn_828E9DA8(r) - fn_828E9D90(r))
            n = fn_828E9FF8(r, len);
        else
            n = 0;
        if (out != 0)
            *out = self->base + n;
    }
}
