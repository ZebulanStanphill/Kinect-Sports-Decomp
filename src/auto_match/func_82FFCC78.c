#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82F6E8D4();
extern int fn_82FFBD98();
extern int fn_8302B530();
extern int fn_8302B540();
extern int fn_8302B550();
extern int fn_8302B618();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


void fn_82FFCC78(__int64 param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  int *piVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  __int64 lVar9;
  
  puVar2 = (unsigned int *)(ZEXT48(&stack0x00000000) - 0x80);
  *puVar2 = register0x0000000c;
  uVar8 = 0;
  lVar9 = 0;
  fn_8302B530();
  param_1 = param_1 + 0x39c;
  iVar3 = fn_8302B550(param_1);
  if (*(unsigned int *)(iVar3 + 0x7c) != 0) {
    uVar7 = ((unsigned __int64)*(unsigned int *)(iVar3 + 0x7c) & 0x3fffffff) * -4 & 0xfffffff0;
    piVar4 = (int *)fn_82F6E8D4();
    iVar3 = *piVar4;
    uVar6 = 0;
    lVar5 = (ZEXT48(&stack0x00000000) - 0x80) + uVar7;
    *(unsigned int *)lVar5 = *puVar2;
    lVar9 = lVar5 + 0x50;
    do {
      if (iVar3 != 0) {
        lVar5 = lVar5 + 0x4c;
        do {
          do {
            if (*(int *)(iVar3 + 0x4c) != 0) {
              uVar8 = uVar8 + 1;
              lVar5 = lVar5 + 4;
              *(unsigned int *)lVar5 = *(unsigned int *)(iVar3 + 4);
            }
            iVar3 = *(int *)(iVar3 + 8);
          } while (iVar3 != 0);
          do {
            uVar6 = uVar6 + 1;
            if (0x1e < uVar6) {
              if (iVar3 == 0) goto LAB_82ffcd54;
              break;
            }
            iVar3 = piVar4[uVar6];
          } while (iVar3 == 0);
        } while( true );
      }
      uVar6 = uVar6 + 1;
      if (0x1e < uVar6) break;
      iVar3 = piVar4[uVar6];
    } while( true );
  }
LAB_82ffcd54:
  fn_8302B540();
  if (0 < (int)uVar8) {
    lVar9 = ((unsigned __int64)uVar8 & 0x3fffffff) * 4 + lVar9;
    do {
      lVar9 = lVar9 + -4;
      uVar1 = *(unsigned int *)lVar9;
      uVar8 = uVar8 - 1;
      fn_8302B530();
      iVar3 = fn_8302B618(param_1,uVar1);
      if ((iVar3 == 0) || (*(int *)(iVar3 + 0x4c) == 0)) {
        fn_8302B540();
      }
      else {
        fn_8302B540();
        iVar3 = fn_8302B618(param_1,uVar1);
        if (iVar3 != 0) {
          if (*(int *)(iVar3 + 0x4c) != 0) {
            *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + -1;
          }
          fn_82FFBD98(iVar3,1);
        }
      }
    } while (0 < (int)uVar8);
  }
  return;
}

