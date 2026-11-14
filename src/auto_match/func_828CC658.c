typedef struct Obj_828CC658 {
    unsigned char pad[9];
    unsigned char counter;
} Obj_828CC658;

void fn_828CC658(Obj_828CC658 *self)
{
    self->counter++;
    if (self->counter >= 0x100U) {
        self->counter = 0;
    }
}
