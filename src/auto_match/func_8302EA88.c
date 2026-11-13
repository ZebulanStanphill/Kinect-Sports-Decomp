extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_83032BB0();
extern int fn_83032BE0();
extern int fn_83032C58();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_8302EA88(unsigned int *param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  
  uVar3 = param_2 + (unsigned __int64)param_1[2];
  uVar2 = fn_82FA5060(lbl_831BC768,(uVar3 + (uVar3 & 0x3fffffff) * 4 & 0x3fffffff) << 2);
  if ((uVar2 & 0xffffffff) != 0) {
    uVar1 = (int)(param_1[1] - *param_1) / 0x14;
    if (*param_1 != 0) {
      if (uVar1 != 0) {
        lVar7 = 0;
        lVar5 = (__int64)(int)uVar1;
        uVar6 = uVar2;
        do {
          if ((uVar6 & 0xffffffff) != 0) {
            fn_83032BB0(uVar6);
          }
          fn_83032C58(uVar6,lVar7 + (unsigned __int64)*param_1);
          fn_83032BE0(lVar7 + (unsigned __int64)*param_1);
          lVar5 = lVar5 + -1;
          lVar7 = lVar7 + 0x14;
          uVar6 = uVar6 + 0x14;
        } while (lVar5 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    uVar4 = (unsigned int)uVar2;
    *param_1 = uVar4;
    param_1[2] = (unsigned int)uVar3;
    uVar2 = 1;
    param_1[1] = (int)(((__int64)(int)uVar1 + ((unsigned __int64)uVar1 & 0x3fffffff) * 4 & 0xffffffff) <<
                      2) + uVar4;
  }
  return uVar2;
}

