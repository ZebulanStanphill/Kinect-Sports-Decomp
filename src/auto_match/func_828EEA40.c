typedef struct Object_828EEA40 { char pad[0x14e]; unsigned char disabled; } Object_828EEA40;
extern void fn_828EE1B8(Object_828EEA40 *self);

void fn_828EEA40(Object_828EEA40 *self, unsigned char enabled)
{
    self->disabled = enabled == 0;
    fn_828EE1B8(self);
}
