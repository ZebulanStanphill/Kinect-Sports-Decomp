typedef struct Object_8274E4C0 {
    unsigned char pad[0x3c];
    unsigned char children[4];
} Object_8274E4C0;

extern unsigned char fn_826BF878(void *children, void *what, void *target);

unsigned char fn_8274E4C0(Object_8274E4C0 *self, void *what, void *target)
{
    if (self == target) {
        return 1;
    }
    return fn_826BF878(self->children, what, target);
}
