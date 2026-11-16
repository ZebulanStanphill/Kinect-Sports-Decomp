void fn_82CA0A28(void *self, unsigned char *first, unsigned char *second, unsigned char *third,
                 int firstCount, int secondCount)
{
    int index;
    if (first == 0) {
        return;
    }
    if (second == 0) {
        return;
    }
    if (third == 0) {
        return;
    }
    for (index = 0; index < firstCount; index++) {
        first[index] = ((first[index] - 0x80) >> 1) + 0x80;
    }
    for (index = 0; index < secondCount; index++) {
        second[index] = ((second[index] - 0x80) >> 1) + 0x80;
    }
    for (index = 0; index < secondCount; index++) {
        third[index] = ((third[index] - 0x80) >> 1) + 0x80;
    }
}
