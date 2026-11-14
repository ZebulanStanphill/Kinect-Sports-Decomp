long fn_82C10F40(void **table, unsigned char index, void **out)
{
    void *entry = table[index];
    *out = entry;
    return 0 == entry ? 0x80500016 : 0;
}
