extern unsigned int *auStack_10;
extern unsigned int *lbl_83218C34;


unsigned int fn_829F5BE8(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned int auStack_10;
  
  auStack_10 = 0;
  uVar1 = 0;
  if (lbl_83218C34 != (int *)0x0) {
    (*(int (**)())(*lbl_83218C34 + 0x78))(lbl_83218C34,param_1,&auStack_10);
    uVar1 = auStack_10;
  }
  return uVar1;
}

