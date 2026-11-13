typedef struct Res_82FEA470 Res_82FEA470;
typedef struct { void *f0, *f4; void (*release)(Res_82FEA470 *); } ResVt_82FEA470;
struct Res_82FEA470 { ResVt_82FEA470 *vt; int x4, x8; int size; int x10; char data[1]; };

extern void *_alloca(unsigned int size);
extern int fn_82FE8948(void *name);
extern Res_82FEA470 *fn_82FAB9C0(void *mgr, int id);
extern int fn_8301E690(Res_82FEA470 *r, void *src, int *values, int count);
extern int fn_8300E980(void *data, int size, int *values, int count);
extern char *lbl_832642E0;

int fn_82FEA470(void *name, void *src, int count)
{
    Res_82FEA470 *r = fn_82FAB9C0(lbl_832642E0 + 0x1628, fn_82FE8948(name));
    int result;
    int *values;

    if (r == 0) {
        return 0;
    }
    values = (int *)_alloca(count * 4);
    result = 0;
    if (fn_8301E690(r, src, values, count) == 1) {
        result = fn_8300E980(r->data, r->size, values, count);
    }
    r->vt->release(r);
    return result;
}
