extern int fn_826824B0();
extern int fn_826959C8();
extern int fn_826C3378();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_82695FA0(unsigned char *param_1,unsigned char *param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  int iStack_30;
  int iStack_2c;
  unsigned char bStack_28;
  
  if (4 < *param_1) {
    fn_826959C8();
  }
  *param_1 = *param_2;
  switch(*param_2) {
  case 2:
    param_1[4] = param_2[4];
    break;
  case 3:
    *(unsigned __int64 *)(param_1 + 8) = *(unsigned __int64 *)(param_2 + 8);
    break;
  case 4:
    *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_2 + 8);
    break;
  case 5:
  case 0xb:
    iVar1 = *(int *)(param_2 + 4);
    *(int *)(param_1 + 4) = iVar1;
    uVar3 = *(int *)(iVar1 + 8) + 1;
    goto code_r0x826961a0;
  case 6:
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 0) {
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      return;
    }
    iVar1 = (**(int (***)())(*(int *)(iVar1 + 0x10) + 8))(iVar1 + 0x10);
    if (iVar1 == 0x17) {
      *param_1 = 8;
      piVar2 = (int *)(**(int (***)())(*(int *)(*(int *)(param_2 + 4) + 0x10) + 0x30))
                                (&iStack_30,*(int *)(param_2 + 4) + 0x10);
      param_1[0xc] = 0;
      iVar1 = *piVar2;
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 != 0) {
        *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
      }
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      if (piVar2[1] != 0) {
        fn_826C3378(param_1 + 4,piVar2[1],*(unsigned char *)(piVar2 + 2) & 1);
      }
      if (((bStack_28 & 2) == 0) && (iStack_30 != 0)) {
        fn_826824B0();
      }
      iStack_30 = 0;
      if ((bStack_28 & 1) != 0) {
        return;
      }
      if (iStack_2c == 0) {
        return;
      }
      fn_826824B0();
      return;
    }
  case 9:
    iVar1 = *(int *)(param_2 + 4);
    *(int *)(param_1 + 4) = iVar1;
    uVar3 = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
code_r0x826961a0:
    *(unsigned int *)(iVar1 + 8) = uVar3;
    break;
  case 7:
    piVar2 = *(int **)(param_2 + 4);
    *(int **)(param_1 + 4) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar2 + 1;
    }
    break;
  case 8:
  case 0xc:
    param_1[0xc] = 0;
    iVar1 = *(int *)(param_2 + 4);
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0) {
      *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
    }
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    if (*(int *)(param_2 + 8) != 0) {
      fn_826C3378(param_1 + 4,*(int *)(param_2 + 8),param_2[0xc] & 1);
    }
  }
  return;
}

