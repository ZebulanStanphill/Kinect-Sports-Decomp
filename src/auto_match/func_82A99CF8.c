extern void fn_82A99B70(void *writer, const char *format, ...);

void fn_82A99CF8(void *writer, const char *name, int base, int integer, unsigned int value)
{
    if (integer) {
        fn_82A99B70(writer, " %s=\"%d\"", name, base + value);
    } else {
        fn_82A99B70(writer, " %s=\"%.1f\"", name, (float)(value & 1) * 0.1f + (float)(value >> 1));
    }
}
