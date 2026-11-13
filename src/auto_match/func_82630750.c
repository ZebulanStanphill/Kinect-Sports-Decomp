extern int fn_82630270();
extern int fn_82645110();


void fn_82630750(int param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  
  uVar1 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar1) {
    uVar1 = fn_82645110(param_1);
  }
  if ((*param_3 & 0xf) == 1) {
    uVar3 = (unsigned __int64)param_3[6] & 0xfffffffc;
  }
  else if ((*param_3 & 0xf) == 3) {
    uVar3 = (unsigned __int64)param_3[8] & 0xfffff000;
    if ((param_3[8] & 0xfffff000) == 0) {
      uVar3 = (unsigned __int64)param_3[0xc] & 0xfffff000;
    }
  }
  else {
    uVar3 = (unsigned __int64)param_3[6];
  }
  *(unsigned int *)((param_2 + 0xa26) * 4 + param_1) =
       ((int)(uVar3 >> 0x14) + 0x200U & 0x1000) + ((unsigned int)uVar3 & 0x1fffffff);
  *(unsigned __int64 *)(param_1 + 0x10) =
       0x8000000000000000U >> (param_2 + 0xcU & 0x7f) | *(unsigned __int64 *)(param_1 + 0x10);
  *(unsigned int *)(uVar1 + 4) = 0x5c8;
  puVar2 = (unsigned int *)(uVar1 + 8);
  *puVar2 = 0x20000;
  if (*(int *)(param_1 + 0x3590) == 0) {
    if (param_4 == 10) {
      *(unsigned int *)(uVar1 + 0xc) = 0xc0004600;
      puVar2 = (unsigned int *)(uVar1 + 0x10);
      *puVar2 = 0xf;
    }
    else if (*(int *)(param_1 + 0x3594) != 0) goto LAB_8263087c;
    *(unsigned int **)(param_1 + 0x30) = puVar2;
    fn_82630270(param_1);
    puVar2 = *(unsigned int **)(param_1 + 0x30);
    if (*(unsigned int **)(param_1 + 0x38) < puVar2) {
      puVar2 = (unsigned int *)fn_82645110(param_1);
    }
  }
LAB_8263087c:
  *(unsigned int **)(param_1 + 0x30) = puVar2;
  *(unsigned int *)(param_1 + 0x3598) = param_4 & 3;
  *(unsigned int *)(param_1 + 0x3594) = 0;
  *(int *)(param_1 + 0x3590) = *(int *)(param_1 + 0x3590) + 1;
  return;
}

