extern void fn_822C72E0(void *p, const char *s);
typedef struct A { char pad[0x20]; void *x20; } A;
typedef struct B { char pad[0x108]; float x108; } B;
typedef struct S { int x0, x4; A *a; int xc, x10; B *b; char pad[0x50-0x18]; float x50; } S;

void fn_822E0FF8(S *s)
{
    fn_822C72E0(s->a->x20, "AnimAtEnd");
    s->b->x108 = s->x50;
}
