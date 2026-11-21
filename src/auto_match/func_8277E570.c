typedef struct Owner_8277E570 {
    char pad0[0x154];
    unsigned int count; /* 0x154 */
} Owner_8277E570;

extern int fn_8277BAB8(void *a, void *b);
extern void fn_8277D730(unsigned int *list, unsigned int first, unsigned int last,
                        int (*compare)(void *, void *));

void fn_8277E570(Owner_8277E570 *self)
{
    fn_8277D730(&self->count, 0, self->count, fn_8277BAB8);
}
