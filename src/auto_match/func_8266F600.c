extern int fn_82526C70(char *buf, int size, const char *fmt, ...);

void fn_8266F600(unsigned int lo, unsigned int hi, char *buf, int size)
{
    fn_82526C70(buf, size, "%08x %08x", hi, lo);
}
