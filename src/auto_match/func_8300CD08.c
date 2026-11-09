void fn_8300CD08(int self,unsigned index) {
 int n=index&0xffff;
 char *c=(char *)((index>>3&0x1fff)+*(int *)(self+40));
 *c &= ~(1 << (n%8));
}
