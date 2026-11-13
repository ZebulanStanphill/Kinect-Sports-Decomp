extern int fn_825737F0();
extern int fn_825BFE18();
extern int fn_825C16D8();
extern int fn_82D89B48();


void fn_825715B8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 & 0xffffffff) != 0) {
    iVar1 = param_1[10];
    if (iVar1 != 0) {
      *(unsigned int *)(iVar1 + 0x174) = 0;
      *(unsigned int *)(iVar1 + 0x170) = 0;
      *(unsigned char *)(iVar1 + 0xc0) = 0;
      *(unsigned int *)(iVar1 + 0xa0) = 0;
      *(unsigned char *)(iVar1 + 0x130) = 0;
      *(unsigned int *)(iVar1 + 0x110) = 0;
      *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(iVar1 + 4);
      *(unsigned short *)(iVar1 + 0x14) = 0;
      *(unsigned int *)(iVar1 + 0x1c) = *(unsigned int *)(iVar1 + 0x18);
      *(unsigned short *)(iVar1 + 0x28) = 0;
      *(unsigned int *)(iVar1 + 0x30) = *(unsigned int *)(iVar1 + 0x2c);
      *(unsigned short *)(iVar1 + 0x3c) = 0;
      *(unsigned int *)(iVar1 + 0x44) = *(unsigned int *)(iVar1 + 0x40);
      *(unsigned short *)(iVar1 + 0x50) = 0;
      fn_82D89B48(param_2,param_1[10]);
      piVar2 = (int *)param_1[10];
      if (piVar2 != (int *)0x0) {
        (**(int (***)())(*piVar2 + 0xc))(piVar2,1);
      }
      param_1[10] = 0;
    }
    fn_825737F0(param_2 + 0x200);
  }
  *(unsigned short *)(param_1 + 4) = 0;
  param_1[1] = *param_1;
  param_1[6] = param_1[5];
  *(unsigned short *)(param_1 + 9) = 0;
  if ((param_1[0x42] & 1) != 0) {
    fn_825BFE18(param_1 + 0xb);
  }
  if ((param_1[0x42] & 2) != 0) {
    fn_825C16D8(param_1 + 0x24,param_3);
  }
  return;
}

