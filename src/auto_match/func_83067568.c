typedef struct Obj_83067568 {
    int f0;
    char *name;          /* 0x04 */
    char *value;         /* 0x08 */
    unsigned int flags;  /* 0x0c */
} Obj_83067568;

unsigned int strlen(const char *s);
extern void fn_83065BA8(void *p);
extern char *fn_83065B90(unsigned int size);
extern int fn_82F664B0(char *dst, unsigned int size, const char *src);

void fn_83067568(Obj_83067568 *self, const char *name, const char *value, unsigned int flags)
{
    unsigned int size;
    if (self->name != 0)
        fn_83065BA8(self->name);
    if (self->value != 0)
        fn_83065BA8(self->value);
    if (name != 0) {
        size = strlen(name) + 1;
        self->name = fn_83065B90(size);
        fn_82F664B0(self->name, size, name);
    } else {
        self->name = 0;
    }
    if (value != 0) {
        size = strlen(value) + 1;
        self->value = fn_83065B90(size);
        fn_82F664B0(self->value, size, value);
    } else {
        self->value = 0;
    }
    self->flags = flags;
}
