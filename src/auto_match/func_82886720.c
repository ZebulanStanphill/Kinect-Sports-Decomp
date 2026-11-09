typedef struct Object_82886720 { char pad[0x18]; unsigned int key; } Object_82886720;
extern void fn_828833A8(unsigned int key, Object_82886720 *self);

void fn_82886720(Object_82886720 *self, unsigned int key)
{
    self->key = key;
    fn_828833A8(key, self);
}
