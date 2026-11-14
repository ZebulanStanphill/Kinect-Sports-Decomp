typedef struct Object_82748DD0 {
    unsigned char pad[0x50];
    unsigned char children[4];
} Object_82748DD0;

extern unsigned char fn_826BF878(void *children, void *what, void *target);

unsigned char fn_82748DD0(Object_82748DD0 *self, void *what, void *target)
{
    if (self == target) {
        return 1;
    }
    return fn_826BF878(self->children, what, target);
}
