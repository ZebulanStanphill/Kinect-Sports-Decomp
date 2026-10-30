extern char lbl_8320A5DC[];
extern void fn_82823440(void);
extern void fn_82822510(void *table, void (*cb)(void), void *arg, void **out);
extern void fn_8281C360(void *obj, void *arg);

void fn_828236D0(void *arg)
{
    void *obj;
    fn_82822510(lbl_8320A5DC, fn_82823440, arg, &obj);
    if (obj != 0)
        fn_8281C360(obj, arg);
}
