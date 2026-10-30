typedef struct Item_82F35F08 Item_82F35F08;
struct Item_82F35F08 {
    struct {
        void *f0, *f4, *f8;
        void (*fc)(Item_82F35F08 *self, int arg);
    } *vt;
};

typedef struct {
    char pad0[0x4c];
    int arg;
    char pad50[0xc];
    char list[0x68];
    unsigned int count;
} Self_82F35F08;

extern void fn_82F35400(void *list, unsigned int i, Item_82F35F08 ***out);

int fn_82F35F08(Self_82F35F08 *self, int arg)
{
    unsigned int i;
    Item_82F35F08 **it;

    self->arg = arg;
    for (i = 0; i < self->count; i++) {
        fn_82F35400(self->list, i, &it);
        (*it)->vt->fc(*it, arg);
    }
    return 0;
}
