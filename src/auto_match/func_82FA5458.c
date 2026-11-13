extern unsigned char fn_82FA4EB8(void);
extern int fn_82FA4FA0(void *h);

int fn_82FA5458(void **p)
{
    if (fn_82FA4EB8())
        return 2;
    if (p == 0)
        return 2;
    return fn_82FA4FA0(*p);
}
