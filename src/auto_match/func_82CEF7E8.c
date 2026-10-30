typedef struct Alloc_82CEF7E8 Alloc_82CEF7E8;
typedef struct {
    void *f0;
    void *(*alloc)(Alloc_82CEF7E8 *self, int size);
} AllocVt_82CEF7E8;
struct Alloc_82CEF7E8 {
    AllocVt_82CEF7E8 *vt;
};
typedef struct {
    char pad[0x10];
    Alloc_82CEF7E8 *alloc;
} Ctx_82CEF7E8;

extern Ctx_82CEF7E8 *fn_82CE5410(void);
extern void *fn_82CEFBD0(void *p, int n);
extern void *lbl_8323B46C;

void fn_82CEF7E8(void)
{
    Alloc_82CEF7E8 *a = fn_82CE5410()->alloc;
    void *p = a->vt->alloc(a, 0x1c);
    if (p != 0) {
        lbl_8323B46C = fn_82CEFBD0(p, 1000);
        return;
    }
    lbl_8323B46C = 0;
}
