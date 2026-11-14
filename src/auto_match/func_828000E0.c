extern void fn_82800C68(void *p, unsigned short value);

void fn_828000E0(char *self, int value)
{
    fn_82800C68(self + 0xa4, (unsigned short)value);
}
