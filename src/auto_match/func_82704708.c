typedef struct Iter_82704708 {
    int state;
    void *owner;
    void *current;
    int index;
} Iter_82704708;

extern unsigned int fn_827039E8(Iter_82704708 *it);
extern void fn_82703910(void *owner, void *current);

void fn_82704708(void *owner)
{
    Iter_82704708 it;
    it.state = 0;
    it.owner = owner;
    it.index = 0;
    it.current = 0;
    while (fn_827039E8(&it) != 0) {
    }
    if (it.current != 0) {
        fn_82703910(it.owner, it.current);
    }
}
