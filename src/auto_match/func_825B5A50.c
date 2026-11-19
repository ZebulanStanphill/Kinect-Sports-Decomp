extern int fn_8265CA20();
extern unsigned int lbl_821C7E88;
extern unsigned int lbl_821C8494;


unsigned int * fn_825B5A50(unsigned int *self,unsigned int flags)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)self[2];
  *self = &lbl_821C8494;
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
    self[2] = 0;
  }
  *self = &lbl_821C7E88;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

