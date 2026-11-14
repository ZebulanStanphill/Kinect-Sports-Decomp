/* Name test: does the object's name (pointer at offset 8) equal the given string? */
int strcmp(const char *a, const char *b);

typedef struct Obj_82827948 {
    int pad0;
    int pad4;
    const char *name;   /* 0x08 */
} Obj_82827948;

int fn_82827948(const Obj_82827948 *self, const char *name)
{
    return strcmp(self->name, name) == 0;
}
