extern int fn_824CC840();
extern int fn_824CD030();
extern int fn_824D7968();
extern float lbl_82193E50;
extern char lbl_821C0E94[];

typedef struct {
    char pad[0x10];
    float f10;
} Sub;

typedef struct {
    void *vtbl;
    char pad04[0x1c];
    Sub *sub;
    char pad24[0xbc];
    unsigned char bE0;
    char padE1[0xf];
    int a[14];
} Obj;

Obj *fn_824D73E8(Obj *p, int arg)
{
    fn_824CC840();
p->bE0 = 1;
p->a[0] = 0;
p->vtbl = lbl_821C0E94;
p->a[1] = 0;
    p->a[1] = 0;
    p->a[2] = 0;
    p->a[3] = 0;
    p->a[4] = 0;
    p->a[5] = 0;
    p->a[6] = 0;
    p->a[7] = 0;
    p->a[8] = 0;
    p->a[9] = 0;
    p->a[10] = 0;
    p->a[11] = 0;
    p->a[12] = 0;
    p->a[13] = 0;
    if (fn_824CD030(p) != 0) {
        fn_824D7968(p, arg);
    }
    p->sub->f10 = lbl_82193E50;
    return p;
}
