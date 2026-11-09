extern void *lbl_8322B4F4;
extern int fn_82BF3D78(void *self, void *arg);

int fn_82BF3FA8(void *arg)
{
    void *p = lbl_8322B4F4;
    if (p == 0)
        return 0;
    return fn_82BF3D78(p, arg);
}
