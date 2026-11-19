extern int fn_8265CA20();
extern unsigned int lbl_821AC4A4;
extern unsigned int lbl_821C558C;


unsigned int * fn_82580390(unsigned int *self,unsigned int flags)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)self[3];
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  self[1] = &lbl_821AC4A4;
  *self = &lbl_821C558C;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

