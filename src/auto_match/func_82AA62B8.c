typedef char *va_list;

extern const char *fn_82AA6270(int id);
extern int fn_82F6EDE8(char *buf, unsigned int size, const char *fmt, va_list args);
extern void *memcpy(void *dst, const void *src, unsigned int n);

void fn_82AA62B8(void *self, char *buf, unsigned int size, int id, va_list args)
{
    const char *fmt = fn_82AA6270(id);
    if (fmt != 0) {
        fn_82F6EDE8(buf, size, fmt, args);
    } else {
        memcpy(buf, "internal error", 0xf);
    }
}
