typedef struct Obj_82354000 {
    void *prev;           /* 0x0 */
    void *child;          /* 0x4 */
} Obj_82354000;

typedef struct Child_82354000 {
    char pad0[0x41c];
    void *vt;             /* 0x41c */
    char pad1[0x434 - 0x420];
} Child_82354000;

extern int fn_8229DCA8(void *self, unsigned short *a, unsigned short *b,
                       unsigned short *c, unsigned short *d, void *cb, void *owner,
                       int x, int y);
extern void fn_8229E090(void *p, int a, int b);
extern void fn_8229E410(void *p);
extern int fn_82528BF8(int mgr, const char *key, unsigned short *buf, int n,
                       int a, int b);
extern void *fn_8265C9E0(unsigned int size);
extern void fn_82354368(void);
extern char lbl_821A8C90[];
extern int lbl_83276728[];

static __forceinline void *create_82354000(unsigned short *a, unsigned short *b,
                                           unsigned short *c, unsigned short *d,
                                           Obj_82354000 *owner)
{
    Child_82354000 *p = (Child_82354000 *)fn_8265C9E0(0x434);
    if (p != 0) {
        p->vt = lbl_821A8C90;
        fn_8229DCA8(p, a, b, c, d, (void *)fn_82354368, owner, 1, 0);
        return p;
    }
    return 0;
}

void fn_82354000(Obj_82354000 *self)
{
    unsigned short yes[0x20];
    unsigned short no[0x20];
    unsigned short caption[0x100];
    unsigned short text[0x400];
    void *p;

    fn_82528BF8(lbl_83276728[2], "liveConnectError", caption, 0x100, 0, 1);
    fn_82528BF8(lbl_83276728[2], "livechangesettingsprompt", text, 0x400, 0, 1);
    fn_82528BF8(lbl_83276728[2], "yes", yes, 0x20, 0, 1);
    fn_82528BF8(lbl_83276728[2], "no", no, 0x20, 0, 1);
    if (self->child == 0) {
        if (self->prev != 0) {
            fn_8229E090(self->prev, 0, 1);
            self->prev = 0;
        }
        p = create_82354000(caption, text, yes, no, self);
        self->child = p;
        fn_8229E410(p);
    }
}
