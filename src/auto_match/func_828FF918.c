extern int strcmp(const char *, const char *);
extern char lbl_82029464[];

typedef struct Parser_828FF918 {
    int context;
    char pad4[0xc];
    int token;
    char pad14[4];
    char *text;
    char pad1c[0x30];
    int failed;
    char pad50[8];
    unsigned int error;
} Parser_828FF918;

extern void fn_828FADC0(int context, int code, int *location);
extern int fn_828F5960(char *buf, unsigned int size, const char *format, char *args);
extern void fn_828FA8D8(int context, int *location, int code, const char *format, ...);

void fn_828FF918(Parser_828FF918 *self, const char *format, char *args)
{
    char buf[0x1000];

    self->failed = 1;
    if (strcmp(format, lbl_82029464) == 0) {
        fn_828FADC0(self->context, 2000, &self->token);
        if (self->token == 9) {
            if (self->error == 0x7e7) {
                fn_828FA8D8(self->context, &self->token, 0x7e7, "'%s' is not a valid instruction in this shader version", self->text);
            }
            if (self->error == 0x7e8) {
                fn_828FA8D8(self->context, &self->token, 0x7e8, "invalid instruction modifiers '%s'", self->text);
            }
        }
    } else {
        fn_828F5960(buf, 0x1000, format, args);
        buf[0xfff] = 0;
        fn_828FA8D8(self->context, &self->token, 0, "%s", buf);
    }
}
