extern int fn_8268EC80();
extern int fn_8268EE18();
extern int fn_8268EF48();
extern int fn_8270AD88();
extern int fn_8270B030();


unsigned __int64 fn_8270B7F0(unsigned int *param_1,__int64 param_2,__int64 param_3,__int64 param_4,
                       unsigned __int64 param_5)

{
  unsigned int uVar1;
  int iVar4;
  unsigned __int64 uVar2;
  __int64 lVar3;
  char cVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  int iVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  
  if ((param_5 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[0x14]) {
    param_5 = (unsigned __int64)(unsigned int)param_1[0x14];
  }
  iVar4 = fn_8270B030(param_1 + 0x11,param_2);
  puVar7 = param_1 + 0x13;
  uVar2 = fn_8268EC80(puVar7,iVar4,param_2,param_3,param_4,param_5);
  if (*(char *)(param_1 + 6) == '\0') {
    return ((~uVar2 & 0xffffffff) >> 0x1f) + (unsigned __int64)(1 < uVar2) & 1;
  }
  iVar8 = (int)uVar2;
  if (iVar8 != 0) {
    lVar9 = ((unsigned __int64)*(unsigned int *)(iVar4 + 0x10) - (unsigned __int64)*(unsigned short *)(iVar4 + 0x1e)) -
            (-(unsigned __int64)
              ((unsigned __int64)*(unsigned int *)(iVar4 + 0x10) ==
              (unsigned __int64)*(unsigned int *)(iVar4 + 0xc) + (unsigned __int64)(unsigned int)param_1[2]) &
            (unsigned __int64)(unsigned int)param_1[2]);
    lVar3 = fn_8270AD88(param_1,iVar4);
    uVar1 = param_1[1];
    uVar6 = (unsigned __int64)uVar1;
    trapWord(6,uVar6,0);
    trapWord(6,uVar6,0);
    uVar2 = (__int64)
            (int)((((((param_2 - lVar9) + param_3 + param_5) - 1 & ~(param_5 - 1)) + uVar6) - 1 &
                  0xffffffff) / uVar6) * (__int64)(int)uVar1;
    uVar10 = (__int64)
             (int)((((((param_2 - lVar9) + param_4 + param_5) - 1 & ~(param_5 - 1)) + uVar6) - 1 &
                   0xffffffff) / uVar6) * (__int64)(int)uVar1;
    if (iVar8 != 1) {
      if (iVar8 == 3) {
        for (; (uVar10 & 0xffffffff) <= (uVar2 & 0xffffffff); uVar10 = uVar6 + uVar10) {
        }
        cVar5 = (**(int (***)())(*(int *)*param_1 + 0xc))
                          ((int *)*param_1,lVar9,lVar3,uVar10,
                           1 << (*(unsigned short *)(iVar4 + 0x1c) & 0x3f));
        if (cVar5 != '\0') {
          param_1[0x12] = ((int)uVar10 - (int)lVar3) + param_1[0x12];
          fn_8268EE18(puVar7,iVar4,uVar10 - lVar3);
          fn_8268EC80(puVar7,iVar4,param_2,param_3,param_4,param_5);
          return 1;
        }
      }
      return 0;
    }
    if ((uVar10 & 0xffffffff) < (uVar2 & 0xffffffff)) {
      fn_8268EF48(puVar7,iVar4,uVar10 + lVar9);
      cVar5 = (**(int (***)())(*(int *)*param_1 + 0xc))
                        ((int *)*param_1,lVar9,lVar3,uVar10,1 << (*(unsigned short *)(iVar4 + 0x1c) & 0x3f))
      ;
      if (cVar5 == '\0') {
        fn_8268EE18(puVar7,iVar4,lVar3 - uVar10);
      }
      else {
        param_1[0x12] = ((int)uVar10 - (int)lVar3) + param_1[0x12];
      }
    }
  }
  return 1;
}

