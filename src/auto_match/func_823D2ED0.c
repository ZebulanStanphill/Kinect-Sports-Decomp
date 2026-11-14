extern const float lbl_821922C0[0x1c];

const float *fn_823D2ED0(int kind)
{
    switch (kind) {
    case 5:
        return &lbl_821922C0[8];
    case 6:
        return &lbl_821922C0[11];
    case 7:
        return &lbl_821922C0[14];
    }
    return kind == 8 ? &lbl_821922C0[17] : 0;
}
