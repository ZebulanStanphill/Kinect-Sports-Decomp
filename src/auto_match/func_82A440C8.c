#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82A43F70();
extern int fn_82F6E8D4();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


unsigned __int64 fn_82A440C8(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  int *piVar11;
  
  puVar2 = (unsigned int *)(ZEXT48(&stack0x00000000) - 0xa0);
  *puVar2 = register0x0000000c;
  uVar8 = param_4;
  if ((param_4 & 0xffffffff) == 0) {
    uVar8 = 0x1337f001;
  }
  if (*(unsigned int **)(param_1 + 0x34) == (unsigned int *)0x0) {
    uVar3 = *(unsigned int *)(param_1 + 0x3c);
  }
  else {
    uVar3 = **(unsigned int **)(param_1 + 0x34);
  }
  uVar7 = ((unsigned __int64)uVar3 & 0x3fffffff) * -4 & 0xfffffff0;
  fn_82F6E8D4();
  lVar10 = (ZEXT48(&stack0x00000000) - 0xa0) + uVar7;
  *(unsigned int *)lVar10 = *puVar2;
  lVar10 = lVar10 + 0x50;
  if (lVar10 == 0) {
    uVar9 = 0xffffffff8007000e;
  }
  else {
    uVar9 = 0;
    uVar3 = 0;
    lVar5 = lVar10;
    while( true ) {
      if (*(unsigned int **)(param_1 + 0x34) == (unsigned int *)0x0) {
        uVar4 = *(unsigned int *)(param_1 + 0x3c);
      }
      else {
        uVar4 = **(unsigned int **)(param_1 + 0x34);
      }
      if (uVar4 <= uVar3) break;
      fVar1 = *(float *)(param_1 + 0x48);
      if ((*(unsigned int *)(param_1 + 0x38) & 0x10) != 0) {
        fVar1 = *(float *)(*(int *)(param_1 + 0x30) + 0x210) * fVar1;
      }
      uVar3 = uVar3 + 1;
      *(float *)lVar5 = *(float *)((param_3 - (int)lVar10) + (int)(float *)lVar5) * fVar1;
      lVar5 = lVar5 + 4;
    }
    piVar11 = *(int **)(param_1 + 0x20);
    while (piVar11 != (int *)0x0) {
      if (piVar11 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar11;
        piVar11 = (int *)piVar11[1];
      }
      fn_82A43F70(*(unsigned int *)(iVar6 + 8),param_2,lVar10,uVar8);
    }
    if ((param_4 & 0xffffffff) == 0) {
      piVar11 = *(int **)(*(int *)(param_1 + 0x30) + 0xb0);
      uVar9 = (**(int (***)())(*piVar11 + 0x48))(piVar11,uVar8);
    }
  }
  return uVar9;
}

