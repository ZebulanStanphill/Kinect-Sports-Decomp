extern int fn_82ABDD90();
extern int fn_82AD1978();


void fn_82B46F08(int param_1,int param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  
  uVar4 = *(unsigned int *)(param_2 + 8);
  iVar1 = fn_82ABDD90(param_1,uVar4 >> 7 & 0x7f,uVar4 >> 0x13 & 7,uVar4 >> 0xe & 7);
  uVar4 = *param_3;
  iVar1 = iVar1 + param_2 + -0x10;
  if ((uVar4 & 8) == 0) {
    if ((uVar4 & 0x200) != 0) {
      iVar3 = 5;
LAB_82b46f5c:
      uVar4 = iVar3 << 3 | *(unsigned int *)(iVar1 + 8) & 0xfffffe00;
      goto LAB_82b4705c;
    }
    if ((uVar4 & 0x400) == 0) {
      if ((uVar4 & 0x10) != 0) {
        iVar3 = 1;
        goto LAB_82b46f5c;
      }
      if ((uVar4 & 0x20) == 0) {
        if ((uVar4 & 0x40) != 0) {
          uVar4 = *(unsigned int *)(iVar1 + 8) & 0xfffffe00 | 0x10;
          goto LAB_82b4705c;
        }
        if ((uVar4 & 0x80) != 0) {
          uVar4 = *(unsigned int *)(iVar1 + 8) & 0xfffffe00 | 0x20;
          goto LAB_82b4705c;
        }
        if ((uVar4 & 0x100) == 0) {
          uVar4 = *(unsigned int *)(param_1 + 0x34);
          if (((uVar4 & 0x400) == 0) || ((param_3[1] & 8) == 0)) {
            if (((uVar4 & 0x400) != 0) && ((param_3[1] & 0x200) != 0)) {
              iVar3 = 0x15;
              goto LAB_82b46f5c;
            }
            if ((uVar4 & 0x200) == 0) {
              return;
            }
            if ((param_3[1] & 0x400) == 0) {
              return;
            }
            iVar3 = 0x27;
          }
          else {
            iVar3 = 0x21;
          }
        }
        else {
          iVar3 = 9;
        }
      }
      else {
        iVar3 = 3;
      }
    }
    else {
      if (param_3[3] != 0) {
        uVar2 = fn_82AD1978(param_2);
        *(unsigned int *)(iVar1 + 4) = uVar2;
        uVar4 = *(unsigned int *)(iVar1 + 8) & 0xfffffffc | 1;
        goto LAB_82b4705c;
      }
      iVar3 = 7;
    }
  }
  else {
    iVar3 = 1;
  }
  uVar4 = iVar3 << 2 | *(unsigned int *)(iVar1 + 8) & 0xfffffe00;
LAB_82b4705c:
  *(unsigned int *)(iVar1 + 8) = uVar4;
  return;
}

