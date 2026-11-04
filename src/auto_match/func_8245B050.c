extern int fn_8245B100(int);
int fn_8245B050(int self, unsigned char bits, int n) {
 if (n <= 7 && *(int *)(self+12) != 0 && *(int *)(self+20) != 0) {
  if (8 < (unsigned int)*(unsigned char *)(self+24) + n) {
   fn_8245B100(self);
   if (*(int *)(self+20) == 0) *(int *)(self+20) = 1;
  }
  { int i; for(i=0;i<n;i++) {
   unsigned low = bits & 1;
   bits = bits >> 1;
   *(unsigned char *)(self+25) |= low << *(unsigned char *)(self+24);
   ++*(unsigned char *)(self+24);
  } }
  return 0;
 }
 return 0x80004005;
}
