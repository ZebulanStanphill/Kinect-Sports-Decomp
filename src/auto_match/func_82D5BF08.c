extern void fn_82D757A0(void *p, unsigned short id);

void fn_82D5BF08(char *self, unsigned short id)
{
    if (*(unsigned char *)(self + 0x84) != 0) {
        fn_82D757A0(self, id);
    }
}
