extern int fn_8282E950(void *p);
extern int fn_82831DC0(void *p);
extern void fn_82831E78(void *p);

int fn_8282EA40(void *p)
{
    int a, b;
    fn_82831E78(p);
    a = fn_8282E950(p);
    b = fn_82831DC0(p);
    if (a != 0 || b != 0)
        return 1;
    return 0;
}
