extern int strcmp(const char *, const char *);
extern char lbl_82029434[];

typedef struct Constant_828F6EA8 {
    char pad[0xc];
    unsigned int flags;
    int type;
    int unused;
    unsigned int value;
} Constant_828F6EA8;

typedef struct Parser_828F6EA8 {
    char pad0[0x18];
    char context[0x268]; /* 0x18 */
    char location[0x14]; /* 0x280 */
    unsigned int line;   /* 0x294 */
} Parser_828F6EA8;

extern int fn_828F5778(Parser_828F6EA8 *, const char *, unsigned int *, Constant_828F6EA8 **);
extern void fn_828FA8D8(void *, void *, int, const char *, ...);

unsigned int fn_828F6EA8(Parser_828F6EA8 *self, const char *name)
{
    unsigned int functional;
    Constant_828F6EA8 *constant;
    if (strcmp(lbl_82029434, name) == 0) {
        return self->line;
    }
    if (fn_828F5778(self, name, &functional, &constant)) {
        if (functional != 0) {
            fn_828FA8D8(self->context, self->location, 0x5ed,
                        "functional defines in preprocessor expressions not yet implemented");
            return 1;
        }
        if (constant && constant->flags == 0 && constant->type >= 2 && constant->type <= 4) {
            return constant->value;
        }
        fn_828FA8D8(self->context, self->location, 0x5ee,
                    "invalid or unsupported integer constant expression");
    }
    return 0;
}
