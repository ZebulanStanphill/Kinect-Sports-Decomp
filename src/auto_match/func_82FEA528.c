typedef struct Res_82FEA528 Res_82FEA528;
typedef struct { void *f0, *f4; void (*release)(Res_82FEA528 *); } ResVt_82FEA528;
struct Res_82FEA528 { ResVt_82FEA528 *vt; int x4, x8; int size; int x10; char data[1]; };

extern void *_alloca(unsigned int size);
extern int fn_82FE89F8(void *name);
extern Res_82FEA528 *fn_82FAB9C0(void *mgr, int id);
extern int fn_8301E708(Res_82FEA528 *r, void *src, int *values, int count);
extern int fn_8300E980(void *data, int size, int *values, int count);
extern char *lbl_832642E0;

int fn_82FEA528(void *name, void *src, int count)
{
    Res_82FEA528 *r = fn_82FAB9C0(lbl_832642E0 + 0x1628, fn_82FE89F8(name));
    int result;
    int *values;

    if (r == 0) {
        return 0;
    }
    values = (int *)_alloca(count * 4);
    result = 0;
    if (fn_8301E708(r, src, values, count) == 1) {
        result = fn_8300E980(r->data, r->size, values, count);
    }
    r->vt->release(r);
    return result;
}
