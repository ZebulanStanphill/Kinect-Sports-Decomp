typedef struct Obj_826CDDA8 {
    char pad[0x18];
    int active;
    int f1c;
    char sub[4];
} Obj_826CDDA8;

extern void fn_826CD260(void *sub, int flag);

void fn_826CDDA8(Obj_826CDDA8 *self)
{
    self->active = 1;
    fn_826CD260(self->sub, 1);
}
