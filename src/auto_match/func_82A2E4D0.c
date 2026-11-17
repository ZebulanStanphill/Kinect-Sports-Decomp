extern unsigned __int64 fn_82A2C868(unsigned int packed);

void fn_82A2E4D0(unsigned char *self, unsigned __int64 *output)
{
    unsigned __int64 time;
    if (self[0x35] & 4) {
        time = 0;
        output[0] = 0;
    } else {
        output[0] = fn_82A2C868(*(unsigned int *)(self + 0x40));
        time = fn_82A2C868(*(unsigned int *)(self + 0x44));
    }
    output[1] = time;
    output[2] = time;
    output[3] = time;
    if (self[0x35] & 2) {
        output[4] = 0;
        output[5] = 0;
        *(unsigned int *)(output + 6) = 0x10;
    } else {
        *(unsigned int *)(output + 6) = 0x80;
        output[4] = *(unsigned int *)(self + 0x14);
        output[5] = *(unsigned int *)(self + 0x18);
    }
}
