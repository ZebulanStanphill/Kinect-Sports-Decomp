typedef struct Obj_830223E0 { char pad[8]; int count; char list[4]; } Obj_830223E0;
extern void fn_83022140(void *list);

void fn_830223E0(Obj_830223E0 *self)
{
    self->count = 0;
    fn_83022140(self->list);
}
