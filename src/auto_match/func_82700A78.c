typedef struct {
    int *p;
    int idx;
} Iter_82700A78;

typedef struct {
    unsigned int end[2];
    Iter_82700A78 it;
} Locals_82700A78;

typedef struct Node_82700A78 {
    char pad[0x18];
    struct Node_82700A78 *next;
} Node_82700A78;

extern void fn_8278C110(Iter_82700A78 *it, void *table);
extern unsigned char fn_826A8E58(Iter_82700A78 *it, unsigned int *end);
extern void fn_827741E8(Iter_82700A78 *it);
extern void fn_826F7940(Node_82700A78 *node, int flag);
extern void fn_826FDAB8(void *table);

void fn_82700A78(char *obj)
{
    Locals_82700A78 l;
    Node_82700A78 *e;
    Node_82700A78 *cur;

    fn_8278C110(&l.it, obj + 0xa28);
    l.end[0] = 0;
    l.end[1] = 0;
    if (fn_826A8E58(&l.it, l.end) == 0) {
        l.end[0] = 0;
        l.end[1] = 0;
        do {
            e = *(Node_82700A78 **)(l.it.idx * 0xc + *l.it.p + 0x10);
            while (e != 0) {
                cur = e;
                e = e->next;
                fn_826F7940(cur, 1);
            }
            fn_827741E8(&l.it);
        } while (fn_826A8E58(&l.it, l.end) == 0);
    }
    fn_826FDAB8(obj + 0xa28);
}
