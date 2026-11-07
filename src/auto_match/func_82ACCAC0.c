typedef struct Key_82ACCAC0 {
    unsigned a : 20;
    unsigned b : 8;
    unsigned c : 4;
} Key_82ACCAC0;

typedef struct Node_82ACCAC0 {
    unsigned flags;
    int pad4;
    struct Node_82ACCAC0 *next;
} Node_82ACCAC0;

typedef struct Entry_82ACCAC0 {
    int pad0;
    Node_82ACCAC0 *first;
} Entry_82ACCAC0;

extern unsigned int fn_82AC8910(void *set, unsigned int start, int limit);
extern unsigned int fn_82ACA998(void *self, void *other, Entry_82ACCAC0 *e);
extern void fn_82ACC490(void *out, Key_82ACCAC0 key);
extern void fn_82ACB390(void *out, Key_82ACCAC0 key, Entry_82ACCAC0 *e);

static __forceinline int notNull_82ACCAC0(Node_82ACCAC0 *p)
{
    if (p != 0)
        return 1;
    return 0;
}

void fn_82ACCAC0(char *self, char *other, void *out)
{
    unsigned int idx;
    unsigned int last;
    Entry_82ACCAC0 *e;
    Node_82ACCAC0 *n;
    Key_82ACCAC0 key;

    if (*(void **)(other + 0x58) != 0) {
        idx = fn_82AC8910(*(void **)(other + 0x58), 0, *(int *)(self + 0x2a0));
        if (idx <= *(unsigned int *)(self + 0x29c) - 1) {
            do {
                e = (*(Entry_82ACCAC0 ***)(self + 0x2c4))[idx];
                n = e->first;
                while (notNull_82ACCAC0(n)) {
                    if ((n->flags & 0xe000000) != 0)
                        break;
                    n = n->next;
                }
                key.b = n->flags >> 17;
                key.a = 0;
                key.c = fn_82ACA998(self, other, e);
                fn_82ACC490(out, key);
                fn_82ACB390(out, key, e);
                last = *(unsigned int *)(self + 0x29c) - 1;
                if (idx == last) {
                    idx = 0xffffffff;
                } else {
                    idx = fn_82AC8910(*(void **)(other + 0x58), idx + 1,
                                      *(int *)(self + 0x2a0));
                }
            } while (idx <= last);
        }
    }
}
