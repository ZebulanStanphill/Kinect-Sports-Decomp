extern char *strchr(const char *s, int c);
extern int fn_82F66368(char *dst, unsigned int size, const char *src, unsigned int count);
extern int fn_82755020(void *self, const char *name, void *arg, void *extra);

int fn_827553F0(void *self, const char *names, void *arg, unsigned char isList, void *extra)
{
    int result;
    char *comma;
    const char *cur;
    char name[128];

    if (!isList) {
        return fn_82755020(self, names, arg, extra);
    }
    result = 0;
    do {
        comma = strchr(names, ',');
        if (comma != 0) {
            unsigned int len = comma - names;
            if (len > 0x7f) {
                continue;
            }
            fn_82F66368(name, 0x7f, names, len);
            cur = name;
            names = names + len + 1;
            name[len] = 0;
        } else {
            cur = names;
        }
        result = fn_82755020(self, cur, arg, extra);
        if (result != 0) {
            break;
        }
    } while (comma != 0);
    return result;
}
