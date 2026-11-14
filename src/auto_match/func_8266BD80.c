typedef struct {
    char pad0[0xc];
    char path[1];
} Dir_8266BD80;

extern void *fn_82F69B70(const char *path);
extern int fn_82A1F4F8(const char *path);
extern void fn_82A2A370(unsigned int err);

int fn_8266BD80(Dir_8266BD80 *self)
{
    int attrs;

    if (fn_82F69B70(self->path) == 0) {
        fn_82A2A370(0x139f);
        return 0;
    }
    attrs = fn_82A1F4F8(self->path);
    if (attrs == -1) {
        return 0;
    } else if ((attrs & 0x10) == 0) {
        fn_82A2A370(0x7b);
        return 0;
    }
    return 1;
}
