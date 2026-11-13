extern long _InterlockedExchangeAdd(long volatile *, long);

typedef struct Ref_82731388 { int pad; long refs; } Ref_82731388;
typedef struct Count_82731388 { int pad[2]; int count; } Count_82731388;

typedef struct Obj_82731388 {
    void *vt0;                  /* 0x00 */
    int pad04[2];
    void *vt0c;                 /* 0x0c */
    char pad10[0x58];
    void *vt68;                 /* 0x68 */
    char pad6c[0x34];
    void *fa0;                  /* 0xa0 */
    char pada4[0x10];
    Count_82731388 *fb4;        /* 0xb4 */
    char fb8[0x14];             /* 0xb8 */
    unsigned int taggedCC;      /* 0xcc */
    char fd0[8];                /* 0xd0 */
    char fd8[0xc];              /* 0xd8 */
    void *fe4;                  /* 0xe4 */
    void *fe8;                  /* 0xe8 */
} Obj_82731388;

extern char lbl_82011478[];
extern char lbl_8201146C[];
extern char lbl_82011418[];
extern void fn_8272B128(Obj_82731388 *self);
extern void fn_8279A190(void *p);
extern void fn_8272FFB0(void *p);
extern void fn_8267BE38(void *p);
extern void fn_826824B0(void *p);
extern void fn_8267C488(void *p);
extern void fn_8272B180(void *p, int a, int b);
extern void fn_82696330(void *p);
extern void fn_826944C8(Count_82731388 *c);
extern void fn_8267C498(void *p);
extern void fn_826A1370(Obj_82731388 *self);

void fn_82731388(Obj_82731388 *self)
{
    void *p;
    Ref_82731388 *r;
    Count_82731388 *c;

    self->vt0 = lbl_82011478;
    self->vt0c = lbl_8201146C;
    self->vt68 = lbl_82011418;
    fn_8272B128(self);
    fn_8279A190(self->fa0);
    p = self->fe4;
    if (p != 0) {
        fn_8272FFB0(p);
        fn_8267BE38(p);
    }
    if (self->fe8 != 0)
        fn_826824B0(self->fe8);
    fn_8267C488(self->fd8);
    fn_8272B180(self->fd0, 0, 1);
    r = (Ref_82731388 *)(self->taggedCC & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0)
        fn_8267BE38(r);
    fn_82696330(self->fb8);
    c = self->fb4;
    if (--c->count == 0)
        fn_826944C8(c);
    if (self->fa0 != 0)
        fn_8267C498(self->fa0);
    fn_826A1370(self);
}
