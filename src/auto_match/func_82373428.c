typedef struct Obj {
    char pad[0x10];
    int x10;
    char pad2[0x20 - 0x14];
    char x20[0x22c - 0x20];
    int x22c;
} Obj;

typedef struct Holder {
    char pad[8];
    int obj;
} Holder;

typedef struct Sub {
    char pad[0x40];
    unsigned int x40;
} Sub;

typedef struct Flag {
    char pad[4];
    unsigned char b;
} Flag;

typedef struct Mgr {
    char pad[0x40];
    int x40;
} Mgr;

typedef struct Self {
    char pad[0x30];
    Holder *x30;
    char pad2[0xa0 - 0x34];
    int xa0;
    char pad3[0x204 - 0xa4];
    int x204;
    char pad4[0x658 - 0x208];
    int x658;
    char pad5[0x9d8 - 0x65c];
    int x9d8;
    int x9dc;
} Self;

extern Flag *fn_82250A18(void);
extern Mgr *fn_8225F160(void);
extern int fn_82372F88(Self *s);
extern void *fn_824CCD80(int a);
extern void fn_825603C8(void *a, void *b, int c);
extern Flag *lbl_832975B0;

void fn_82373428(Self *s, int v)
{
    Mgr *m;
    Flag *f;
    Obj *o;

    if (s->x9dc != v) {
        s->x9dc = v;
        m = fn_8225F160();
        if (s->x9d8 != 0 && m->x40 == 1 && s->x30->obj != 0) {
            f = lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
            if (!f->b) {
                if (s->xa0 != 0 && ((Sub *)s->xa0)->x40 == 1) {
                    int r;
                    if (s->x204 == 0)
                        r = fn_82372F88(s) != -1;
                    else
                        r = s->x658;
                    if (r != 0)
                        return;
                }
                o = (Obj *)s->x30->obj;
                if (o->x22c != 1) {
                    fn_825603C8(fn_824CCD80(o->x10), o->x20, 1);
                    o->x22c = 1;
                }
            }
        }
    }
}
