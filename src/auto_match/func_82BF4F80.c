typedef struct Writer {
    char pad[0x50];
    unsigned short count;
} Writer;

extern void fn_82BE6720(Writer *w, unsigned char v, int flag);
extern void fn_82BE6760(Writer *w, unsigned short v, int flag);
extern void fn_82BE67A0(Writer *w, unsigned int v, int flag);
extern void fn_82BE67E0(Writer *w, unsigned __int64 v, int flag);
extern void fn_82BE6840(Writer *w, float v, int flag);
extern int fn_82BF4EE8(Writer *w, int tag);

int fn_82BF4F80(Writer *w, int a, unsigned int b, unsigned int c, unsigned int d,
                unsigned __int64 e, unsigned __int64 f, unsigned short g, float x,
                unsigned short h)
{
    if (fn_82BF4EE8(w, 0x2f) != 0) {
        fn_82BE6720(w, 0xdf, 0);
        fn_82BE67A0(w, 0x2e, 0);
        fn_82BE6720(w, 0x36, 0);
        fn_82BE6720(w, a, 0);
        fn_82BE6720(w, 0x26, 0);
        fn_82BE67A0(w, b, 0);
        fn_82BE6720(w, 0x15, 0);
        fn_82BE67A0(w, c, 0);
        fn_82BE6720(w, 0x32, 0);
        fn_82BE67A0(w, d, 0);
        fn_82BE6720(w, 0x33, 0);
        fn_82BE67E0(w, e, 0);
        fn_82BE6720(w, 0x34, 0);
        fn_82BE67E0(w, f, 0);
        fn_82BE6720(w, 0x35, 0);
        fn_82BE6760(w, g, 0);
        fn_82BE6720(w, 0x30, 0);
        fn_82BE6840(w, x, 0);
        fn_82BE6720(w, 0x46, 0);
        fn_82BE6760(w, h, 0);
        w->count++;
    }
    return 0;
}
