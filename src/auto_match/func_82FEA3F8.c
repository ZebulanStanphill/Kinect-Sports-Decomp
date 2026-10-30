typedef struct Res Res;
typedef struct { void *f0, *f4; void (*release)(Res *); } ResVt;
struct Res { ResVt *vt; int x4, x8; int size; int x10; char data[1]; };
extern Res *fn_82FAB9C0(void *mgr, int id);
extern int fn_8300E980(void *data, int size, int a, int b);
extern char *lbl_832642E0;

int fn_82FEA3F8(int id, int a, int b)
{
    Res *r = fn_82FAB9C0(lbl_832642E0 + 0x1628, id);
    int result;
    if (r == 0) {
        return 0;
    }
    result = fn_8300E980(r->data, r->size, a, b);
    r->vt->release(r);
    return result;
}
