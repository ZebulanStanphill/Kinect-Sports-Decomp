extern void *fn_82FA5060(unsigned int, int);
extern char *fn_82FB40B0(void *, int, void *, int, int);
extern void fn_82FB4990(char *);
extern char **fn_82FB6240(void *);
extern unsigned int lbl_831BC768;

typedef struct {
    char pad0[0x54];
    int head;
    char pad1[0x74 - 0x58];
    int cur;
} List;

int fn_82FB5640(List *list, int arg)
{
    void *mem = fn_82FA5060(lbl_831BC768, 0x54);
    char *node;
    char **slot;
    if (mem != 0) {
        node = fn_82FB40B0(mem, 0, list, arg, 0);
        if (node != 0) {
            slot = fn_82FB6240(&list->head);
            if (slot != 0) {
                *slot = node;
                *(int *)(node + 0x48) = -1;
                list->cur = list->head;
                return 1;
            }
            fn_82FB4990(node);
        }
    }
    return 2;
}
