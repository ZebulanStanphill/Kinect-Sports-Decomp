/* Name test: does the object's inline name (offset 0xc) differ from the given string? */
int strcmp(const char *a, const char *b);

typedef struct Obj_82817EF8 {
    char pad0[0xc];
    char name[1];   /* 0x0c */
} Obj_82817EF8;

int fn_82817EF8(const Obj_82817EF8 *self, const char *name)
{
    return strcmp(self->name, name) != 0;
}
