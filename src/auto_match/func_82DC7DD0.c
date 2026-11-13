typedef unsigned char bool;
extern int fn_82D92F30();
extern int fn_82DBBA90();
extern int fn_82DC7648();
extern int fn_82DC8200();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_821AAD20;


unsigned short fn_82DC7DD0(int param_1,unsigned __int64 param_2,int *param_3,int *param_4)

{
  bool bVar1;
  unsigned char bVar2;
  unsigned short uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned short uVar8;
  int iVar9;
  unsigned int uVar10;
  char acStack_60;
  struct { int first; int second; } stack_pair_50;

  int iStack_48;
  int iStack_44;
  
  iVar9 = *(int *)(param_1 + 0x28);
  uVar3 = *(unsigned short *)(iVar9 + 4);
  *(unsigned short *)(iVar9 + 0x10) = *(unsigned short *)(iVar9 + 0x10) | 4;
  acStack_60 = '\0';
  uVar4 = *(unsigned int *)(param_1 + 0x28);
  iVar7 = fn_82DC7648(uVar4,&acStack_60);
  *(int *)(param_1 + 0x28) = iVar7;
  uVar6 = lbl_821AAD20;
  bVar2 = *(unsigned char *)(iVar7 + 10);
  iVar9 = (unsigned int)*(unsigned short *)(iVar7 + 6) * 0x20 + (unsigned int)bVar2 * (unsigned int)uVar3 + iVar7;
  puVar5 = (unsigned int *)(iVar9 + 0x30);
  *puVar5 = lbl_821AAD20;
  *(unsigned int *)(iVar9 + 0x34) = uVar6;
  *(unsigned char *)(iVar9 + 0x3f) = 1;
  if (((uVar3 != 0) && ((*(unsigned char *)((int)puVar5 + (0xf - (unsigned int)bVar2)) & 2) == 0)) &&
     (*(char *)((int)puVar5 + (0xe - (unsigned int)bVar2)) == '\0')) {
    *(unsigned char *)(iVar9 + 0x3f) = 3;
  }
  uVar10 = uVar3 + 1;
  *param_3 = (unsigned int)uVar3 * 0x20 + iVar7 + 0x30;
  *param_4 = (int)puVar5;
  iVar9 = 0;
  stack_pair_50.first = ((int)uVar10 >> 1) * 0x70 + ((uVar10 & 1) + (uVar10 * 2 & 2)) * 0x10 + 0xa0;
  bVar1 = uVar3 == 1;
  if (bVar1) {
    iVar9 = 0x20;
  }
  iStack_48 = bVar1 + 1;
  stack_pair_50.second = iVar9 + 0x30;
  if ((uVar10 & 1) == 0) {
    stack_pair_50.second = iVar9 + 0x40;
  }
  iStack_44 = bVar1 + 1;
  fn_82D92F30(param_2,*(unsigned int *)(param_1 + 0x24),&stack_pair_50.first);
  if (acStack_60 != '\0') {
    fn_82DBBA90(*(unsigned int *)(param_1 + 0x24),uVar4,*(unsigned int *)(param_1 + 0x28),
                  *(unsigned short *)(iVar7 + 2));
    *(unsigned int *)(param_1 + 0x2c) = (unsigned int)*(unsigned short *)(iVar7 + 2);
  }
  uVar8 = fn_82DC8200(param_1 + 0xc,(unsigned int)uVar3);
  return uVar8;
}

