extern int fn_8262FFB0(void *self);
extern void fn_82A93F08(void *self, unsigned int offset, unsigned int extra);

void fn_82A93F70(char *self, unsigned int offset)
{
    char *selfCopy = self;
    switch (fn_8262FFB0(selfCopy)) {
    case 1: {
        unsigned int value = *(unsigned int *)(selfCopy + 0x18);
        {
            unsigned int *tagged = (unsigned int *)(selfCopy + 0x18);
            *tagged = (value & 3) | (((value & ~3u) + offset) & ~3u);
        }
        break;
    }
    case 6:
        *(unsigned int *)(selfCopy + 0x20) += offset;
        break;
    case 3:
    case 17:
    case 18:
    case 19:
    case 20:
        fn_82A93F08(selfCopy, offset, (*(unsigned int *)(selfCopy + 0x30) & 0xfffff000) ? offset : 0);
        break;
    case 2:
        *(unsigned int *)(selfCopy + 0x18) = offset + *(unsigned int *)(selfCopy + 0x18);
        break;
    case 7:
        *(unsigned int *)(selfCopy + 0x18) = offset + *(unsigned int *)(selfCopy + 0x18);
        break;
    case 8:
        *(unsigned int *)(selfCopy + 0x18) = offset + *(unsigned int *)(selfCopy + 0x18);
        break;
    }
}
