/* Preprocessor: inserts a macro definition into its hash bucket, which is
 * kept sorted by name. A definition with the same name replaces the old one
 * (with a "macro redefinition" warning when the two differ). */
typedef struct Macro_828F6C70 {
    const char *name; /* 0x0 */
    char pad04[0x8];
    struct Macro_828F6C70 *next; /* 0xC */
} Macro_828F6C70;

typedef struct Preprocessor_828F6C70 {
    char pad000[0x18];
    char messages[0x60];           /* 0x018 */
    Macro_828F6C70 *buckets[0x82]; /* 0x078 */
    char location[0x10];           /* 0x280 */
} Preprocessor_828F6C70;

int strcmp(const char *a, const char *b);

extern unsigned int fn_828F5390(Preprocessor_828F6C70 *self, const char *name);
extern int fn_828F53E0(Preprocessor_828F6C70 *self, Macro_828F6C70 *a, Macro_828F6C70 *b);
extern void fn_828FAB00(void *messages, void *location, int code, const char *format, ...);
extern void fn_828F59D0(Macro_828F6C70 *macro, int free);

int fn_828F6C70(Preprocessor_828F6C70 *self, Macro_828F6C70 *macro)
{
    const char *name;
    Macro_828F6C70 **link;
    Macro_828F6C70 *old;
    int cmp;

    name = macro->name;
    link = &self->buckets[fn_828F5390(self, name)];
    while (*link != 0) {
        cmp = strcmp(name, (*link)->name);
        if (cmp < 0) {
            break;
        }
        if (cmp == 0) {
            if (fn_828F53E0(self, *link, macro) == 0) {
                fn_828FAB00(self->messages, self->location, 0x5ef, "'%s' : macro redefinition", name);
            }
            old = *link;
            *link = old->next;
            old->next = 0;
            fn_828F59D0(old, 1);
            break;
        }
        link = &(*link)->next;
    }
    macro->next = *link;
    *link = macro;
    return 0;
}
