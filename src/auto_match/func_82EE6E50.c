extern void fn_82E39C50(void *reader, unsigned char **cursor);
unsigned long _byteswap_ulong(unsigned long value);

int fn_82EE6E50(void *self, unsigned char *buffer, unsigned int size, void *reader, unsigned __int64 *out)
{
    if (buffer == 0 || reader == 0 || out == 0)
        return 0x80070057;
    if (size < 0x18)
        return 0xc00d36b1;
    fn_82E39C50(reader, &buffer);
    *out = ((unsigned __int64)_byteswap_ulong(*(unsigned int *)(buffer + 4)) << 32) | _byteswap_ulong(*(unsigned int *)buffer);
    return 0;
}
