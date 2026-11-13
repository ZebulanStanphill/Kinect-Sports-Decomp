extern int fn_82F69A80(char *dst, unsigned int size, const char *src);

void fn_828359F8(void *self, char *buf, unsigned int depth)
{
    unsigned int i;
    for (i = 0; i < depth; i++) fn_82F69A80(buf, 0x100, "   ");
}
