typedef struct {
    unsigned char a, b, c;
    unsigned char pad3;
    unsigned short h;
    unsigned short pad6;
    char x[0x18];
    unsigned char f;
} Sub;
typedef struct {
    char pad[0xc];
    unsigned char m;
    char pad2[3];
    Sub s;
} Obj;
extern void fn_828AC4E8(void *p);
extern void fn_82CE0730(Obj *p, int a, int b, int c, int d);

void fn_828CFC68(Obj *p)
{
    Sub *s;
    fn_82CE0730(p, 0, 0, 0, 0x10);
    s = &p->s;
    p->m = 0;
    s->a = 0;
    s->b = 0;
    s->c = 0;
    fn_828AC4E8(s->x);
    s->h = 0xffff;
    s->f = 0xff;
}
