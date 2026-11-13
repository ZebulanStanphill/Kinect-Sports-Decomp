typedef unsigned char bool;
extern int fn_82C0BDF8();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82C0F3F0(__int64 param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  int *piVar5;
  unsigned __int64 *puVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  int *apiStack_30 [12];
  
  piVar4 = (int *)param_1;
  (**(int (***)())(*(int *)piVar4[0xb] + 0x44))((int *)piVar4[0xb],apiStack_30,0,0);
  uVar1 = apiStack_30[0][0xd];
  piVar5 = (int *)fn_82C0BDF8(apiStack_30[0],piVar4[0x40]);
  (**(int (***)())(*piVar5 + 0x38))(piVar5,1);
  puVar6 = (unsigned __int64 *)(**(int (***)())(*piVar5 + 0x50))(piVar5);
  uVar8 = *puVar6;
  (**(int (***)())(*piVar5 + 8))(piVar5);
  if (apiStack_30[0] != (int *)0x0) {
    (**(int (***)())(*apiStack_30[0] + 8))();
    apiStack_30[0] = (int *)0x0;
  }
  do {
    puVar7 = (unsigned int *)(param_1 + 0xf4);
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar7 - 1,0,param_1 + 0xf4);
      *puVar7 = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  iVar2 = piVar4[0x40];
  piVar4[0x40] = iVar2 + 1U;
  if (uVar1 <= iVar2 + 1U) {
    piVar4[0x40] = 0;
  }
  (**(int (***)())(*(int *)piVar4[0xb] + 0x5c))((int *)piVar4[0xb],uVar8);
  (**(int (***)())(*piVar4 + 0xc4))(param_1);
  (**(int (***)())(*piVar4 + 0xcc))(param_1);
  return;
}

