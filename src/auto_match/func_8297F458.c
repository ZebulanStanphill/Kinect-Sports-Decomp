int fn_8297F458(int kind, int other)
{
    if (kind == 0x18) {
        if (other == 0x18 || other == 0x19 || other == 0x1b || other == 0x1d || other == 0x1e || other == 0x1a || other == 0x1c)
            return 1;
    } else if (kind == 0x21) {
        if (other == 0x21 || other == 0x22 || other == 0x23 || other == 0x24 || other == 0x25)
            return 1;
    }
    return 0;
}
