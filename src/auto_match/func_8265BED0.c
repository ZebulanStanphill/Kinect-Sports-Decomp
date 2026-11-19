extern int fn_8265CA20();
extern int free();
extern unsigned int lbl_820014D4;


unsigned int * fn_8265BED0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820014D4;
  if (*(char *)(self + 2) != '\0') {
    free(self[1]);
  }
  self[1] = 0;
  *(unsigned char *)(self + 2) = 0;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

