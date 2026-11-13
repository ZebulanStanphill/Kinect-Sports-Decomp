extern int fn_8265C9E0();
extern int fn_8265CA60();
extern int fn_82826B48();
extern int fn_8282CF00();
extern int fn_8282D1C0();
extern int fn_8282D3A8();
extern int fn_82831478();
extern int fn_82831600();
extern int fn_828316A0();


unsigned __int64 fn_8282D418(int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int *puVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  int iVar11;
  unsigned __int64 uVar12;
  
  fn_8282D3A8();
  iVar6 = fn_8282D1C0(param_2,param_1);
  if (iVar6 == 0) {
    if (*(int *)(*param_1 + 0x130) == 1) {
      fn_8282CF00();
      uVar3 = 0;
      *param_1 = 0;
    }
    else {
      uVar4 = fn_8265C9E0(0xc);
      if ((uVar4 & 0xffffffff) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = fn_82831478(uVar4,param_1,*param_1);
      }
      param_1[1] = iVar6;
      puVar10 = (unsigned int *)(param_1 + 2);
      fn_82826B48(*param_1,puVar10);
      lVar5 = -1;
      uVar1 = param_1[2];
      uVar12 = (unsigned __int64)uVar1;
      uVar4 = ((unsigned __int64)uVar1 & 0xfffffff) << 4;
      if (0xfffffff < uVar12) {
        uVar4 = 0xffffffffffffffff;
      }
      if ((uVar4 & 0xffffffff) < 0xfffffffc) {
        lVar5 = uVar4 + 4;
      }
      puVar7 = (unsigned int *)fn_8265CA60(lVar5);
      if (puVar7 == (unsigned int *)0x0) {
        puVar9 = (unsigned int *)0x0;
      }
      else {
        puVar9 = puVar7 + 1;
        *puVar7 = uVar1;
        puVar7 = puVar9;
        while (uVar12 = uVar12 - 1, -1 < (__int64)uVar12) {
          fn_82831600(puVar7);
          puVar7 = puVar7 + 4;
        }
      }
      uVar4 = 1;
      param_1[3] = (int)puVar9;
      iVar6 = *(int *)(*param_1 + 0xac);
      iVar2 = **(int **)(*param_1 + 300);
      if (*puVar10 != 0) {
        lVar5 = 0x10;
        iVar11 = 4;
        do {
          lVar8 = 0;
          for (puVar7 = *(unsigned int **)(*(int *)(*param_1 + 300) + iVar11 + -4);
              (puVar7 != (unsigned int *)(iVar2 + iVar6 * 0x14) &&
              ((unsigned __int64)*puVar7 == (uVar4 & 0xffffffff))); puVar7 = puVar7 + 5) {
            lVar8 = lVar8 + 1;
          }
          fn_828316A0(lVar5 + (unsigned __int64)(unsigned int)param_1[3] + -0x10,param_1,uVar4,lVar8);
          uVar4 = uVar4 + 1;
          iVar11 = iVar11 + 4;
          lVar5 = lVar5 + 0x10;
        } while ((uVar4 & 0xffffffff) <= (unsigned __int64)*puVar10);
      }
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

