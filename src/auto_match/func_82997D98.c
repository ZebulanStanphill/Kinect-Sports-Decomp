extern const unsigned int lbl_8315BE40[5][4];

int fn_82997D98(const unsigned int *value, const unsigned int *mask, unsigned int count)
{
    unsigned int i;
    int j;
    int match;

    for (i = 0; i < count; i++) {
        match = 1;
        for (j = 0; j < 4; j++) {
            if (value[j] != lbl_8315BE40[i][j]) {
                match = mask[j] == 0xffffffff ? match : 0;
            }
        }
        if (match != 0) {
            return 1;
        }
    }
    return 0;
}
