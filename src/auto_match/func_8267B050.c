typedef struct Obj_8267B050 {
    char pad[0xc];
    void *list;
} Obj_8267B050;

extern void fn_8268E1E8(void *list, void *item, int flag);

void fn_8267B050(Obj_8267B050 *self, void *item)
{
    fn_8268E1E8(self->list, item, 1);
}
