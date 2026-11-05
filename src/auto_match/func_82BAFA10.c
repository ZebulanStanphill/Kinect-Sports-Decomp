extern void fn_82BC04C0(unsigned,int);
void fn_82BAFA10(int p,int q) {
 int i=0; unsigned *slots=(unsigned *)(q+0x3a0); unsigned t[4];
 do { if(!*slots) break; ++i; ++slots; } while(i<4);
 t[0]=*(unsigned *)(p+8);t[1]=*(unsigned *)(p+12);t[2]=*(unsigned *)(p+16);t[3]=*(unsigned *)(p+20);
 fn_82BC04C0(t[i-1],q);
}
