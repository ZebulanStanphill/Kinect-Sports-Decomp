/* Transposes an 8x8 block of 16-bit values in place. */
void fn_82F1C568(unsigned short *block)
{
    int i;
    int j;
    unsigned short value;

    for (i = 0; i < 7; i++) {
        for (j = i + 1; j < 8; j++) {
            value = block[i * 8 + j];
            block[i * 8 + j] = block[j * 8 + i];
            block[j * 8 + i] = value;
        }
    }
}
