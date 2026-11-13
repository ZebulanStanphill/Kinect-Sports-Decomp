typedef struct String_822C7FC0 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int cap;
} String_822C7FC0;

typedef struct Owner_822C7FC0 {
    int unk0;
    void *target;
} Owner_822C7FC0;

extern void fn_822C8C08(void *target, const char *name);

void fn_822C7FC0(Owner_822C7FC0 *self, String_822C7FC0 *name)
{
    void *target = self->target;
    const char *s;
    if (name->cap >= 0x10)
        s = name->u.ptr;
    else
        s = name->u.buf;
    fn_822C8C08(target, s);
}
