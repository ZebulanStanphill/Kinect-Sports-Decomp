typedef struct Data_8278BCF0 {
    unsigned int count;
    int items[1];
} Data_8278BCF0;

typedef struct Obj_8278BCF0 {
    int pad0[2];
    Data_8278BCF0 *data;
} Obj_8278BCF0;

extern void fn_8278BC88(Obj_8278BCF0 *self, unsigned int count);
extern void fn_8267BE38(void *p);
extern void *memcpy(void *dst, const void *src, unsigned int size);

void fn_8278BCF0(Obj_8278BCF0 *self, const Data_8278BCF0 *src)
{
    if (src != 0) {
        unsigned int count = src->count;
        if (self->data == 0 || self->data->count != count)
            fn_8278BC88(self, count);
        memcpy(self->data->items, src->items, count * 4);
    } else {
        fn_8267BE38(self->data);
        self->data = 0;
    }
}
