unsigned int fn_82B69A80(unsigned int index)
{
    unsigned int flag = 0;
    switch (index) {
    case 0: flag = 0x10; break;
    case 1: flag = 0x20; break;
    case 2: flag = 0x40; break;
    case 3: flag = 0x80; break;
    case 4: flag = 0x100; break;
    case 5: flag = 0x200; break;
    case 6: flag = 0x400; break;
    case 7: flag = 0x800; break;
    }
    return flag;
}
