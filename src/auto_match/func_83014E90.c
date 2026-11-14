typedef struct Obj_83014E90 {
    char pad0[0x38];
    int state;
    unsigned int owner;
    char pad40[0x2c];
    int f6c;
    char pad70[8];
    unsigned int count;
} Obj_83014E90;

extern void fn_83014BF8(Obj_83014E90 *self);

void fn_83014E90(Obj_83014E90 *self, unsigned int op, unsigned int owner)
{
    if (self->owner != owner && owner != 0) {
        return;
    }
    switch (op) {
    case 0:
        self->state = 0;
        self->f6c = 0;
        self->count = 0;
        break;
    case 1:
        if (self->state != 0) {
            self->count++;
        }
        break;
    case 2:
        if (self->count != 0) {
            if (--self->count == 0 && self->state != 1) {
                fn_83014BF8(self);
            }
        }
        break;
    }
}
