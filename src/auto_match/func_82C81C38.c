/* Middle value and range of the 10x10 pixels around an 8x8 block. */
void fn_82C81C38(unsigned char *src, int *middle, int *range, int pitch)
{
    int maximum = 0;
    int minimum = 0xff;
    int x;
    int y;
    int value;

    for (x = -1; x < 9; x++) {
        for (y = -1; y < 9; y++) {
            value = src[y * pitch + x];
            if (maximum < value) {
                maximum = value;
            }
            if (minimum > value) {
                minimum = value;
            }
        }
    }
    *middle = (minimum + maximum + 1) / 2;
    *range = maximum - minimum;
}
