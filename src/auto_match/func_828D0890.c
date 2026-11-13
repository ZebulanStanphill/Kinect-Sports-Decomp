typedef struct Sub_828D0890 {
    unsigned char a, b, c;
    unsigned char pad3;
    unsigned short h;
    unsigned short pad6;
    char x[0x18];
    unsigned char f;
} Sub_828D0890;

typedef struct Obj_828D0890 {
    char pad[8];
    void *owner;
    unsigned char m;
    char pad2[3];
    Sub_828D0890 s;
} Obj_828D0890;

extern void fn_828AC428(void *p);
extern void fn_828AC4E8(void *p);
extern void fn_828D0590(Obj_828D0890 *p, int a);

Obj_828D0890 *fn_828D0890(Obj_828D0890 *p, void *owner)
{
    Sub_828D0890 *s;
    p->owner = owner;
    p->m = 0;
    fn_828AC428(p->s.x);
    s = &p->s;
    s->a = 0;
    s->b = 0;
    s->c = 0;
    fn_828AC4E8(s->x);
    s->h = 0xffff;
    s->f = 0xff;
    fn_828D0590(p, 1);
    return p;
}
