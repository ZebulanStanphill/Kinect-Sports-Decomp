typedef struct Obj_828207F8 {
    char pad[0x39];
    unsigned char state;
} Obj_828207F8;

int fn_828207F8(Obj_828207F8 *self)
{
    return self->state != 1;
}
