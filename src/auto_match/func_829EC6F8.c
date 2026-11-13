extern unsigned int *auStack_10;


unsigned int fn_829EC6F8(int *param_1)

{
  unsigned int uVar1;
  unsigned int auStack_10;
  
  auStack_10 = 0;
  uVar1 = (*(int (**)())(*param_1 + 4))(param_1,&auStack_10);
  return (uVar1 >> 0x1f) - 1 & auStack_10;
}

