extern unsigned int *auStack_50;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A3F8D0();
extern int fn_82A3F9B8();
extern int fn_82A3FA30();
extern int fn_82F63CA0();
extern int fn_82F68CC0();


unsigned int * fn_82A3FC78(unsigned int *param_1,unsigned __int64 param_2,__int64 param_3)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  int iVar10;
  __int64 lVar9;
  unsigned int auStack_50 [20];
  
  puVar2 = (unsigned int *)0x0;
  auStack_50[0] = 0;
  uVar7 = param_3 + 8;
  lVar8 = (unsigned __int64)param_1[2] - 1;
  uVar6 = 0;
  if (-1 < lVar8) {
    do {
      iVar10 = (int)lVar8;
      iVar1 = iVar10 + (int)uVar6 >> 1;
      puVar5 = (unsigned int *)(iVar1 * 8 + *param_1);
      uVar4 = (unsigned __int64)(unsigned int)puVar5[1];
      if (uVar4 == (uVar7 & 0xffffffff)) {
        puVar2 = (unsigned int *)fn_82A3FA30(*puVar5,param_2,uVar7,auStack_50);
        break;
      }
      if ((uVar7 & 0xffffffff) < uVar4) {
        lVar8 = (__int64)iVar1 + -1;
      }
      else {
        uVar6 = (__int64)iVar1 + 1;
      }
      iVar10 = (int)lVar8;
    } while ((int)uVar6 <= iVar10);
    if ((int)uVar6 <= iVar10) goto LAB_82a3fe24;
  }
  lVar8 = fn_8265C940(0xc,0x24970000);
  if (lVar8 == 0) goto LAB_82a3fe24;
  iVar1 = fn_82A3F8D0(lVar8,param_2,uVar7);
  if (iVar1 < 0) {
LAB_82a3fe18:
    fn_8265C990(lVar8,0x24970000);
  }
  else {
    if ((unsigned __int64)param_1[2] < (unsigned __int64)param_1[1]) {
      lVar9 = (uVar6 & 0x1fffffff) * 8;
      lVar3 = lVar9 + (unsigned __int64)*param_1;
      fn_82F63CA0(lVar3 + 8,lVar3,(param_1[2] - uVar6 & 0x1fffffff) << 3);
      iVar1 = (int)lVar9;
      *(int *)(iVar1 + *param_1) = (int)lVar8;
      *(int *)(iVar1 + *param_1 + 4) = (int)uVar7;
    }
    else {
      lVar3 = fn_8265C940((param_1[1] + 0x10) * 8,0x24970000);
      if (lVar3 == 0) {
        fn_82A3F9B8(lVar8,param_2);
        goto LAB_82a3fe18;
      }
      lVar9 = (uVar6 & 0x1fffffff) * 8;
      param_1[1] = param_1[1] + 0x10;
      fn_82F68CC0(lVar3,*param_1,lVar9);
      fn_82F68CC0(lVar9 + lVar3 + 8,lVar9 + (unsigned __int64)*param_1,
                   (param_1[2] - uVar6 & 0x1fffffff) << 3);
      fn_8265C990(*param_1,0x24970000);
      *param_1 = (unsigned int)lVar3;
      *(int *)((int)lVar9 + (unsigned int)lVar3) = (int)lVar8;
      *(int *)((int)(lVar9 + lVar3) + 4) = (int)uVar7;
    }
    puVar2 = (unsigned int *)fn_82A3FA30(lVar8,param_2,uVar7,auStack_50);
    param_1[2] = param_1[2] + 1;
  }
LAB_82a3fe24:
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = auStack_50[0];
    puVar2 = puVar2 + 2;
  }
  return puVar2;
}

