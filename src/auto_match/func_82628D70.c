typedef struct Owner_82628D70 {
    char pad0[0x14];
    int id;
} Owner_82628D70;

extern void *fn_827DEBF8(void *p, int a, int b);

void *fn_82628D70(Owner_82628D70 *self, int a, int b, void *mem)
{
    if (mem != 0) {
        return fn_827DEBF8(mem, self->id, -1);
    }
    return 0;
}
