typedef struct Sub_83032BB0 {
    unsigned short id;
    unsigned char a : 1;
    unsigned char b : 1;
    unsigned char rest : 6;
} Sub_83032BB0;

typedef struct Obj_83032BB0 {
    int f0;
    int f4;
    Sub_83032BB0 sub;
    int fc;
    int f10;
} Obj_83032BB0;
static __forceinline void Sub_Init(Sub_83032BB0 *s)
{
    s->id = 0;
    s->a = 0;
    s->b = 0;
}
void fn_83032BB0(Obj_83032BB0 *o)
{
    o->f0 = 0;
    o->f4 = 0;
    Sub_Init(&o->sub);
    o->fc = 0;
    o->f10 = 0;
}
