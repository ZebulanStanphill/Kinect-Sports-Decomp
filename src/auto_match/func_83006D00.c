typedef struct Data_83006D00 {
    char pad[0xc];
    float value;
} Data_83006D00;

typedef struct Obj_83006D00 {
    char pad[0x20];
    Data_83006D00 *data;
} Obj_83006D00;

extern unsigned char fn_830069B8(Obj_83006D00 *self);

unsigned char fn_83006D00(Obj_83006D00 *self, float value)
{
    unsigned char changed = 0;

    if (fn_830069B8(self)) {
        changed = self->data->value != value;
        self->data->value = value;
    }
    return changed;
}
