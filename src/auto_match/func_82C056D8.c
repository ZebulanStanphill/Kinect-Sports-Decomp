extern unsigned int *auStack_40;
extern int fn_82A29AC0();


unsigned __int64 fn_82C056D8(int *param_1)

{
  int *piVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned char auStack_40 [16];
  
  uVar4 = 0;
  if (param_1[0xb] != -1) {
    uVar5 = 0;
    piVar1 = (int *)param_1[0x21];
    if (param_1[0x1b] != 0) {
      do {
        iVar3 = (**(int (***)())(*piVar1 + 0x38))(piVar1);
        if (iVar3 == 0) {
          uVar2 = (**(int (***)())(*piVar1 + 0x30))(piVar1);
          iVar3 = fn_82A29AC0(param_1[0xb],uVar2,auStack_40,1);
          if (((iVar3 == 0) && (iVar3 = thunk_FUN_82a2b798(), iVar3 != 0x26)) && (iVar3 != 0x3e3)) {
            uVar4 = (**(int (***)())(*param_1 + 0x20))(param_1);
          }
          (**(int (***)())(*piVar1 + 0x34))(piVar1,1);
        }
        (**(int (***)())(*piVar1 + 0x44))(piVar1,0);
        uVar5 = uVar5 + 1;
        piVar1 = (int *)piVar1[2];
      } while (uVar5 < (unsigned int)param_1[0x1b]);
    }
  }
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return uVar4;
}

