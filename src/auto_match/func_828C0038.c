typedef struct Entry_828C0038 {
    int id;
    float value;
    unsigned char absolute;
    char pad9[3];
    int extra;
} Entry_828C0038;

extern Entry_828C0038 lbl_83159F28[11];
extern float lbl_83159FD8;

float fn_828C0038(int n)
{
    Entry_828C0038 *e = &lbl_83159F28[n];
    float v = e->value;
    if (e->absolute)
        return v;
    return lbl_83159FD8 * v;
}
