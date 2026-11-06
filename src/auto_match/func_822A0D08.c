typedef struct Mgr_822A0D08 { char pad[0x58]; unsigned f58; } Mgr_822A0D08;
typedef struct Obj_822A0D08 {
    char pad[0x1c];
    int f1c;
    char pad20[0xd0 - 0x20];
    void *fd0;
} Obj_822A0D08;
typedef struct Big_822A0D08 {
    char pad[0x41c];
    void *vt;
} Big_822A0D08;
extern Mgr_822A0D08 *lbl_832975B0;
extern char lbl_821A8C90[];
extern char lbl_820E975C[];
extern Mgr_822A0D08 *fn_82250A18(void);
extern void fn_822A0DF8(void);
extern void fn_82358FD8(int a, char *buf, int n, const char *name);
extern void *fn_8265C9E0(unsigned size);
extern void fn_8229DCA8(void *self, char *a, char *b, char *c, char *d, void (*f)(void), Obj_822A0D08 *p, int one, int zero);

void fn_822A0D08(Obj_822A0D08 *p)
{
    Mgr_822A0D08 *m;
    Big_822A0D08 *o;
    char a[0x200];
    char b[0x800];

    if (lbl_832975B0 != 0)
        m = lbl_832975B0;
    else
        m = fn_82250A18();
    if (m->f58 == 0 && p->fd0 == 0) {
        fn_82358FD8(p->f1c, a, 0x100, "waitingForPlayers");
        fn_82358FD8(p->f1c, b, 0x400, "waitingForBatSelection");
        o = (Big_822A0D08 *)fn_8265C9E0(0x434);
        if (o != 0) {
            o->vt = lbl_821A8C90;
            fn_8229DCA8(o, a, b, lbl_820E975C, lbl_820E975C, fn_822A0DF8, p, 1, 0);
        } else {
            o = 0;
        }
        p->fd0 = o;
    }
}
