typedef struct Loader_82520578 {
    int field0;      /* 0x0 */
    long pending;    /* 0x4 */
    int loading;     /* 0x8 */
    void *assetRefs; /* 0xc */
    void *first;     /* 0x10 */
} Loader_82520578;

extern long _InterlockedIncrement(long volatile *value);
extern unsigned int fn_8251F468(unsigned int *name, void **out, int kind, void *async, void (*callback)(void),
                                Loader_82520578 *context, int a, int b);
extern unsigned int fn_8265BF48(const char *text, int flags);
extern void fn_82520540(void);
extern void fn_82520360(void);
extern void fn_82520420(void);
extern unsigned int lbl_832961D0;
extern unsigned int lbl_832961D8;
extern unsigned char lbl_83276741;

void fn_82520578(Loader_82520578 *self)
{
    unsigned int name;

    _InterlockedIncrement(&self->pending);
    self->loading = 1;
    fn_8251F468(&lbl_832961D0, &self->first, 2, 0, fn_82520540, self, 0, 0);
    _InterlockedIncrement(&self->pending);
    fn_8251F468(&lbl_832961D8, 0, 2, 0, fn_82520360, self, 0, 0);
    name = fn_8265BF48("AMID_BRS_aidlist_olympus_gameassetrefs_default_bop", 0);
    if (lbl_83276741 == 0) {
        lbl_83276741 = 1;
    }
    _InterlockedIncrement(&self->pending);
    fn_8251F468(&name, &self->assetRefs, 2, 0, fn_82520420, self, 0, 0);
}
