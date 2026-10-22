extern void *fn_8225F160(void);
extern unsigned char fn_823AB478(int a);
extern void *fn_8245AE18(void);
extern void fn_8245AF50(void *w, int id);
extern void fn_8245AFC0(void *w, int a, int b);
extern void fn_8245B050(void *w, unsigned int v, int n);
extern void fn_8245B100(void *w);
extern int fn_8245B1F0(void);
extern void fn_824B70F0(void);
extern unsigned char fn_82512508(int a);
extern unsigned char fn_828EA5F8(int a);
extern unsigned char fn_828EA610(int a);

typedef struct Settings {
    char pad[0x18];
    int a;
    int b;
    int p5;
    int p6;
    int mode;
} Settings;

typedef struct Writer {
    char pad[0x14];
    int started;
} Writer;

void fn_824B7EB0(int player, int mode, int p3, int p4, int p5, int p6)
{
    Settings *s;
    Writer *w;
    int m;
    unsigned char id;

    if (p3 > 1 || p4 > 0) {
        m = 4;
    } else {
        m = mode;
    }
    s = (Settings *)fn_8225F160();
    s->a = 0;
    s->b = 0;
    s->mode = m;
    s->p5 = p5;
    s->p6 = p6;
    if (!fn_828EA610(player) && fn_828EA5F8(player) && fn_82512508(player)) {
        w = (Writer *)fn_8245AE18();
        if (fn_8245B1F0() != 0) {
            fn_8245AF50(w, 0x15);
            if (w->started == 0) {
                w->started = 1;
            }
            id = fn_823AB478(player);
            fn_8245B050(w, id, 4);
            fn_8245B050(w, (unsigned char)m, 4);
            fn_8245B050(w, (unsigned char)p3, 4);
            fn_8245B050(w, (unsigned char)p4, 4);
            fn_8245B050(w, (unsigned char)p5, 4);
            fn_8245B050(w, (unsigned char)p6, 4);
            fn_8245B100(w);
            fn_824B70F0();
            fn_8245AFC0(w, 0, 0);
        }
    }
}
