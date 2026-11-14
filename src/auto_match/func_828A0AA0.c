typedef struct Object_828A0AA0 {
    char pad0[0x1f8];
    unsigned int nextId;
} Object_828A0AA0;

unsigned int fn_828A0AA0(Object_828A0AA0 *self)
{
    unsigned int id = self->nextId++;
    if (self->nextId > 0xffff) {
        self->nextId = 1;
    }
    return id;
}
