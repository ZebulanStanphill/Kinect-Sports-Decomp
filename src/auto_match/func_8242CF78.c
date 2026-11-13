/* Creates the hand-icon manager object (0x7c bytes) named "ui_handiconmanager" into *out. */
extern int fn_82520158(const char *s, void *out, int flags);
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_82291680(void *mem, void *a, void *b, void *name, void *c);

void **fn_8242CF78(void **out, void *a, char *ctx)
{
    unsigned char name[16];
    void *mem;
    fn_82520158("ui_handiconmanager", name, 0);
    mem = fn_8265C9E0(0x7c);
    *out = mem ? fn_82291680(mem, a, ctx + 0x40, name, ctx + 0x44) : 0;
    return out;
}
