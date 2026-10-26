extern void fn_82763FD0(void *p, int a, int b);
typedef struct S { char pad[0xc]; int sub; char p2[0x85-0x10]; unsigned char x85; } S;

void fn_82758448(S *s, float a, float b)
{
    fn_82763FD0(&s->sub, (int)a, (int)b);
    s->x85 = 0;
}
