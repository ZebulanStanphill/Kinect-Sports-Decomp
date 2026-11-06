extern double lbl_82005710;
void fn_827A25C0(char *p,unsigned char a,unsigned char b) { unsigned short *f=(unsigned short *)(p+0x68);
if (!(*f&1) && a) *f |= 8; else *f &= 0xfff7; *(double *)(p+0x38)=lbl_82005710; if(b) *f |= 16; }