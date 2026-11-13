/* Stores the value at the start of the sub-object (S layout of func_827ABBA0) and sets its flag bit 0. */
typedef struct Sub { int value; char pad[0x5c]; unsigned char flags; } Sub;
typedef struct S { void *mem; int x4; int x8; int xc; void *x10; Sub sub; } S;
void fn_827A8610(S *p, int v)
{
    Sub *s;

    p->sub.value = v;
    s = &p->sub;
    s->flags |= 1;
}
