typedef struct {
    int words[5];
} Item_82C2DAE8;

typedef struct {
    int head[6];
    Item_82C2DAE8 items[4];
    int tail[16];
} Obj_82C2DAE8;

extern void *memset(void *dst, int c, unsigned int n);
extern void fn_82C44778(Obj_82C2DAE8 *self);
extern void fn_82C449C8(Item_82C2DAE8 *item);

void fn_82C2DAE8(Obj_82C2DAE8 *self)
{
    memset(self, 0, sizeof(*self));
    fn_82C44778(self);
    fn_82C449C8(&self->items[0]);
    fn_82C449C8(&self->items[1]);
    fn_82C449C8(&self->items[2]);
    fn_82C449C8(&self->items[3]);
}
