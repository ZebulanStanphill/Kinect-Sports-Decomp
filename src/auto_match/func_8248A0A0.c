typedef struct Vec_8248A0A0 {
    char pad[0x50];
    unsigned int *first;    /* 0x50 */
    unsigned int *last;     /* 0x54 */
} Vec_8248A0A0;

typedef struct Self_8248A0A0 {
    char pad[0xc];
    unsigned int id;        /* 0x0c */
    Vec_8248A0A0 *list;     /* 0x10 */
} Self_8248A0A0;

int fn_8248A0A0(Self_8248A0A0 *self)
{
    unsigned int id = self->id;
    unsigned int *end = self->list->last;
    unsigned int *p;

    for (p = self->list->first; p != end; p++) {
        if (*p == id)
            break;
    }
    return p != end;
}
