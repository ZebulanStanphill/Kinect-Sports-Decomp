typedef struct Val_824696D0 { int w0; int type; union { void *p; double d; } u; } Val_824696D0;
typedef struct Obj_824696D0 { int pad0; int movie; } Obj_824696D0;

extern unsigned short lbl_820E975C;
extern void fn_82469B10(Obj_824696D0 *self, unsigned short *text, float score);
extern void fn_82273CD8(Val_824696D0 *, int);
extern void fn_82273C88(Val_824696D0 *);
extern void fn_82672C20(int movie, const char *path, Val_824696D0 *args, int count);

void fn_824696D0(Obj_824696D0 *self, float score1, float score2)
{
    unsigned short text1[0x40] = { lbl_820E975C };
    unsigned short text2[0x40] = { lbl_820E975C };
    Val_824696D0 args[2];
    int i;
    Val_824696D0 *v;

    if (score1 >= 0.0f) {
        fn_82469B10(self, text1, score1);
    }
    if (score2 >= 0.0f) {
        fn_82469B10(self, text2, score2);
    }
    for (i = 0; i < 2; i++) {
        args[i].w0 = 0;
        args[i].type = 0;
    }
    fn_82273CD8(&args[0], 5);
    args[0].u.p = text1;
    fn_82273CD8(&args[1], 5);
    args[1].u.p = text2;
    fn_82672C20(self->movie, "_root.SetScores", args, 2);
    v = &args[2];
    i = 1;
    do {
        v--;
        fn_82273C88(v);
        i--;
    } while (i >= 0);
}
