extern char lbl_82196582[];
extern char *fn_82F70430(int category, const char *locale);
extern void fn_82F62A28(void *dst, const char *src);

void fn_82F62AB0(char *self, const char *locale)
{
    char *name;

    name = fn_82F70430(0, 0);
    fn_82F62A28(self + 0x14, name == 0 ? lbl_82196582 : name);
    if (locale == 0 || (name = fn_82F70430(0, locale)) == 0) {
        name = "*";
    }
    fn_82F62A28(self + 0x1c, name);
}
