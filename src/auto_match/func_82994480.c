extern const unsigned int lbl_8315BD28[8][4];

int fn_82994480(const unsigned int *value, const unsigned int *mask)
{
    unsigned int i;
    int j;
    int match;

    for (i = 0; i < 8; i++) {
        match = 1;
        for (j = 0; j < 4; j++) {
            if (value[j] != lbl_8315BD28[i][j]) {
                match = mask[j] == 0xffffffff ? match : 0;
            }
        }
        if (match != 0) {
            return 1;
        }
    }
    return 0;
}
