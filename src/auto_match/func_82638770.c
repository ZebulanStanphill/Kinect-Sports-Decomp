// Stores a 16-bit value (widened) at +0x2a00, then sets bit 0x80000 in the 64-bit
// flags field at +0x20 (same shape as fn_82631AF0).
void fn_82638770(int object, unsigned short param_2)
{
    unsigned int *value_slot = (unsigned int *)(object + 0x2a00);
    unsigned long long *flags = (unsigned long long *)(object + 0x20);
    *value_slot = param_2;
    *flags |= 0x80000u;
}
