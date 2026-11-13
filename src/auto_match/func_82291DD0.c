/* Formats two numbers as L"%02d.%02d" and passes it to the movie's _root.SetScore, then clears
   _root.SetScoreRecord (the func_82278E58 argument-holder shape). */
typedef struct { int first; int second; void *p; } Arg_82291DD0;

typedef struct Obj_82291DD0 {
    char pad00[0x3c];
    int movie;
} Obj_82291DD0;

extern void fn_82273C88(Arg_82291DD0 *h);
extern void fn_82273CD8(Arg_82291DD0 *h, int kind);
extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...);
extern void fn_82672C20(int movie, const char *name, Arg_82291DD0 *args, int count);
extern char lbl_82196582[];

void fn_82291DD0(Obj_82291DD0 *o, int a, int b)
{
    Arg_82291DD0 h;
    unsigned short buf[10];

    fn_82528EE0(buf, 10, L"%02d.%02d", a, b);
    if (o->movie != 0) {
        h.first = 0;
        h.second = 0;
        fn_82273CD8(&h, 5);
        h.p = buf;
        fn_82672C20(o->movie, "_root.SetScore", &h, 1);
        fn_82273CD8(&h, 4);
        h.p = lbl_82196582;
        fn_82672C20(o->movie, "_root.SetScoreRecord", &h, 1);
        fn_82273C88(&h);
    }
}
