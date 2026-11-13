typedef unsigned char bool;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F68CC0();


unsigned __int64 fn_828FA548(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned __int64 uVar12;
  
  uVar2 = *param_1;
  uVar10 = (unsigned __int64)uVar2;
  uVar12 = 0;
  uVar6 = 0;
  uVar8 = (unsigned __int64)(uVar2 >> 1);
  if (uVar10 == 0) {
LAB_828fa5b8:
    if (uVar10 == (~uVar10 + 1 & uVar10)) {
      uVar6 = ((unsigned __int64)uVar2 & 0x7fffffff) << 1;
      if (uVar10 == 0) {
        uVar6 = 1;
      }
      lVar5 = fn_8265C940((uVar6 & 0x3fffffff) << 2,0x24810000);
      if (lVar5 != 0) {
        fn_82F68CC0(lVar5,param_1[2],*param_1 << 2);
        fn_8265C990(param_1[2],0x24810000);
        param_1[2] = (unsigned int)lVar5;
        uVar6 = ((unsigned __int64)*param_1 & 0x7fffffff) << 1;
        if (*param_1 == 0) {
          uVar6 = 1;
        }
        lVar5 = fn_8265C940((uVar6 & 0x3fffffff) << 2,0x24810000);
        if (lVar5 != 0) {
          fn_82F68CC0(lVar5,param_1[1],*param_1 << 2);
          fn_8265C990(param_1[1],0x24810000);
          param_1[1] = (unsigned int)lVar5;
          goto LAB_828fa66c;
        }
      }
      uVar12 = 0xffffffff8007000e;
      goto LAB_828fa6dc;
    }
LAB_828fa66c:
    uVar2 = *param_1;
    if (uVar8 < uVar2) {
      lVar5 = uVar2 - uVar8;
      iVar11 = uVar2 << 2;
      do {
        *(unsigned int *)(param_1[1] + iVar11) = ((unsigned int *)(param_1[1] + iVar11))[-1];
        puVar9 = (unsigned int *)(iVar11 + param_1[2]);
        iVar11 = iVar11 + -4;
        *puVar9 = puVar9[-1];
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    iVar11 = (int)(uVar8 << 2);
    *(unsigned int *)(param_1[1] + iVar11) = param_2;
    *(unsigned int *)(param_1[2] + iVar11) = 1;
    *param_1 = *param_1 + 1;
  }
  else {
    uVar7 = uVar10;
    do {
      uVar3 = *(unsigned int *)((int)(uVar8 << 2) + param_1[1]);
      if (uVar3 < param_2) {
        uVar6 = uVar8 + 1;
        uVar8 = uVar7;
      }
      else if (uVar3 <= param_2) break;
      bVar1 = uVar6 < uVar8;
      uVar4 = (uVar8 + uVar6 & 0xffffffff) >> 1;
      uVar7 = uVar8;
      uVar8 = uVar4;
    } while (bVar1);
    if (uVar7 <= uVar6) goto LAB_828fa5b8;
  }
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = (int)uVar8;
  }
LAB_828fa6dc:
  fn_8265C990(0,0x24810000);
  return uVar12;
}

