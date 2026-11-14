typedef struct Object_8271C2F0 {
    unsigned char pad[0x40];
    unsigned char children[4];
} Object_8271C2F0;

extern unsigned char fn_826BF878(void *children, void *what, void *target);

unsigned char fn_8271C2F0(Object_8271C2F0 *self, void *what, void *target)
{
    if (self == target) {
        return 1;
    }
    return fn_826BF878(self->children, what, target);
}
