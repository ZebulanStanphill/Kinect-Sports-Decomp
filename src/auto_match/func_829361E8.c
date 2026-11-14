typedef struct Self_829361E8 {
    void *log;
    char pad4[0x10 - 0x4];
    char location[0x34 - 0x10];
    int failed;
} Self_829361E8;

extern void fn_828FA8D8(void *log, void *location, int code, const char *fmt, ...);
extern void fn_828FAB00(void *log, void *location, int code, const char *fmt, ...);

void fn_829361E8(Self_829361E8 *self, int isError, int code, const char *text)
{
    if (isError) {
        self->failed = 1;
        fn_828FA8D8(self->log, self->location, code, "%s", text);
    } else {
        fn_828FAB00(self->log, self->location, code, "%s", text);
    }
}
