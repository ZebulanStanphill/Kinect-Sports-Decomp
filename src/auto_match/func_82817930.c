typedef struct Fixup_82817930 {
    int offset;
    int value;
} Fixup_82817930;

typedef struct Template_82817930 {
    int size;
    int pad4;
    unsigned int data;          /* 0x08 */
    int relocate;               /* 0x0c */
    int count;                  /* 0x10 */
    int pad14;
    Fixup_82817930 fixups[1];   /* 0x18 */
} Template_82817930;

void fn_82817930(Template_82817930 *t, void (*fill)(int dst, int value, int size),
                 void (*copy)(int dst, unsigned int src, int size), int base)
{
    int i;
    Fixup_82817930 *e;

    if (t->data != 0) {
        copy(base, t->data, t->size);
        if (t->relocate != 0) {
            for (e = t->fixups, i = 0; i < t->count; i++, e++)
                *(int *)(e->offset + base) = e->value + base;
        }
    } else {
        fill(base, 0, t->size);
        if (t->relocate != 0) {
            for (i = 0, e = t->fixups; i < t->count; i++, e++)
                *(int *)(e->offset + base) = e->value + base;
        } else {
            for (i = 0, e = t->fixups; i < t->count; i++, e++)
                *(int *)(e->offset + base) = e->value;
        }
    }
}
