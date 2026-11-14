typedef struct Item_82635EE8 {
    char data[0x26d0];
} Item_82635EE8;

typedef struct Obj_82635EE8 {
    int index;
    int pad[3];
    Item_82635EE8 items[2];
} Obj_82635EE8;

extern void fn_82633918(Item_82635EE8 *item);

void fn_82635EE8(Obj_82635EE8 *self)
{
    fn_82633918(&self->items[self->index]);
}
