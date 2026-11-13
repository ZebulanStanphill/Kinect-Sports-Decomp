typedef struct { char pad0[0x78]; char text[1]; } Item_822E52D8;
typedef struct { char pad0[0xc0]; Item_822E52D8 *a; int xc4; Item_822E52D8 *b; int xcc; Item_822E52D8 *c; } Data_822E52D8;
typedef struct { char pad0[0x114]; Data_822E52D8 *data; } Obj_822E52D8;
extern void fn_82230218(void *str, const void *src, unsigned int pos, unsigned int count);

void fn_822E52D8(Obj_822E52D8 *self, const void *src)
{
    Data_822E52D8 *data = self->data;

    fn_82230218(data->a->text, src, 0, 0xffffffff);
    fn_82230218(data->b->text, src, 0, 0xffffffff);
    fn_82230218(data->c->text, src, 0, 0xffffffff);
}
