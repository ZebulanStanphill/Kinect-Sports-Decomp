typedef struct Obj_82D95838 { int pad[5]; void *slot[2]; } Obj_82D95838;
extern void fn_82CE4040(void *p);
extern void fn_82CE4118(void *p);

void fn_82D95838(Obj_82D95838 *self, void *old, void *nw)
{
    int i = old != self->slot[0];
    fn_82CE4040(nw);
    if (old != 0) fn_82CE4118(old);
    self->slot[i] = nw;
}
