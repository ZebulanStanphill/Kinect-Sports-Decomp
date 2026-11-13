typedef struct Data_83006DF0 {
    char pad[0x10];
    float value;
} Data_83006DF0;

typedef struct Obj_83006DF0 {
    char pad[0x20];
    Data_83006DF0 *data;
} Obj_83006DF0;

extern unsigned char fn_830069B8(Obj_83006DF0 *self);

unsigned char fn_83006DF0(Obj_83006DF0 *self, float value)
{
    unsigned char changed = 0;

    if (fn_830069B8(self)) {
        changed = self->data->value != value;
        self->data->value = value;
    }
    return changed;
}
