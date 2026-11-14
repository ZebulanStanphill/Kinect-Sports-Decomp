typedef struct Item_82636148 {
    char data[0x26d0];
} Item_82636148;

typedef struct Obj_82636148 {
    int index;
    int pad[3];
    Item_82636148 items[2];
} Obj_82636148;

extern void fn_82633B28(Item_82636148 *item);

void fn_82636148(Obj_82636148 *self)
{
    fn_82633B28(&self->items[self->index]);
}
