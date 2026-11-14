typedef struct Obj_828C8138 {
    char pad[0x6c];
    void *child;
} Obj_828C8138;

extern void fn_828B0338(void *child);

void fn_828C8138(Obj_828C8138 *self, void *child)
{
    self->child = child;
    fn_828B0338(child);
}
