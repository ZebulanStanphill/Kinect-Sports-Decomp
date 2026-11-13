extern int fn_82F1A7E0();


__int64 fn_82F1A8D0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      __int64 param_5,__int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  int iVar6;
  __int64 lVar7;
  unsigned short *puVar8;
  unsigned __int64 uVar9;
  int iVar10;
  int iVar11;
  
  if ((int)param_7 == 0) {
    lVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2030);
    lVar3 = 0;
    param_6 = (param_2 + (param_2 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + param_6;
    param_5 = (param_2 + (param_2 & 0x7fffffff) * 2 & 0x7fffff) * 0x200 + param_5;
    lVar7 = 0;
    uVar9 = 6;
    do {
      iVar11 = (int)param_7;
      if (iVar11 < 1) {
        return lVar3;
      }
      iVar10 = (int)uVar9;
      uVar5 = uVar9 & ~(((param_7 & 0x7fffffff) << 1 | (param_7 & 0xffffffff) >> 0x1f) - 1);
      trapWord(6,uVar9,0);
      trapWord(6,uVar9,0);
      trapWord(5,uVar9 & ~(((param_7 & 0x7fffffff) << 1 | (param_7 & 0xffffffff) >> 0x1f) - 1),
               0xffff);
      trapWord(5,uVar5,0xffff);
      iVar6 = (unsigned int)(param_7 != (__int64)(iVar11 / iVar10) * (__int64)iVar10) + iVar11 / iVar10;
      iVar10 = 0;
      iVar11 = 0x3f;
      puVar4 = (unsigned int *)(iVar1 + 0xfc);
      do {
        if (iVar6 == 0) break;
        puVar8 = (unsigned short *)param_6;
        uVar5 = (unsigned __int64)(short)*puVar8;
        if ((short)*puVar8 < 5) break;
        uVar2 = *puVar4;
        uVar5 = (unsigned __int64)uVar2;
        if (((*(short *)(uVar2 * 2 + (int)param_5) != 0) && (7 < (int)uVar2)) &&
           (uVar5 = (unsigned __int64)uVar2 & 7, (int)uVar5 != 0)) {
          *(unsigned short *)(uVar2 * 2 + (int)param_5) = 0;
          lVar3 = lVar3 + 1;
          uVar5 = (unsigned __int64)*puVar8 - 2;
          iVar6 = iVar6 + -1;
          *puVar8 = (unsigned short)uVar5;
          param_7 = param_7 - 1;
          iVar10 = 1;
        }
        iVar11 = iVar11 + -1;
        puVar4 = puVar4 + -1;
      } while (2 < iVar11);
      if (iVar10 != 0) {
        fn_82F1A7E0(param_1,lVar7,param_2,param_3,param_5,iVar10,uVar5);
      }
      uVar9 = uVar9 - 1;
      param_6 = param_6 + 2;
      param_5 = param_5 + 0x100;
      lVar7 = lVar7 + 1;
    } while (0 < (__int64)uVar9);
  }
  return lVar3;
}

