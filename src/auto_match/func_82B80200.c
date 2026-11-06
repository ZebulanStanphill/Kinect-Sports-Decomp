int fn_82B80200(unsigned *self) {
 unsigned v=(self[2] >> 7) & 127;
 unsigned char range;
 if(v<0x20 || v>0x52) range=0; else range=1;
 if(range) return 1;
 if(v>=0x10 && (v<=0x12 || (v>0x13 && v<=0x18))) return 1;
 return 0;
}
