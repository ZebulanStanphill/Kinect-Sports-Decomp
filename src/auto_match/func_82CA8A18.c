/* Saturates a value to 0..255. */
#define CLAMP_BYTE(v) ((unsigned int)(v) > 0xff ? ((v) < 0 ? 0 : 0xff) : (v))

void fn_82CA8A18(int *row, int count)
{
    int i;

    for (i = 1; i < count - 1; i += 2) {
        row[i] = (row[i] << 8) - (row[i - 1] << 7) - (row[i + 1] << 7);
    }
    row[count - 1] = (row[count - 1] << 8) - (row[count - 2] << 8);
    row[0] = (row[1] >> 1) + (row[0] << 8);
    for (i = 2; i < count; i += 2) {
        row[i] = ((row[i - 1] + row[i + 1]) >> 2) + (row[i] << 8);
    }
    for (i = 0; i < count; i += 2) {
        row[i] = (row[i] + 0x80) >> 8;
        row[i] = CLAMP_BYTE(row[i]);
        row[i + 1] = 0;
    }
}
