typedef struct Args { int a; int b; unsigned int c; } Args;
typedef struct S { char pad[0x18]; int x18; char p2[0x25-0x1c]; unsigned char f25; } S;
extern void fn_82DAF6C8(void);
extern void fn_82D91828(S *p, int x, int y, Args *a);

void fn_82DC4C10(S *p, int y)
{
    Args a;
    a.a = 0;
    a.b = 0;
    p->f25 &= 0x3f;
    a.c = 0x80000000;
    fn_82DAF6C8();
    fn_82D91828(p, p->x18, y, &a);
}
