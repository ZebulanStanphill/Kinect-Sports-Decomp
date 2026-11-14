typedef struct Object_82735568 {
    unsigned char pad[0x74];
    unsigned char children[4];
} Object_82735568;

extern unsigned char fn_826BF878(void *children, void *what, void *target);

unsigned char fn_82735568(Object_82735568 *self, void *what, void *target)
{
    if (self == target) {
        return 1;
    }
    return fn_826BF878(self->children, what, target);
}
