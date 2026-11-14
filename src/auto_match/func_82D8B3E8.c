typedef struct Obj_82D8B3E8 {
    char pad[0xe9];
    unsigned char index;
} Obj_82D8B3E8;

int fn_82D8B3E8(Obj_82D8B3E8 *self)
{
    return self->index != 0xff;
}
