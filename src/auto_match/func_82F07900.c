int abs(int);

void fn_82F07900(void *a, short *buf, short *count, int *table, int len)
{
    unsigned int nz;
    int i;
    int j;
    int gap;
    if (*count < 2) return;
    nz = 0;
    for (i = 0; i < len; i++) {
        if (buf[i] != 0) nz++;
        if (nz == *count - 1) break;
    }
    gap = 0;
    for (j = i + 1; j < len; j++) {
        if (buf[j] != 0) {
            gap = j - i;
            break;
        }
    }
    if (gap > table[len >> 5]) {
        if (abs(buf[j]) <= 2) {
            buf[j] = 0;
            (*count)--;
        }
    }
}
