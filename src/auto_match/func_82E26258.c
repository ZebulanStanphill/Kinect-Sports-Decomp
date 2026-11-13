extern int fn_82E260A8();
extern int fn_82E261C8();
extern unsigned int lbl_83187524;


unsigned __int64 fn_82E26258(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  
  uVar7 = 0;
  if ((((param_2 & 0xffffffff) != 0) && (param_3 != 0)) && ((param_1 & 0xffffffff) != 0)) {
    lVar2 = fn_82E260A8(param_1,0);
    param_4 = -(unsigned int)(lVar2 == 0) & param_4;
    iVar3 = fn_82E261C8(param_1);
    if (iVar3 == 0) {
      puVar4 = &lbl_83187524;
      lVar2 = 0x39;
      do {
        if ((param_1 & 0xffffffff) == (unsigned __int64)puVar4[-5]) {
          uVar1 = *puVar4;
          uVar6 = (unsigned __int64)uVar1;
          trapWord(6,uVar6,0);
          lVar5 = param_2 - (__int64)(int)((param_2 & 0xffffffff) / uVar6) * (__int64)(int)uVar1;
          uVar7 = param_2;
          if (lVar5 != 0) {
            uVar7 = (uVar6 - lVar5) + param_2;
          }
          uVar6 = ((unsigned __int64)uVar1 & 0x1fffffff) << 3;
          uVar7 = ((__int64)(int)puVar4[-1] * (__int64)(int)uVar7 & 0xffffffffU) / uVar6;
          trapWord(6,uVar6,0);
          if ((puVar4[-3] == 0) || (puVar4[-3] == 3)) {
            uVar7 = uVar7 + 3 & 0xfffffffc;
          }
          if (param_4 != 0) {
            uVar7 = -uVar7;
          }
        }
        puVar4 = puVar4 + 9;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      return uVar7;
    }
  }
  return 0;
}

