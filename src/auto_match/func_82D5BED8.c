extern void fn_82D75710(void *p, unsigned short id);

void fn_82D5BED8(char *self, unsigned short id)
{
    if (*(unsigned char *)(self + 0x84) != 0) {
        fn_82D75710(self, id);
    }
}
