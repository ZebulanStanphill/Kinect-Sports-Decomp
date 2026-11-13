typedef unsigned char bool;
extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_822D7940();
extern int fn_823B4970();
extern int fn_8265C9E0();
extern int fn_828DFF48();
extern int fn_828E8F80();
extern int fn_828E9D28();
extern unsigned int iStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_828E5D98(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar3;
  int *piVar6;
  int iVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned char auStack_28 [4];
  int iStack_24;
  
  iVar4 = fn_8265C9E0(0x28);
  iVar7 = 0;
  if (iVar4 != 0) {
    *(unsigned int *)(iVar4 + 0x18) = 0;
    *(unsigned int *)(iVar4 + 0x1c) = 0;
    *(unsigned int *)(iVar4 + 0x20) = 0;
    *(unsigned int *)(iVar4 + 0x10) = 0;
    *(unsigned int *)(iVar4 + 0x14) = 0;
    fn_828E9D28(iVar4,0,0);
    iVar7 = iVar4;
  }
  puVar5 = (unsigned int *)fn_822D7940(auStack_28,iVar7);
  uVar1 = puVar5[1];
  puVar5[1] = *(unsigned int *)(param_1 + 0x8c);
  *(unsigned int *)(param_1 + 0x8c) = uVar1;
  uVar1 = *puVar5;
  *puVar5 = *(unsigned int *)(param_1 + 0x88);
  *(unsigned int *)(param_1 + 0x88) = uVar1;
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  uVar1 = *(unsigned int *)(param_1 + 0x6c);
  uVar3 = fn_828E8F80();
  fn_828DFF48(&uStack_30,param_2,uVar1,uVar3);
  if ((unsigned __int64)uStack_2c != 0) {
    lVar8 = (unsigned __int64)uStack_2c + 4;
    do {
      puVar9 = (unsigned int *)lVar8;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar9 + 1,0,lVar8);
        *puVar9 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  iVar7 = *(int *)(param_1 + 0x84);
  *(unsigned int *)(param_1 + 0x84) = uStack_2c;
  *(unsigned int *)(param_1 + 0x80) = uStack_30;
  if (iVar7 != 0) {
    fn_822315A0();
  }
  piVar6 = (int *)(**(int (***)())(**(int **)(param_1 + 0x80) + 0x1c))();
  uVar1 = *(unsigned int *)(param_1 + 0x88);
  uVar3 = (**(int (***)())(*piVar6 + 4))(piVar6,param_2);
  fn_823B4970(uVar1,param_2,uVar3,0);
  if (uStack_2c != 0) {
    fn_822315A0();
  }
  return;
}

