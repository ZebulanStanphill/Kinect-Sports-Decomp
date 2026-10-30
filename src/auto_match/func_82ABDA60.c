typedef unsigned char bool8;
bool8 fn_82ABDA60(unsigned *p) {
 unsigned x=p[2];
 if (!(x & 0x40)) return 0;
 x=(x >> 7)&0x7f;
 return x==0x1e || x==0x37 || x==0x38;
}
