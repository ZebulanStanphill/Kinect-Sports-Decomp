extern int fn_82A1EFC0();
extern int fn_82FA5100();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC770;


unsigned __int64 fn_83022038(int param_1,unsigned int param_2,unsigned char param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned char uVar4;
  __int64 lVar5;
  
  uVar2 = 0;
  uVar3 = param_2;
  if (param_2 == 0) {
LAB_8302208c:
    uVar4 = 2;
  }
  else {
    do {
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 - 1 & uVar3;
    } while (uVar3 != 0);
    if ((uVar2 & 0xffffffff) != 1) {
      if ((uVar2 & 0xffffffff) == 2) {
        *(unsigned char *)(param_1 + 0x2c) = 1;
        goto LAB_830220a4;
      }
      goto LAB_8302208c;
    }
    uVar4 = 0;
  }
  *(unsigned char *)(param_1 + 0x2c) = uVar4;
LAB_830220a4:
  *(unsigned char *)(param_1 + 0x24) = param_3;
  *(unsigned int *)(param_1 + 0x20) = param_2;
  *(unsigned char *)(param_1 + 0x25) = 1;
  *(unsigned int *)(param_1 + 0x1c) = 8;
  lVar5 = (uVar2 & 0xfffffff) << 4;
  *(unsigned char *)(param_1 + 0x2d) = 1;
  uVar1 = lbl_821AAD20;
  *(unsigned int *)(param_1 + 0x14) = lbl_821AAD20;
  *(unsigned int *)(param_1 + 0x18) = uVar1;
  uVar2 = fn_82FA5100(lbl_831BC770,lVar5,1);
  *(int *)(param_1 + 0x28) = (int)uVar2;
  if ((uVar2 & 0xffffffff) == 0) {
    return 0x34;
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(uVar2,0,lVar5);
}

