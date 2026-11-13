typedef struct Obj_822311F0 {
    char pad0[0x58];
    void *child;          /* 0x58 */
    unsigned char flag;   /* 0x5c */
} Obj_822311F0;

typedef struct Child_822311F0 {
    char pad0[0x41c];
    void *vt;             /* 0x41c */
    char pad1[0x434 - 0x420];
} Child_822311F0;

extern int fn_8229DCA8(void *self, unsigned short *a, unsigned short *b,
                       unsigned short *c, char *name, void *cb, void *owner,
                       int x, int y);
extern void fn_8229E410(void *p);
extern void *fn_825129C8(int p);
extern int fn_82528BF8(int mgr, const char *key, unsigned short *buf, int n,
                       int a, int b);
extern void *fn_8265C9E0(unsigned int size);
extern void fn_82231390(void);
extern char lbl_821A8C90[];
extern char lbl_820E975C[];
extern char lbl_82196344[];
extern void *lbl_832760A4;
extern int lbl_83276728[];

static __forceinline void *create_822311F0(unsigned short *a, unsigned short *b,
                                           unsigned short *c, Obj_822311F0 *owner)
{
    Child_822311F0 *p = (Child_822311F0 *)fn_8265C9E0(0x434);
    if (p != 0) {
        p->vt = lbl_821A8C90;
        fn_8229DCA8(p, a, b, c, lbl_820E975C, (void *)fn_82231390, owner, 1, 0);
        return p;
    }
    return 0;
}

void fn_822311F0(Obj_822311F0 *param_1, int param_2)
{
    unsigned short title[0x20];
    unsigned short caption[0x100];
    unsigned short text[0x400];
    void *p;

    if (param_1->child == 0) {
        param_1->flag = 0;
    }
    fn_82528BF8(lbl_83276728[2], "liveConnectError", caption, 0x100, 0, 1);
    fn_82528BF8(lbl_83276728[2], "liveConnectError", text, 0x400, 0, 1);
    fn_82528BF8(lbl_83276728[2], lbl_82196344, title, 0x20, 0, 1);
    switch (param_2) {
    case 1: fn_82528BF8(lbl_83276728[2], "liveServiceLost", text, 0x400, 0, 1); break;
    case 2: fn_82528BF8(lbl_83276728[2], "liveSessionJoinError", text, 0x400, 0, 1); break;
    case 3: fn_82528BF8(lbl_83276728[2], "inviteTooLong", text, 0x400, 0, 1); break;
    case 4: fn_82528BF8(lbl_83276728[2], "inviteNotAccepted", text, 0x400, 0, 1); break;
    case 5: fn_82528BF8(lbl_83276728[2], "liveSessionJoinError", text, 0x400, 0, 1); break;
    case 6: fn_82528BF8(lbl_83276728[2], "liveOpponentLeft", text, 0x400, 0, 1); break;
    default: return;
    }
    if (param_1->child == 0) {
        p = create_822311F0(caption, text, title, param_1);
        param_1->child = p;
        fn_8229E410(p);
        if (lbl_832760A4 == 0) {
            lbl_832760A4 = fn_825129C8(0);
        }
    }
}
