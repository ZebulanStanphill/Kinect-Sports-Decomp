typedef unsigned char bool;
extern unsigned int *auStack_40;
extern int fn_8267BE38();
extern int fn_82688D90();
extern int fn_8268C510();
extern int fn_826D6D98();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82688E90(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int auStack_40 [2];
  unsigned int *puStack_38;
  unsigned int *puStack_34;
  
  piVar6 = *(int **)(param_1 + 0xc);
  if (piVar6 != (int *)0x0) {
    uVar7 = 0;
    if (piVar6[1] != 0) {
      iVar8 = 0;
      do {
        iVar9 = *(int *)(*piVar6 + iVar8);
        fn_826D6D98(*(unsigned int *)(iVar9 + 0x20));
        iVar9 = *(int *)(*(int *)(iVar9 + 0x20) + 0x98);
        sync(1);
        if (iVar9 != 0) {
          puStack_38 = auStack_40;
          puStack_34 = auStack_40;
          do {
            uVar2 = (**(int (***)())(**(int **)(iVar9 + 4) + 0x3c))();
            fn_8268C510(auStack_40,uVar2);
            fn_82688D90(param_2,param_2,&puStack_38);
            lVar3 = ((unsigned __int64)auStack_40[0] & 0xfffffffc) + 4;
            do {
              puVar4 = (unsigned int *)lVar3;
              uVar5 = (unsigned __int64)*puVar4;
              if (in_RESERVE != '\0') {
                uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar3);
                *puVar4 = uVar1;
                in_cr0 = 2;
              }
            } while (!(bool)(in_cr0 >> 1 & 1));
            in_cr0 = (uVar5 == 1) << 1;
            if (uVar5 == 1) {
              fn_8267BE38();
            }
            iVar9 = *(int *)(iVar9 + 0xc);
            sync(1);
          } while (iVar9 != 0);
        }
        piVar6 = *(int **)(param_1 + 0xc);
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + 4;
      } while (uVar7 < (unsigned int)piVar6[1]);
    }
  }
  return;
}

