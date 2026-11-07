typedef struct Entry_822FC0E0 {
    int key;
    float value;
} Entry_822FC0E0;

extern Entry_822FC0E0 lbl_831CC8D8[];
extern float lbl_82191EA0[];

float fn_822FC0E0(int key)
{
    unsigned int i;

    for (i = 0; i < 5; i++) {
        if (lbl_831CC8D8[i].key == key) {
            return lbl_831CC8D8[i].value;
        }
    }
    return lbl_82191EA0[0x12c / 4];
}
