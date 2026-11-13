typedef struct Iter_82703C40 {
    int state;
    void *owner;
    void *current;
    int index;
} Iter_82703C40;

typedef struct S_82703C40 {
    char pad[0xa2c];
    char table[0xb38 - 0xa2c];
    __int64 time;
} S_82703C40;

extern __int64 fn_82693410(void);
extern void *fn_827039E8(Iter_82703C40 *it);
extern void fn_82703910(void *owner, void *current);
extern void fn_826F75B8(void *item, S_82703C40 *self);

void fn_82703C40(S_82703C40 *self)
{
    Iter_82703C40 it;
    void *item;
    __int64 start = fn_82693410();
    __int64 elapsed;

    it.state = 0;
    it.owner = self->table;
    it.index = 0;
    it.current = 0;
    while ((item = fn_827039E8(&it)) != 0) {
        fn_826F75B8(item, self);
    }
    if (it.current != 0) {
        fn_82703910(it.owner, it.current);
    }
    elapsed = fn_82693410() - start;
    self->time += elapsed;
}
