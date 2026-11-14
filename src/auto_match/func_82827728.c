int fn_82827728(void)
{
    union {
        unsigned char bytes[2];
        unsigned short value;
    } probe;

    probe.bytes[0] = 0;
    probe.bytes[1] = 0xff;
    return probe.value == 0xff;
}
