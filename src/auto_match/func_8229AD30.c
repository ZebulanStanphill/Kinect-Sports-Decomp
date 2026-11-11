extern int fn_82526C70(char *buf, int size, const char *fmt, ...);
extern void fn_826728E8(void *view, const char *name, unsigned int texture);

void fn_8229AD30(char *self, int index, unsigned int arg)
{
    void **p = *(void ***)(self + 0xc);
    char name[32];

    fn_82526C70(name, 0x20, "avatar_player%d", index + 1);
    fn_826728E8(*p, name, arg);
}
