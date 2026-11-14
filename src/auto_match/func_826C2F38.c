typedef struct Inner_826C2F38 { char pad[0x78]; char *data; } Inner_826C2F38;
typedef struct Obj_826C2F38 { char pad[4]; void *target; char pad2[0x10]; Inner_826C2F38 *inner; } Obj_826C2F38;
extern void fn_82681838(void *target, void *data);

void fn_826C2F38(Obj_826C2F38 *self)
{
    fn_82681838(self->target, self->inner->data + 0x148);
}
