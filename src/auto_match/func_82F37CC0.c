typedef struct IUnk IUnk;
typedef struct {
    int (*QueryInterface)(IUnk *, void *, void **);
    unsigned int (*AddRef)(IUnk *);
    unsigned int (*Release)(IUnk *);
} IUnkVtbl;
struct IUnk { IUnkVtbl *vt; };

extern int fn_82F37718(void *list, IUnk *p);

int fn_82F37CC0(char *self, IUnk *p)
{
    int hr;
    if (p == 0)
        return 0x80070057;
    hr = 0;
    if (fn_82F37718(self + 8, p) == 0)
        hr = 0x8007000e;
    else
        p->vt->AddRef(p);
    return hr;
}
