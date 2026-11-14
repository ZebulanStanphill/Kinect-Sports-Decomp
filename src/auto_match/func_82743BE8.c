typedef struct Object_82743BE8 {
    unsigned char pad[0x30];
    unsigned char children[4];
} Object_82743BE8;

extern unsigned char fn_826BF878(void *children, void *what, void *target);

unsigned char fn_82743BE8(Object_82743BE8 *self, void *what, void *target)
{
    if (self == target) {
        return 1;
    }
    return fn_826BF878(self->children, what, target);
}
