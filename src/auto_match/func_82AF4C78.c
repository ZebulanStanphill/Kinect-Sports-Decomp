int fn_82AF4C78(void *unused, const float *first, unsigned int firstCount, const float *second,
                unsigned int secondCount)
{
    unsigned char positive = 0;
    unsigned char negative = 0;
    unsigned int index;
    for (index = 0; index < firstCount; index++) {
        if (first[index] < 0.0f) {
            negative = 1;
        } else if (first[index] > 0.0f) {
            positive = 1;
        }
    }
    for (index = 0; index < secondCount; index++) {
        if (second[index] < 0.0f) {
            negative = 1;
        } else if (second[index] > 0.0f) {
            positive = 1;
        }
    }
    if (negative && positive) {
        return 1;
    }
    return 2;
}
