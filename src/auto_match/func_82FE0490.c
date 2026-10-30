extern int fn_82FE41A0(void *p, int a, unsigned int n);
extern float lbl_82006848;
typedef struct { char pad[0x98]; int sub; char pad2[200-0x9c]; unsigned int n; char pad3[0x138-0xcc]; float f; } S;
int fn_82FE0490(S *p, int a)
{
    int r = 1;
    unsigned int n = (unsigned int)((float)p->n * p->f * lbl_82006848);
    if (n != 0)
        r = fn_82FE41A0(&p->sub, a, n);
    return r;
}
