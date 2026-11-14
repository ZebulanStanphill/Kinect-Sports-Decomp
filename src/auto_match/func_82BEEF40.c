typedef struct Owner_82BEEF40 {
    char pad0[0x4c];
    char list[1];       /* 0x4c */
} Owner_82BEEF40;

extern void *(*lbl_831751D0)(unsigned int size);
extern void (*lbl_831751CC)(void *p);
extern char lbl_82196582[];

extern int fn_82BE5240();
extern void *fn_82BE56B0(unsigned int size);
extern void *fn_82BEB628(void *mem, void *item);
extern int fn_82BE52B8(void *list, void *node);

int fn_82BEEF40(Owner_82BEEF40 *self, unsigned int value)
{
    unsigned int *item;
    void *mem;
    void *node;

    if (value == 0) {
        fn_82BE5240(self, 600, lbl_82196582);
    } else {
        item = (unsigned int *)lbl_831751D0(4);
        if (item != 0) {
            *item = value;
            mem = fn_82BE56B0(0xc);
            if (mem != 0) {
                node = fn_82BEB628(mem, item);
            } else {
                node = 0;
            }
            if (node != 0) {
                fn_82BE52B8(self->list, node);
                return 1;
            }
            lbl_831751CC(item);
        }
    }
    return 0;
}
