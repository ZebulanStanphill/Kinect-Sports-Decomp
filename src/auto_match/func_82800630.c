typedef struct Obj_82800630 {
    void **items;
} Obj_82800630;

extern int fn_82817B08(void *p);

int fn_82800630(Obj_82800630 *self, int i)
{
    return fn_82817B08(self->items[i + 14]);
}
