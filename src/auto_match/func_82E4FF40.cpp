/* Flag byte for a VARTYPE (the caller passes vt & ~VT_BYREF; 0x20 = default, 8 for 0xfff). */
extern "C" const unsigned char lbl_82153CC0[0x20];
extern "C" const unsigned char lbl_82153CE0[];

class VarTypeInfo_82E4FF40 {
public:
    unsigned char typeFlags(int vt);
};

unsigned char VarTypeInfo_82E4FF40::typeFlags(int vt)
{
    if (vt >= 0 && vt <= 0x1f) {
        return lbl_82153CC0[vt];
    }
    if (vt >= 0x40 && vt <= 0x49) {
        return lbl_82153CE0[vt - 0x40];
    }
    if (vt == 0xfff) {
        return 8;
    }
    return 0x20;
}
