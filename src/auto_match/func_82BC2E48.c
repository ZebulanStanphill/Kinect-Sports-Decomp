extern unsigned char fn_82BB2C90(void *p);
typedef struct S { char pad[0x18]; int x18; } S;

unsigned char fn_82BC2E48(S *s)
{
    return s->x18 == 0x89 && fn_82BB2C90(s) != 0;
}
