typedef struct Arr_82D541A0 {
    void *data;
    int size;
    int cap;
} Arr_82D541A0;

typedef struct Visitor_82D541A0 Visitor_82D541A0;

typedef struct VisitorVt_82D541A0 {
    void *f0;
    void *f4;
    void *f8;
    void *fC;
    void *f10;
    void (*f14)(Visitor_82D541A0 *self, int kind, const char *name, void *data, int bytes, int extra);
} VisitorVt_82D541A0;

struct Visitor_82D541A0 {
    VisitorVt_82D541A0 *vt;
    int f4;
    int f8;
};

extern int fn_82CFF8D0(void *data, int bytes);
extern void fn_82D71668(Arr_82D541A0 *arr, int arg, Visitor_82D541A0 *v);

void fn_82D541A0(int param_1, Visitor_82D541A0 *v)
{
    Arr_82D541A0 *a = (Arr_82D541A0 *)(param_1 + 0x30);
    if ((a->cap & (int)0x80000000) == 0) {
        int r = fn_82CFF8D0(a->data, a->cap << 2);
        v->vt->f14(v, 3, "SectorPtrs", a->data, a->size << 2, r);
    }
    fn_82D71668(a, v->f8, v);
}
