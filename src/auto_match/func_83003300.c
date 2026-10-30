typedef struct { int *begin; int *end; int pad; } Buf_83003300;
typedef struct Obj_83003300 Obj_83003300;
typedef struct { char pad[0x50]; void (*f50)(Obj_83003300 *); } VT_83003300;
struct Obj_83003300 {
    VT_83003300 *vt;
    char pad[0x74];
    unsigned int *buf;
};
extern char *lbl_831BC768;
extern unsigned int *fn_82FA5060(char *, int);
extern unsigned int *fn_82FF5D28(unsigned int *);
extern void fn_82FA5190(char *, unsigned int *);

int fn_83003300(Obj_83003300 *o, int val)
{
    unsigned int *p;
    if (o->buf == 0) {
        p = fn_82FA5060(lbl_831BC768, 0xc);
        o->buf = p;
        if (p != 0) {
            p[0] = 0;
            p[1] = 0;
            p[2] = 0;
        }
    }
    if (o->buf == 0 || (p = fn_82FF5D28(o->buf)) == 0) {
        unsigned int *b = o->buf;
        if (b != 0 && b[1] == b[0]) {
            fn_82FA5190(lbl_831BC768, b);
            o->buf = 0;
        }
        return 0x34;
    }
    p[0] = val;
    o->vt->f50(o);
    return 1;
}
