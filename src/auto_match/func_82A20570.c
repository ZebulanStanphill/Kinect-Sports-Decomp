extern unsigned int lbl_8315D2EC;
extern void *fn_8265C940(unsigned int size, unsigned int tag);
extern void fn_8265C990(void *p, unsigned int tag);
extern void fn_82A1DDC0(void *dst, const void *src, unsigned int size);
extern void *memset(void *dst, int c, unsigned int size);

int fn_82A20570(unsigned int **items, unsigned int *count, unsigned int *capacity, unsigned int newCapacity)
{
    unsigned int *grown;

    if (*capacity < newCapacity) {
        grown = (unsigned int *)fn_8265C940(newCapacity * 4, lbl_8315D2EC);
        if (grown == 0) {
            return 8;
        }
        memset(grown + *count, 0, (newCapacity - *capacity) * 4);
        fn_82A1DDC0(grown, *items, *count * 4);
        if (*items != 0) {
            fn_8265C990(*items, lbl_8315D2EC);
        }
        *items = grown;
        *capacity = newCapacity;
    }
    return 0;
}
