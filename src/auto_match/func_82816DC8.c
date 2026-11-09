extern void fn_82816D18(void);
extern void fn_82816D20(void);
extern void fn_82816D50(void);
extern void fn_82815220(void (*a)(void), void (*b)(void), void *c, void (*d)(void), void *e);
extern int fn_82816600(const char *name, void *unused, void *data, unsigned int size, int flags);

int fn_82816DC8(void *data, unsigned int size)
{
    fn_82815220(fn_82816D18, fn_82816D20, 0, fn_82816D50, 0);
    return fn_82816600("memoryFile", 0, data, size, 1);
}
