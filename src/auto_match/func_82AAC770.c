extern void fn_82A29A38(void);

unsigned int fn_82AAC770(unsigned int format)
{
    unsigned int flags = 0;

    switch (format) {
    case 0x0000000:
        break;
    case 0x1000000:
        flags = 0x8888;
        break;
    case 0x2000000:
        flags = 0x20000;
        break;
    case 0x3000000:
        flags = 0x28888;
        break;
    case 0x4000000:
        flags = 0x60000;
        break;
    case 0x5000000:
        flags = 0x68888;
        break;
    case 0x6000000:
        flags = 0x10000;
        break;
    case 0x7000000:
        flags = 0x40000;
        break;
    case 0x8000000:
        flags = 0x48888;
        break;
    case 0x9000000:
        flags = 0x400000;
        break;
    case 0xa000000:
        flags = 0x600000;
        break;
    case 0xb000000:
        flags = 0x100000;
        break;
    case 0xc000000:
        flags = 0x108888;
        break;
    default:
        fn_82A29A38();
        break;
    }
    if ((flags & 0x10000) != 0 && (flags & 0x68888) != 0)
        fn_82A29A38();
    return flags;
}
