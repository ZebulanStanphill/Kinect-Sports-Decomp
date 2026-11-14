int fn_82811680(unsigned int value)
{
    if (value != 0) {
        union { float f; unsigned int u; } v;
        v.f = (float)value;
        return ((v.u >> 23) & 0xff) - 127;
    }
    return -1;
}
