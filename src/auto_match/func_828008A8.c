typedef struct Obj_828008A8 {
    int unk0;
    void **items;
} Obj_828008A8;

extern int fn_82817B08(void *p);

int fn_828008A8(Obj_828008A8 *self, int i)
{
    return fn_82817B08(self->items[i + 8]);
}
