typedef struct Iter_82704760 {
    int state;
    void *owner;
    void *current;
    int index;
    void *key;
} Iter_82704760;

typedef struct S_82704760 {
    char pad[0xa2c];
    char table[4];
} S_82704760;

extern void *fn_82703B00(Iter_82704760 *it);
extern void fn_82703910(void *owner, void *current);
extern void fn_826F75B8(void *item, S_82704760 *self);

void fn_82704760(S_82704760 *self, void *key)
{
    Iter_82704760 it;
    void *item;
    it.state = 0;
    it.owner = self->table;
    it.index = 0;
    it.current = 0;
    it.key = key;
    while ((item = fn_82703B00(&it)) != 0) {
        fn_826F75B8(item, self);
    }
    if (it.current != 0) {
        fn_82703910(it.owner, it.current);
    }
}
