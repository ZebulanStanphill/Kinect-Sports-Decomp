extern int fn_82F6E7A8(const char *format, ...);

void fn_82FA6348(void *ptr, unsigned int size, int used, void *user)
{
    fn_82F6E7A8("\t%p %s size: %x\n", ptr, used ? "used" : "free", size);
}
