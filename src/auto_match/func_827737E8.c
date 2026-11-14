typedef struct Entry_827737E8 {
    unsigned short key;
    unsigned char flags;
    unsigned char pad;
} Entry_827737E8;

extern Entry_827737E8 lbl_831566B0[];

unsigned char fn_827737E8(unsigned int caps, unsigned short key, unsigned int mask)
{
    if (caps & 2) {
        int lo = 0;
        int hi = 0x88;
        do {
            int mid = lo + (hi - lo) / 2;
            if (key == lbl_831566B0[mid].key)
                return (lbl_831566B0[mid].flags & mask) != 0;
            if (key < lbl_831566B0[mid].key)
                hi = mid - 1;
            else
                lo = mid + 1;
        } while (lo <= hi);
    }
    return 0;
}
