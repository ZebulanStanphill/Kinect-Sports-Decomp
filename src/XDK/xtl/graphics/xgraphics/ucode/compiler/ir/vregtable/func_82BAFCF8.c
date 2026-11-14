typedef struct Item_82BAFCF8 Item_82BAFCF8;
typedef struct { void (*Delete)(Item_82BAFCF8 *self, int flags); } ItemVt_82BAFCF8;
struct Item_82BAFCF8 { ItemVt_82BAFCF8 *vt; };
typedef struct {
    int f0;
    int f4;
    int f8;
    int fc;
    Item_82BAFCF8 *cur;
    Item_82BAFCF8 *item;
} Iter_82BAFCF8;
typedef struct {
    char pad0[0x5ac];
    void *heap;
} Context_82BAFCF8;
typedef struct { Context_82BAFCF8 *ctx; char *list; } Self_82BAFCF8;

extern void fn_82BC06D0(Iter_82BAFCF8 *it, char *list);
extern void fn_82BC0618(Iter_82BAFCF8 *it);
extern void fn_82BC05A8(char *list);
extern void fn_82B7BEB0(void *heap, void *p);
extern void *fn_82B7BD28(void *heap, unsigned int size);
extern void fn_82BAF3D8(char *list, void *heap, void *hash, void *compare, int buckets);
extern void fn_82BAF468(void);
extern void fn_82BAF478(void);

void fn_82BAFCF8(Self_82BAFCF8 *self)
{
    Iter_82BAFCF8 it;
    char *list;
    void *heap;
    void **mem;

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
    heap = self->ctx->heap;
    mem = (void **)fn_82B7BD28(heap, 0x1c);
    list = (char *)(mem + 1);
    *mem = heap;
    if (list != 0)
        fn_82BAF3D8(list, self->ctx->heap, fn_82BAF478, fn_82BAF468, 0x10);
    else
        list = 0;
    self->list = list;
}
