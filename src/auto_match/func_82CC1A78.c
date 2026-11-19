/* Copies every stride-th byte of count elements; returns the number of bytes spanned. */
int fn_82CC1A78(unsigned char *dst, const unsigned char *src, int stride, int count)
{
    int i;
    int total;

    total = stride * count;
    for (i = 0; i < total; i += stride) {
        dst[i] = src[i];
    }
    return total;
}
