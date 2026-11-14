typedef struct Unpacked_82807DA8 {
    unsigned int pointers[4];
    char pad10[0x10];
    unsigned char shifts[4];
} Unpacked_82807DA8;

void fn_82807DA8(Unpacked_82807DA8 *out, const unsigned int *tagged)
{
    int i;

    for (i = 0; i < 4; i++) {
        if (tagged[i] != 0) {
            out->pointers[i] = tagged[i] & ~3u;
            out->shifts[i] = (unsigned char)((tagged[i] & 3) << 3);
        } else {
            out->pointers[i] = 0;
            out->shifts[i] = 0;
        }
    }
}
