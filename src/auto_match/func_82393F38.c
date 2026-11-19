extern void fn_822315A0(void *);
extern void fn_8265CA20(void *);
extern unsigned int lbl_82197048;


unsigned int * fn_82393F38(unsigned int *self,unsigned int flags)

{
  if (self[0x1c] != 0) {
    fn_822315A0((void *)self[0x1c]);
  }
  if (self[0x1a] != 0) {
    fn_822315A0((void *)self[0x1a]);
  }
  if (self[0x18] != 0) {
    fn_822315A0((void *)self[0x18]);
  }
  if (self[0x16] != 0) {
    fn_822315A0((void *)self[0x16]);
  }
  if (self[0x14] != 0) {
    fn_822315A0((void *)self[0x14]);
  }
  if (self[0x12] != 0) {
    fn_822315A0((void *)self[0x12]);
  }
  if (self[0x10] != 0) {
    fn_822315A0((void *)self[0x10]);
  }
  if (self[0xe] != 0) {
    fn_822315A0((void *)self[0xe]);
  }
  if (self[0xc] != 0) {
    fn_822315A0((void *)self[0xc]);
  }
  *self = &lbl_82197048;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

