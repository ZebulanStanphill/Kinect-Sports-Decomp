extern "C" bool fn_82ABDB58(char *p) {
 unsigned x = (*(unsigned *)(p+8) >> 7) & 0x7f;
 return x == 0x56 || x == 0x57 || x == 0x59 || x == 0x5a || x == 0x54 || x == 0x55;
}
