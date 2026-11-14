float fn_82D782C8(unsigned int flags)
{
    union {
        float f;
        unsigned int i;
    } sign;

    sign.f = 1.0f;
    sign.i |= (flags & 8) << 28;
    return sign.f;
}
