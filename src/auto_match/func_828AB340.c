typedef struct Obj_828AB340 {
    char pad[0x58];
    unsigned char varLength;    /* 0x58 */
    char pad59[3];
    int base;                   /* 0x5c */
    int pad60;
    int size;                   /* 0x64 */
} Obj_828AB340;

typedef struct Value_828AB340 {
    int unk0;
    int type;   /* 0x4 */
    int value;  /* 0x8 */
} Value_828AB340;

extern int fn_828E9DA8(void *r);
extern int fn_828E9D90(void *r);
extern int fn_828E9FF8(void *r, int bits);

void fn_828AB340(Obj_828AB340 *self, void *unused, void *r, Value_828AB340 *out)
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
        if (out != 0) {
            int *type = &out->type;
            *type = 4;
            out->value = n;
        }
    } else {
        len = self->size;
        if (len <= fn_828E9DA8(r) - fn_828E9D90(r))
            n = fn_828E9FF8(r, len);
        else
            n = 0;
        if (out != 0) {
            int *type = &out->type;
            *type = 4;
            out->value = self->base + n;
        }
    }
}
