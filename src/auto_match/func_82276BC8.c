typedef struct Mgr_82276BC8 { char pad[0x110]; void *list; } Mgr_82276BC8;
typedef struct Player_82276BC8 { char pad[0x8c8]; void *f8c8; } Player_82276BC8;
typedef struct Holder_82276BC8 { int f0; Player_82276BC8 *player; } Holder_82276BC8;
typedef struct Obj_82276BC8 {
    char pad0[0x18];
    void *f18;
    char pad1c[4];
    void *f20;
    char pad24[0xc];
    void *f30;
    int id34;
    int id38;
    char pad3c[4];
    int f40;
} Obj_82276BC8;

extern unsigned char lbl_832960A0[];

extern void fn_82292BC0(int, int, int);
extern void fn_822848B8(void *);
extern void fn_8226D6A0(void *);
extern Mgr_82276BC8 *fn_8249ABC0(void);
extern void fn_8249D980(void *, int);
extern void fn_8249DA08(void *, int);
extern void fn_8254B438(void *);
extern void fn_8251FA58(void *);
extern void fn_82359C18(Obj_82276BC8 *);

static __forceinline Player_82276BC8 *GetPlayer_82276BC8(Holder_82276BC8 *h)
{
    return h != 0 ? h->player : 0;
}

void fn_82276BC8(Obj_82276BC8 *self)
{
    void *list;

    fn_82292BC0(0, 0, 0);
    if (self->f18 != 0) {
        fn_822848B8(self->f18);
        self->f18 = 0;
    }
    if (self->f30 != 0) {
        fn_8226D6A0(self->f30);
        self->f30 = 0;
    }
    list = fn_8249ABC0()->list;
    if (self->id34 != -1) {
        fn_8249D980(list, self->id34);
        self->id34 = -1;
    }
    if (self->id38 != -1) {
        fn_8249DA08(list, self->id38);
        self->id38 = -1;
    }
    if (self->f40 != 0) {
        Player_82276BC8 *p = GetPlayer_82276BC8(*(Holder_82276BC8 **)(lbl_832960A0 + 0xec));
        if (p != 0 && p->f8c8 != 0)
            fn_8254B438(p->f8c8);
        self->f40 = 0;
    }
    if (self->f20 != 0) {
        fn_8251FA58(self->f20);
        self->f20 = 0;
    }
    fn_82359C18(self);
}
