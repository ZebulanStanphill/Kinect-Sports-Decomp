extern int fn_82A2A108();


unsigned __int64 fn_82C054E0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  
  piVar1 = (int *)param_1[0x21];
  uVar6 = 0;
  uVar5 = *(unsigned __int64 *)(param_1 + 0x16) & 0xfffffffffffff800;
  param_1[0x1c] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x20] = (int)piVar1;
  param_1[0x18] = 0;
  param_1[0x19] = 1;
  *(unsigned __int64 *)(param_1 + 0x12) = uVar5;
  if (param_1[0x1b] != 0) {
    do {
      iVar4 = (**(int (***)())(*piVar1 + 0x30))(piVar1);
      uVar7 = ((__int64)param_1[0x1a] * (__int64)(int)uVar6 & 0xffffffffU) + uVar5;
      if (((param_1[0x1e] & 8U) != 0) &&
         (*(__int64 *)(param_1 + 0x10) + *(unsigned __int64 *)(param_1 + 0xe) <= uVar7)) {
        uVar5 = *(unsigned __int64 *)(param_1 + 0xe) & 0xfffffffffffff800;
        uVar7 = uVar5;
      }
      (**(int (***)())(*piVar1 + 0x34))(piVar1,0);
      (**(int (***)())(*piVar1 + 0x3c))(piVar1,uVar7);
      *(__int64 *)(param_1 + 0x18) = *(__int64 *)(param_1 + 0x18) + 1;
      (**(int (***)())(*piVar1 + 0x44))(piVar1);
      *(int *)(iVar4 + 8) = (int)uVar7;
      *(int *)(iVar4 + 0xc) = (int)(uVar7 >> 0x20);
      iVar2 = param_1[0x1a];
      uVar3 = (**(int (***)())(*piVar1 + 0x28))(piVar1);
      iVar4 = fn_82A2A108(param_1[0xb],uVar3,iVar2,0,iVar4);
      if (iVar4 == 0) {
        iVar4 = thunk_FUN_82a2b798();
        if (iVar4 == 0x26) {
          (**(int (***)())(*piVar1 + 0x34))(piVar1,1);
          if (uVar6 == 0) {
            param_1[0xc] = 1;
          }
          if ((param_1[0x1e] & 8U) == 0) {
            return 0;
          }
        }
        else if (iVar4 != 0x3e5) {
          (**(int (***)())(*piVar1 + 0x34))(piVar1,1);
          uVar3 = (**(int (***)())(*param_1 + 0x20))(param_1);
          if (uVar6 != 0) {
            return uVar3;
          }
          param_1[0xc] = 1;
          return uVar3;
        }
      }
      uVar6 = uVar6 + 1;
      piVar1 = (int *)piVar1[2];
      *(unsigned __int64 *)(param_1 + 0x14) =
           (unsigned __int64)(unsigned int)param_1[0x1a] + *(__int64 *)(param_1 + 0x14);
    } while (uVar6 < (unsigned int)param_1[0x1b]);
  }
  return 0;
}

