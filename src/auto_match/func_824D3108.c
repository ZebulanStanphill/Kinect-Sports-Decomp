long _InterlockedDecrement(long volatile *);

typedef struct Rep_824D3108 Rep_824D3108;
typedef struct RepVt_824D3108 {
    void (*destroy)(Rep_824D3108 *);
    void (*deleteThis)(Rep_824D3108 *);
} RepVt_824D3108;
struct Rep_824D3108 {
    RepVt_824D3108 *vt;
    long uses;
    long weaks;
};

typedef struct Ptr_824D3108 {
    void *px;
    Rep_824D3108 *rep;
} Ptr_824D3108;

typedef struct Lists_824D3108 {
    char pad0[0x14];
    char a[0x20];         /* 0x14 */
    char b[0x20];         /* 0x34 */
} Lists_824D3108;

typedef struct Obj_824D3108 {
    void *vt;
    char pad4[0x1c];
    int id;               /* 0x20 */
    char pad24[0xf0 - 0x24];
    char setA[0x480];     /* 0xf0 */
    char setB[0x480];     /* 0x570 */
    Lists_824D3108 lists; /* 0x9f0 */
    char pada44[0xa50 - 0xa44];
    void *handle;         /* 0xa50 */
} Obj_824D3108;

extern void *lbl_821C0D00;
extern void *lbl_821C0C34;
extern Ptr_824D3108 *fn_82F51468(Ptr_824D3108 *out, int id);
extern void fn_824D2AE8(Ptr_824D3108 *out, Ptr_824D3108 *src);
extern void fn_82F52C20(void *a, void *b, int c);
extern void fn_822315A0(Rep_824D3108 *rep);
extern void fn_82670C10(void *p);
extern void fn_824DBB48(void *p);
extern void fn_824CC9E8(Obj_824D3108 *o);

static __forceinline void Decwref_824D3108(Rep_824D3108 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

void fn_824D3108(Obj_824D3108 *self)
{
    Ptr_824D3108 sp;
    Ptr_824D3108 wp;
    Lists_824D3108 *lists;

    self->vt = &lbl_821C0D00;
    fn_824D2AE8(&sp, fn_82F51468(&wp, self->id));
    if (wp.rep != 0)
        Decwref_824D3108(wp.rep);
    if (self->handle != 0) {
        fn_82F52C20(sp.px, self->handle, 1);
        self->handle = 0;
    }
    if (sp.rep != 0)
        fn_822315A0(sp.rep);
    lists = &self->lists;
    fn_82670C10(lists->b);
    fn_82670C10(lists->a);
    fn_824DBB48(self->setB);
    fn_824DBB48(self->setA);
    self->vt = &lbl_821C0C34;
    fn_824CC9E8(self);
}
