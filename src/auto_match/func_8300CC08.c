void fn_8300CC08(int self,unsigned index) {
 int n=index&0xffff;
 char *c=(char *)((index>>3&0x1fff)+*(int *)(self+36));
 *c &= ~(1 << (n%8));
}
