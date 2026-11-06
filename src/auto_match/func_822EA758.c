typedef struct Blk_822EA758 {
    void *vt;
    int uses;
    int weaks;
    char obj[0x2c];
} Blk_822EA758;

typedef struct Out_822EA758 {
    void *ptr;
    Blk_822EA758 *blk;
} Out_822EA758;

extern void *fn_8265C9E0(unsigned int size);
extern void fn_82320440(void *obj, void *a, float x, float y);
extern char lbl_821AD588[];

Out_822EA758 *fn_822EA758(Out_822EA758 *out, void *a, const float *x, const float *y)
{
    Blk_822EA758 *mem = (Blk_822EA758 *)fn_8265C9E0(0x38);
    Blk_822EA758 *p;

    if (mem != 0) {
        mem->uses = 1;
        mem->vt = lbl_821AD588;
        mem->weaks = 1;
        if (mem->obj != 0) {
            fn_82320440(mem->obj, a, *x, *y);
        }
        p = mem;
    } else {
        p = 0;
    }
    out->blk = p;
    out->ptr = p->obj;
    return out;
}
