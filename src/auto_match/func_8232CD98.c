typedef struct { int a; int b; int c; } T;
typedef struct { int pad[3]; T t; } C;
typedef struct { int pad[3]; C *c; } P;

void fn_8232CD98(P *p)
{
    T v;
    v.a = 5;
    v.b = 1;
    v.c = 4;
    p->c->t = v;
}
