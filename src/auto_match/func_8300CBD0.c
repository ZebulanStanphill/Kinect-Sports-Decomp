// Kinect Sports retail 4D5308C9, function 0x8300CBD0 (52 bytes).
// Sets bit (index & 0xffff) in the bit array whose byte pointer is at self+36.
void fn_8300CBD0(int self,unsigned index) {
 int n=index&0xffff;
 char *c=(char *)((index>>3&0x1fff)+*(int *)(self+36));
 *c |= 1 << (n%8);
}
