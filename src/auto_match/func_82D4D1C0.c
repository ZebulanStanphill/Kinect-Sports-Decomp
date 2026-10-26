typedef struct { char pad[0xc]; unsigned int *items; int count; } S;
typedef struct { char pad[0x20]; unsigned char *tbl; } T;

void fn_82D4D1C0(S *s, T *t)
{
    int i;
    for (i = 0; i < s->count; i++) {
        unsigned int *e = s->items + i;
        unsigned char *slot = t->tbl + (*e >> 8);
        unsigned char v = *slot;
        ((unsigned char *)e)[3] = 0;
        *e |= v;
        *slot = 0;
    }
}
