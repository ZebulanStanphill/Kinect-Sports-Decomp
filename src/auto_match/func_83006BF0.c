typedef struct Data_83006BF0 {
    char pad[0x14];
    void *f14;
    void *f18;
    void *f1c;
    void *f20;
} Data_83006BF0;

typedef struct Obj_83006BF0 {
    char pad[0x20];
    Data_83006BF0 *data;
} Obj_83006BF0;

extern unsigned char fn_830069B8(Obj_83006BF0 *self);

void *fn_83006BF0(Obj_83006BF0 *self, unsigned int kind)
{
    if (fn_830069B8(self)) {
        switch (kind) {
        case 0:
            return self->data->f14;
        case 1:
            return self->data->f1c;
        case 2:
            return self->data->f18;
        case 3:
            return self->data->f20;
        }
    }
    return 0;
}
