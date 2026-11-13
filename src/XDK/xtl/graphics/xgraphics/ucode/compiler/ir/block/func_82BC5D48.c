typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AB15D0();
extern int fn_82B7BEB0();
extern int fn_82BBFD60();
extern int fn_82BC0000();
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82BC5D48(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_64;
  
  iVar1 = *(int *)(param_1 + 0xa4);
  do {
    bVar5 = false;
    iVar8 = *(int *)(*(int *)(param_1 + 0x88) + 8);
    iVar6 = *(int *)(param_1 + 0x88);
    while (iVar3 = iVar8, iVar3 != 0) {
      if ((iVar6 != iVar1) && (*(int *)(*(int *)(iVar6 + 0x3c) + 4) == 0)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820e4b68,0x22f);
        iVar8 = 0;
        for (uVar7 = 1; uVar7 <= *(unsigned int *)(*(int *)(iVar6 + 0x38) + 4); uVar7 = uVar7 + 1) {
          iVar4 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 8) + iVar8);
          puVar2 = *(unsigned int **)(iVar4 + 0x3c);
          stack_pair_70.first = *puVar2;
          stack_pair_70.second = puVar2[1];
          uStack_68 = puVar2[2];
          uStack_64 = puVar2[3];
          fn_82BC0000(&stack_pair_70.first,iVar6);
          if (*(int *)(*(int *)(iVar4 + 0x3c) + 4) == 0) {
            bVar5 = true;
          }
          fn_82B7BEB0(uStack_64,uStack_68);
          iVar8 = iVar8 + 4;
        }
        fn_82BBFD60(iVar6);
      }
      iVar6 = iVar3;
      iVar8 = *(int *)(iVar3 + 8);
    }
  } while (bVar5);
  return;
}

