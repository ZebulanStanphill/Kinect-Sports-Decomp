extern int *piRam83219598;
extern unsigned int *auStack_48;
extern int fn_82A33EC8();
extern int fn_82A381F0();
extern unsigned int uStack_50;


unsigned __int64
fn_82A38C78(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 *param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  int *piVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uStack_50;
  unsigned __int64 auStack_48;

  piVar1 = piRam83219598;
  iVar3 = fn_82A381F0(piRam83219598 + 0x14,param_1,0);
  if (iVar3 == 0) {
LAB_82a38d34:
    uVar2 = (**(int (***)())(*piVar1 + 0x20))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    iVar4 = (int)param_5;
    if ((iVar4 == 5) || (iVar4 == 0x22)) {
      uVar2 = (**(int (***)())(*piVar1 + 0x20))
                        (*(unsigned int *)(iVar3 + 4),param_2,param_3,param_4,param_5);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = fn_82A33EC8(piVar1,iVar3,&uStack_50);
      if (iVar4 == 5) {
        *param_3 = uStack_50;
        param_3[1] = uStack_50;
        return uVar2;
      }
      param_3[4] = uStack_50;
      param_3[5] = uStack_50;
      return uVar2;
    }
    if ((iVar4 == 0x13) || (iVar4 == 0x14)) {
      uVar2 = fn_82A33EC8(piVar1,iVar3,&uStack_50);
      auStack_48 = uStack_50;
    }
    else if (iVar4 == 0xe) {
      auStack_48 = *(unsigned __int64 *)(iVar3 + 0x30);
      uVar2 = 0;
    }
    else {
      if (iVar4 != 0x1c) {
        param_1 = (unsigned __int64)*(unsigned int *)(iVar3 + 4);
        goto LAB_82a38d34;
      }
      uVar2 = (**(int (***)())(*piVar1 + 0x20))(*(unsigned int *)(iVar3 + 4),param_2,&auStack_48,8,0x13);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      *(unsigned short *)(param_3 + 1) = 1;
    }
    *param_3 = auStack_48;
  }
  return uVar2;
}
