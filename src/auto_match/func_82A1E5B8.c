unsigned long __gregister_get(unsigned int reg);

unsigned char fn_82A1E5B8(void)
{
    return *(unsigned char *)(__gregister_get(13) + 0x10c);
}
