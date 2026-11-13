typedef struct Val_822A3B90 {
    int w0;
    int type;
    union {
        void *p;
        unsigned char b;
        double d;
    } u;
} Val_822A3B90;

typedef struct Ref_822A3B90 {
    void *p;
    void *rc;
} Ref_822A3B90;

typedef struct Self_822A3B90 {
    void *vt;
    void *movie;
    void *movieRc;
    char padC[0x28 - 0xc];
    void *loc;
} Self_822A3B90;

void *memset(void *dst, int value, unsigned int size);
extern unsigned short lbl_820E975C;
extern void fn_82526C10(char *dst, int size, const char *src);
extern void fn_82528BF8(void *loc, const char *key, unsigned short *out, int size, int a, int b);
extern void fn_82273CD8(Val_822A3B90 *v, int type);
extern void fn_82273C88(Val_822A3B90 *v);
extern void fn_82517978(Ref_822A3B90 *out, void *p, void *rc, int flag);
extern void fn_82672F30(void *movie, const char *path, int a, Val_822A3B90 *v, int b, int c);
extern void fn_822315A0(void *rc);

void fn_822A3B90(Self_822A3B90 *self, const char *suffix)
{
    Ref_822A3B90 r;
    Val_822A3B90 v;
    unsigned short text[0x100] = {lbl_820E975C};
    char key[0x20] = "jumbotron";
    char path[0x20] = "_root.loctext";

    v.w0 = 0;
    v.type = 0;
    fn_82526C10(key, 0x20, suffix);
    fn_82528BF8(self->loc, key, text, 0x100, 1, 1);
    fn_82273CD8(&v, 5);
    v.u.p = text;
    fn_82526C10(path, 0x20, suffix);
    r.p = 0;
    r.rc = 0;
    fn_82517978(&r, self->movie, self->movieRc, 0);
    fn_82672F30(r.p, path, 0, &v, 1, 1);
    if (r.rc != 0) {
        fn_822315A0(r.rc);
    }
    fn_82273C88(&v);
}
