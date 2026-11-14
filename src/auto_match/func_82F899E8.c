int fn_82F899E8(const char *a, const char *b)
{
    int ca;
    int cb;

    do {
        ca = *(const unsigned char *)a++;
        if (ca >= 'A' && ca <= 'Z') {
            ca += 0x20;
        }
        cb = *(const unsigned char *)b++;
        if (cb >= 'A' && cb <= 'Z') {
            cb += 0x20;
        }
    } while (ca != 0 && ca == cb);
    return ca - cb;
}
