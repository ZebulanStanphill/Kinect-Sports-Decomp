extern const unsigned char *lbl_83232478;

void fn_82CA0C00(unsigned char *first, unsigned char *second, unsigned char *third, int firstCount,
                 int secondCount)
{
    const unsigned char *table = lbl_83232478;
    int index;
    for (index = 0; index < firstCount; index++) {
        first[index] = table[(first[index] - 0x40) * 2];
    }
    for (index = 0; index < secondCount; index++) {
        second[index] = table[(second[index] - 0x40) * 2];
    }
    for (index = 0; index < secondCount; index++) {
        third[index] = table[(third[index] - 0x40) * 2];
    }
}
