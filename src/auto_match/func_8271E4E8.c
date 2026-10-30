extern void fn_826B1688(void *p, int a, char *s, int n);
extern void fn_826C35B8(void *p, int a, void (*f)(void));
extern void fn_82720700(int a, void *p);
extern void fn_827521E8(void);
extern char lbl_82010170[];
extern char lbl_82012FA8[];
extern char lbl_820100E0[];

void **fn_8271E4E8(void **p, int a)
{
    fn_826C35B8(p, a, fn_827521E8);
    p[0] = lbl_82012FA8;
    p[4] = lbl_82010170;
    fn_82720700(a, p + 4);
    fn_826B1688(p + 4, a, lbl_820100E0, 7);
    return p;
}
