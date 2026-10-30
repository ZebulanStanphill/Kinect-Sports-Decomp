unsigned short fn_82F70028(unsigned short c)
{
    if (c == 0xffff) {
        return c;
    }
    return (c >= 'a' && c <= 'z') ? c - 0x20 : c;
}
