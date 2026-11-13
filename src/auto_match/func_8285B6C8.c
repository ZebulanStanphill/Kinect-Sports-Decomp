int strcmp(const char *, const char *);
extern void fn_8285B5F8(void *self, int match, void *arg);
extern void fn_8285A708(void *self, void *arg);
extern char lbl_8201F810[];

void fn_8285B6C8(char *self, void *arg)
{
    fn_8285B5F8(self, strcmp(self + 0xb, lbl_8201F810) == 0, arg);
    fn_8285A708(self, arg);
}
