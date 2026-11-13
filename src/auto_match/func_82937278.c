extern int strcmp(const char *, const char *);
extern char lbl_82029464[];

typedef struct Parser_82937278 {
    int context;
    char pad4[0xc];
    char location[0x24];
    int failed;
} Parser_82937278;

extern void fn_828FADC0(int context, int code, char *location);
extern int fn_828F5960(char *buf, unsigned int size, const char *format, char *args);
extern void fn_828FA8D8(int context, char *location, int code, const char *format, ...);

void fn_82937278(Parser_82937278 *self, const char *format, char *args)
{
    char buf[0x1000];

    self->failed = 1;
    if (strcmp(format, lbl_82029464) == 0) {
        fn_828FADC0(self->context, 2000, self->location);
    } else {
        fn_828F5960(buf, 0x1000, format, args);
        buf[0xfff] = 0;
        fn_828FA8D8(self->context, self->location, 0x1bbc, "%s", buf);
    }
}
