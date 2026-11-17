typedef struct Context_829610F8 Context_829610F8;

typedef struct Vtable_829610F8 {
    char padding[0x138];
    int (*set)(Context_829610F8 *, unsigned int, unsigned int, int);
} Vtable_829610F8;

struct Context_829610F8 {
    Vtable_829610F8 *vtable;
    char padding[0x158];
    int inactive; /* 0x15c */
};

typedef struct Alias_829610F8 {
    unsigned int flags; /* 0x00 */
    char padding0[8];
    unsigned int value; /* 0xc */
    char padding1[0x2c];
    unsigned int kind; /* 0x3c */
} Alias_829610F8;

extern int fn_8295D0A8(Context_829610F8 *, unsigned int);
extern int fn_8295A330(Context_829610F8 *, unsigned int);
extern int fn_829548C8(Context_829610F8 *);
extern void fn_82975B00(Context_829610F8 *, int, int, const char *, ...);

int fn_829610F8(Context_829610F8 *self, Alias_829610F8 *alias)
{
    int result;
    if (self->inactive != 0) {
        return 0;
    }
    if ((alias->flags & 0x10000000) != 0) {
        return 0;
    }
    result = fn_8295D0A8(self, 0x200001f);
    if (result < 0) {
        return result;
    }
    if (alias->kind == 0x200000) {
        result = fn_8295A330(self, 0x90000000);
        if (result < 0) {
            return result;
        }
        result = self->vtable->set(self, (alias->value & 0x7ff) | 0xa0000800, 0xf0000, 0);
        if (result < 0) {
            return result;
        }
        result = fn_829548C8(self);
        return result < 0 ? result : 0;
    } else if (alias->kind == 0x400000) {
        result = fn_8295A330(self, 0xa0000000);
        if (result < 0) {
            return result;
        }
        result = self->vtable->set(self, (alias->value & 0x7ff) | 0xa0000800, 0xf0000, 0);
        if (result < 0) {
            return result;
        }
        result = fn_829548C8(self);
        return result < 0 ? result : 0;
    } else if (alias->kind == 0x800000) {
        result = fn_8295A330(self, 0x98000000);
        if (result < 0) {
            return result;
        }
        result = self->vtable->set(self, (alias->value & 0x7ff) | 0xa0000800, 0xf0000, 0);
        if (result < 0) {
            return result;
        }
        result = fn_829548C8(self);
        return result < 0 ? result : 0;
    } else {
        fn_82975B00(self, 0, 0x12ce, "internal error: unexpected Alias on texture declaration");
        return 0x80004005;
    }
}
