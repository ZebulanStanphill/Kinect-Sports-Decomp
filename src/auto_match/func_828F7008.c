extern int strcmp(const char *, const char *);
extern char lbl_82029464[];

typedef struct Preprocessor_828F7008 {
    char pad0[0x18];
    char context[0x38];
    int failed;
    char pad54[4];
    int active;
    int enabled;
    char pad60[0x220];
    int token;
    char pad284[4];
    char *text;
} Preprocessor_828F7008;

extern void fn_828FADC0(char *context, int code, int *location);
extern int fn_828F5960(char *buf, unsigned int size, const char *format, char *args);
extern void fn_828FA8D8(char *context, int *location, int code, const char *format, ...);

void fn_828F7008(Preprocessor_828F7008 *self, const char *format, char *args)
{
    char buf[0x100];

    self->failed = 1;
    if (self->enabled != 0) {
        if (strcmp(format, lbl_82029464) == 0) {
            if (self->active != 0 && self->token == 9) {
                fn_828FA8D8(self->context, &self->token, 0x5e0, "invalid preprocessor command '%s'", self->text);
            } else {
                fn_828FADC0(self->context, 0x5dc, &self->token);
            }
        } else {
            fn_828F5960(buf, 0x100, format, args);
            fn_828FA8D8(self->context, &self->token, 0, "%s", buf);
        }
    }
}
