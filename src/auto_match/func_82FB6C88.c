extern int fn_82F68CC0();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_82FB6C88(unsigned int *param_1,__int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int uVar5;
  __int64 lVar6;
  
  uVar2 = param_1[2];
  uVar3 = fn_82FA5060(lbl_831BC768,(param_2 + (unsigned __int64)uVar2) * 0x34);
  if ((uVar3 & 0xffffffff) != 0) {
    iVar1 = (int)(param_1[1] - *param_1) / 0x34;
    lVar4 = (__int64)iVar1;
    if (*param_1 != 0) {
      if (iVar1 != 0) {
        lVar6 = 0;
        do {
          fn_82F68CC0(lVar6 + uVar3,lVar6 + (unsigned __int64)*param_1,0x34);
          lVar4 = lVar4 + -1;
          lVar6 = lVar6 + 0x34;
        } while (lVar4 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    uVar5 = (unsigned int)uVar3;
    *param_1 = uVar5;
    param_1[2] = (unsigned int)(param_2 + (unsigned __int64)uVar2);
    uVar3 = 1;
    param_1[1] = iVar1 * 0x34 + uVar5;
  }
  return uVar3;
}

