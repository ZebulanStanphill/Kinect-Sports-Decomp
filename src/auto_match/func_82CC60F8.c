typedef struct S { char pad[0x40]; int dirty; char pad2[0x38]; void *b; void *a; } S;
extern void fn_82C53970(void *p);

void fn_82CC60F8(S *s)
{
    if (s->a != 0) {
        fn_82C53970(s->a);
        s->a = 0;
    }
    if (s->b != 0) {
        fn_82C53970(s->b);
        s->b = 0;
    }
    s->dirty = 1;
}
