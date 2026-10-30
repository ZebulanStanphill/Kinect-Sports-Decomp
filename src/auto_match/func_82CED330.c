extern int fn_82CFBE40(const char *s);
extern int fn_82CE5410(void);
extern char *fn_82CE52E0(int heap, int size);
extern void fn_82CFBE10(char *dst, const char *src);

char *fn_82CED330(const char *s)
{
    int len = fn_82CFBE40(s) + 1;
    char *r = fn_82CE52E0(*(int *)(fn_82CE5410() + 0x10), len);
    fn_82CFBE10(r, s);
    return r;
}
