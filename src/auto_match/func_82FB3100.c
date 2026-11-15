extern void fn_82FB2BD0(void *self);
extern int fn_82FB2ED0(void *self, void *list, const unsigned char **cursor, unsigned int count);

int fn_82FB3100(unsigned char *self, const unsigned char *cursor)
{
    const unsigned char *header;
    fn_82FB2BD0(self);
    header = cursor;
    cursor += 0x18;
    *(unsigned short *)(self + 0xd4) = *(const unsigned short *)(header + 0x14);
    *(unsigned short *)(self + 0xb8) = *(const unsigned short *)(header + 0x10);
    *(unsigned short *)(self + 0xba) = *(const unsigned short *)(header + 0x12);
    *(unsigned int *)(self + 0xc8) = *(const unsigned int *)(header + 0xc);
    self[0xd0] = 0;
    self[0xd1] = header[0x17];
    *(unsigned int *)(self + 0xb4) = *(const unsigned int *)(header + 4);
    if (*(const unsigned int *)(header + 8) != 0) {
        return fn_82FB2ED0(self, self + 0xac, &cursor, *(const unsigned int *)(header + 8));
    }
    return 1;
}
