extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_8269A678();
extern int fn_826F6FA8();
extern int fn_826FC4C0();
extern unsigned int lbl_8200DDC8;
extern unsigned int lbl_831E7E64;


unsigned int * fn_826FECE0(unsigned int *param_1,int param_2,unsigned int param_3)

{
  int *piVar2;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar1;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  
  param_1[4] = param_2;
  uVar5 = 0;
  param_1[3] = param_3;
  param_1[1] = 0;
  *param_1 = &lbl_8200DDC8;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar6 = 0;
  param_1[8] = 0;
  param_1[9] = 0x10001;
  *(unsigned char *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(unsigned char *)(param_1 + 0xc) = 0;
  iVar4 = *(int *)(param_1[4] + 0x14);
  if (iVar4 == 0) {
    if (*(int *)(param_1[4] + 0x10) != -1) {
      uVar1 = (unsigned __int64)(unsigned int)param_1[3];
      iVar4 = fn_826F6FA8(uVar1);
      if ((iVar4 != 0) || (iVar4 = fn_826F6FA8(uVar1,0), iVar4 != 0)) {
        piVar2 = (int *)fn_826F6FA8(uVar1);
        piVar2 = (int *)(**(int (***)())(*piVar2 + 0x48))();
        uVar6 = (**(int (***)())(*piVar2 + 0x2c))();
        uVar6 = (uVar6 & 0xffffffff) >> 4 & 1;
      }
    }
  }
  else {
    piVar2 = (int *)fn_8269A678(iVar4,param_1[3]);
    if (piVar2 != (int *)0x0) {
      piVar2[1] = piVar2[1] + 1;
      piVar3 = (int *)(**(int (***)())(*piVar2 + 0x48))(piVar2);
      uVar6 = (**(int (***)())(*piVar3 + 0x2c))();
      uVar6 = (uVar6 & 0xffffffff) >> 4 & 1;
      fn_8267C498(piVar2);
    }
  }
  uVar1 = fn_8267B890(lbl_831E7E64,0x2c,0);
  if ((uVar1 & 0xffffffff) != 0) {
    uVar5 = fn_826FC4C0(uVar1,param_1[3],(unsigned __int64)(unsigned int)param_1[4] + 0xc,uVar6,
                          *(unsigned char *)(param_2 + 0x18));
  }
  if (param_1[5] != 0) {
    fn_8267C4F0();
  }
  param_1[5] = uVar5;
  piVar2 = (int *)(**(int (***)())(*(int *)(param_1[3] + 8) + 0xc))(param_1[3] + 8,0x17);
  (**(int (***)())(*piVar2 + 4))(piVar2,param_1[5]);
  fn_8267C4F0(piVar2);
  return param_1;
}

