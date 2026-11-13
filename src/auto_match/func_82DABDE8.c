typedef unsigned char bool;
extern int fn_82D8E878();
extern int fn_82DAC678();
extern int fn_82DBBA90();
extern int fn_82DC7748();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int uStack_50;


__int64 fn_82DABDE8(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  bool bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned short uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  int iVar8;
  __int64 lVar9;
  char acStack_60;
  struct { unsigned int first; int second; } stack_pair_50;

  int iStack_48;
  int iStack_44;
  
  iVar6 = *(int *)(param_1 + 0x28);
  iVar8 = 0;
  stack_pair_50.first = 0;
  bVar2 = *(unsigned char *)((param_3 & 0xffff) + *(int *)(param_1 + 0xc));
  *(unsigned char *)((param_3 & 0xffff) + *(int *)(param_1 + 0xc)) = 0xff;
  acStack_60 = '\0';
  uVar4 = *(unsigned short *)(iVar6 + 4);
  bVar1 = uVar4 == 2;
  uVar5 = *(unsigned int *)(param_1 + 0x28);
  if (bVar1) {
    iVar8 = 0x20;
  }
  iStack_48 = bVar1 + 1;
  stack_pair_50.second = iVar8 + 0x30;
  if ((uVar4 & 1) == 0) {
    stack_pair_50.second = iVar8 + 0x40;
  }
  iStack_44 = bVar1 + 1;
  fn_82DAC678(iVar6,bVar2);
  iVar6 = (unsigned int)*(unsigned char *)(iVar6 + 10) * (int)(short)(unsigned short)bVar2 +
          (unsigned int)*(unsigned short *)(iVar6 + 6) * 0x20 + iVar6;
  *(unsigned char *)(iVar6 + 0x3f) = *(unsigned char *)(iVar6 + 0x3f) & 0xfd;
  iVar6 = fn_82DC7748(*(unsigned int *)(param_1 + 0x28),1,&acStack_60);
  *(int *)(param_1 + 0x28) = iVar6;
  uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
  lVar9 = uVar7 - 1;
  if (-1 < lVar9) {
    do {
      bVar3 = *(unsigned char *)(*(int *)(param_1 + 0xc) + (int)lVar9);
      if ((bVar3 != 0xff) && (bVar2 < bVar3)) {
        *(unsigned char *)(*(int *)(param_1 + 0xc) + (int)lVar9) = bVar3 - 1;
      }
      lVar9 = lVar9 + -1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  fn_82D8E878(param_2,*(unsigned int *)(param_1 + 0x24),&stack_pair_50.first);
  if (acStack_60 != '\0') {
    fn_82DBBA90(*(unsigned int *)(param_1 + 0x24),uVar5,*(int *)(param_1 + 0x28),
                 *(unsigned short *)(*(int *)(param_1 + 0x28) + 2));
    *(unsigned int *)(param_1 + 0x2c) = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x28) + 2);
  }
  *(unsigned short *)(iVar6 + 0x10) = *(unsigned short *)(iVar6 + 0x10) | 5;
  return (unsigned __int64)uVar4 - 1;
}

