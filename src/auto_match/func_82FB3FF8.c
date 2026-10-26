extern void fn_82FA8938(char *p);

void fn_82FB3FF8(char *p)
{
    if ((*(unsigned char *)(p + 0x30) & 0x80) == 0)
        fn_82FA8938(p);
}
