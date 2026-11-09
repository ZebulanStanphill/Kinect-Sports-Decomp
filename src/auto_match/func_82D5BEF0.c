extern void fn_82D75758(void *p, unsigned short id);

void fn_82D5BEF0(char *self, unsigned short id)
{
    if (*(unsigned char *)(self + 0x84) != 0) {
        fn_82D75758(self, id);
    }
}
