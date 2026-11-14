typedef struct Table_82767020 {
    int pad0[2];
    unsigned char **data; /* 0x08 */
    int count;            /* 0x0c */
    int offset;           /* 0x10 */
} Table_82767020;

int fn_82767020(Table_82767020 *self, unsigned short key)
{
    int hi = self->count - 1;
    int lo = 0;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        int idx = self->offset + mid * 8;
        unsigned int k = (*self->data)[idx] | ((*self->data)[idx + 1] << 8);
        if (key == k)
            return mid;
        if (key < k)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return -1;
}
