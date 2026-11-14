extern void fn_82F6EE10(unsigned int value, char *buffer, unsigned int radix, int negative);

char *fn_82F6EEE0(unsigned int value, char *buffer, unsigned int radix)
{
    fn_82F6EE10(value, buffer, radix, 0);
    return buffer;
}
