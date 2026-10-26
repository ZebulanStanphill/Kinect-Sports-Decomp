typedef struct {
    char pad[0xc8];
    const unsigned short *pctype;
} LocInfo;

extern LocInfo lbl_831BBBD0;

int fn_82F70500(int c, int mask)
{
    return lbl_831BBBD0.pctype[c] & mask;
}
