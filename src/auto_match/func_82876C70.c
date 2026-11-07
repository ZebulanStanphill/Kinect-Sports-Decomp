typedef unsigned int size_t;
size_t strlen(const char *s);

typedef struct Paths_82876C70 {
    int unk0;
    char root[0x104];
    char sub[0x208];
    char ext[0x104];
} Paths_82876C70;

typedef struct Options_82876C70 {
    void *a;
    void *b;
    int unk8[2];
    unsigned char useExt;
} Options_82876C70;

extern int fn_82F66368(char *dst, size_t size, const char *src, size_t count);
extern int fn_82F668D8(char *dst, size_t size, const char *src, size_t count);

int fn_82876C70(Paths_82876C70 *paths, const char *name, Options_82876C70 *opts, char *out)
{
    size_t len;

    if (name == 0) {
        return 0x1f;
    }
    len = strlen(name);
    if (len >= 0x104) {
        return 0x1f;
    }
    fn_82F66368(out, 0x104, paths->root, 0x103);
    if (opts != 0) {
        if (opts->a == 0 && opts->b == 0) {
            len += strlen(paths->sub);
            if (len >= 0x104) {
                return 2;
            }
            fn_82F668D8(out, 0x104, paths->sub, 0x103 - strlen(out));
        }
        if (opts->useExt) {
            len += strlen(paths->ext);
            if (len >= 0x104) {
                return 2;
            }
            fn_82F668D8(out, 0x104, paths->ext, 0x103 - strlen(out));
        }
    }
    if (strlen(out) + len >= 0x104) {
        return 2;
    }
    fn_82F668D8(out, 0x104, name, 0x103 - strlen(out));
    return 1;
}
