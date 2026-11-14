
int fn_82A53688(int *self, int value)
{
    if (self[0x13c / 4] != 0 && value > 0)
        return value * 2;
    if (self[0x144 / 4] == 0)
        return value;
    if (value <= 0)
        return value;
    return (self[0x14c / 4] * value - self[0x154 / 4]) / self[0x148 / 4] + 1;
}
