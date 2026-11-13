extern int fn_82F64068(char *buffer, unsigned int size, unsigned int count, const char *format, ...);

char *fn_82BEE7D0(void *self, unsigned int *address, char *buffer, int size)
{
    unsigned int ip;

    if (address == 0 || size < 0x10 || buffer == 0) {
        return 0;
    }
    ip = *address;
    fn_82F64068(buffer, size, (unsigned int)-1, "%d.%d.%d.%d", ip >> 24, (ip >> 16) & 0xff, (ip >> 8) & 0xff, ip & 0xff);
    return buffer;
}
