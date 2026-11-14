typedef struct Name_8255FCD0 {
    char text[0x40];
} Name_8255FCD0;

typedef struct NameList_8255FCD0 {
    int x0;
    Name_8255FCD0 *begin;
    Name_8255FCD0 *end;
} NameList_8255FCD0;

extern int fn_82526C70(char *buf, int size, const char *fmt, ...);
extern void *fn_82560010(void *self, const char *name);

void *fn_8255FCD0(void *self, const char *name, NameList_8255FCD0 **prefixes)
{
    if (prefixes != 0 && *prefixes != 0) {
        Name_8255FCD0 *p = (*prefixes)->begin;
        Name_8255FCD0 *end = (*prefixes)->end;
        for (; p < end; p++) {
            if (p != 0 && p->text[0] != 0) {
                char full[0x40];
                void *found;
                fn_82526C70(full, 0x40, "%s%s", p->text, name);
                found = fn_82560010(self, full);
                if (found != 0) {
                    return found;
                }
            }
        }
    }
    return fn_82560010(self, name);
}
