extern unsigned int strlen(const char *text);
extern int fn_82526C70(char *buffer, unsigned int size, const char *format, ...);
extern void fn_825A1048(void *self, const char *name, int a, int b, int c);

void fn_825A0F28(void *self, const char *prefix, const char *name, int a, int b, int c)
{
    char clean[256];
    char fullName[256];
    int length;
    int count;
    int i;
    char ch;

    count = strlen(name) + 1;
    length = 0;
    for (i = 0; i < count; i++) {
        ch = name[i];
        if ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || ch == '_' ||
            ch == 0) {
            clean[length++] = ch;
        }
    }
    if (strlen(prefix) != 0) {
        fn_82526C70(fullName, 0x100, "%s__%s", prefix, clean);
    } else {
        fn_82526C70(fullName, 0x100, "%s", clean);
    }
    fn_825A1048(self, fullName, a, b, c);
}
