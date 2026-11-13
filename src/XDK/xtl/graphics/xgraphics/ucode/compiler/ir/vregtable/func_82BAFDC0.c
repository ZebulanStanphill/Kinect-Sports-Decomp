typedef struct Item_82BAFDC0 Item_82BAFDC0;
typedef struct { void (*Delete)(Item_82BAFDC0 *self, int flags); } ItemVt_82BAFDC0;
struct Item_82BAFDC0 { ItemVt_82BAFDC0 *vt; };
typedef struct {
    int f0;
    int f4;
    int f8;
    int fc;
    Item_82BAFDC0 *cur;
    Item_82BAFDC0 *item;
} Iter_82BAFDC0;
typedef struct { int f0; char *list; } Self_82BAFDC0;

extern void fn_82BC06D0(Iter_82BAFDC0 *it, char *list);
extern void fn_82BC0618(Iter_82BAFDC0 *it);
extern void fn_82BC05A8(char *list);
extern void fn_82B7BEB0(void *heap, void *p);

void fn_82BAFDC0(Self_82BAFDC0 *self)
{
    Iter_82BAFDC0 it;
    char *list;
    fn_82BC06D0(&it, self->list);
    while ((it.item = it.cur) != 0) {
        it.item->vt->Delete(it.item, 1);
        fn_82BC0618(&it);
    }
    list = self->list;
    if (list != 0) {
        fn_82BC05A8(list);
        fn_82B7BEB0(*(void **)(list - 4), list - 4);
    }
}
