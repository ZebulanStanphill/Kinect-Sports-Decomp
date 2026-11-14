typedef struct Object_826A46B8 {
    unsigned char pad[0x48];
    unsigned char children[4];
} Object_826A46B8;

extern unsigned char fn_826BF878(void *children, void *what, void *target);

unsigned char fn_826A46B8(Object_826A46B8 *self, void *what, void *target)
{
    if (self == target) {
        return 1;
    }
    return fn_826BF878(self->children, what, target);
}
