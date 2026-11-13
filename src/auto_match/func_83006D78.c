typedef struct Data_83006D78 {
    char pad[0x8];
    float value;
} Data_83006D78;

typedef struct Obj_83006D78 {
    char pad[0x20];
    Data_83006D78 *data;
} Obj_83006D78;

extern unsigned char fn_830069B8(Obj_83006D78 *self);

unsigned char fn_83006D78(Obj_83006D78 *self, float value)
{
    unsigned char changed = 0;

    if (fn_830069B8(self)) {
        changed = self->data->value != value;
        self->data->value = value;
    }
    return changed;
}
