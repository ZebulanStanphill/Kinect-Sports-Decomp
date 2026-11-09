/* make_shared-style allocation: ref-count block (vtable, uses, weak) followed by
   the object at +0xc, constructed by fn_822E8430; returns the shared_ptr pair. */
extern void fn_822E8430(void *obj, int a, int b, const short *c, const short *d, float e);
extern void *fn_8265C9E0(unsigned int);
extern char lbl_821AD588[];

struct CB_822E7DC8 { void *vt; int uses; int weak; int obj[7]; };

void **fn_822E7DC8(void **param_1, int *a, int b, int *c, int *d, float *e)
{
    struct CB_822E7DC8 *cb = (struct CB_822E7DC8 *)fn_8265C9E0(0x28);
    if (cb) {
        cb->uses = 1;
        cb->vt = lbl_821AD588;
        cb->weak = 1;
        if (cb->obj) {
            short sd = (short)*d;
            short sc = (short)*c;
            fn_822E8430(cb->obj, *a, b, &sc, &sd, *e);
        }
    } else {
        cb = 0;
    }
    param_1[1] = cb;
    param_1[0] = cb->obj;
    return param_1;
}
