extern unsigned char lbl_8322344C;
extern int XamAvatarGetAssetsResultSize(unsigned,void *,void *);
int fn_82A82160(unsigned flags,void *a,void *b) {
    unsigned low;
    if(!lbl_8322344C) return 0x8000ffff;
    low=(unsigned short)flags;
    if(low && !(low&~0x1fff) && a && b) return XamAvatarGetAssetsResultSize(flags,a,b);
    return 0x80070057;
}
