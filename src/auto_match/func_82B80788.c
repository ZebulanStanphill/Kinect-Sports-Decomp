typedef struct Symbol_82B80788 {
    char pad[0x18];
    const char *name; /* 0x18 */
} Symbol_82B80788;

extern Symbol_82B80788 *fn_82B45880(void *table, unsigned int id);
extern unsigned long fn_82F6A3F0(const char *text, char **end, int radix);
extern int fn_82F6DCE0(char *buf, unsigned int size, const char *fmt, ...);
char *strncpy(char *dst, const char *src, unsigned int count);
char *strrchr(const char *s, int c);
int stricmp(const char *a, const char *b);
int isdigit(int c);
unsigned int strlen(const char *s);

void fn_82B80788(void *table, char *name, int size, unsigned int id, int bias)
{
    char *suffix;
    char *digits;
    char *end;
    unsigned long index;
    Symbol_82B80788 *symbol;

    symbol = fn_82B45880(table, id);
    strncpy(name, symbol->name, size);
    name[size - 1] = 0;
    suffix = strrchr(name, '_');
    if (suffix != 0) {
        if (stricmp(suffix, "_centroid") == 0) {
            *suffix = 0;
        } else if (stricmp(suffix, "_center") == 0) {
            *suffix = 0;
        }
    }
    digits = name + strlen(name);
    while (digits > name && isdigit(digits[-1])) {
        digits--;
    }
    index = fn_82F6A3F0(digits, &end, 10) + bias;
    if (*end == 0 && index != 0) {
        fn_82F6DCE0(digits, size - (digits - name), "%u", index);
        name[size - 1] = 0;
    }
}
