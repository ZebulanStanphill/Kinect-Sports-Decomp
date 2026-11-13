extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


unsigned int fn_82FACF20(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  
  iVar1 = param_1[2];
  iVar4 = fn_82FA5060(lbl_831BC768,(param_2 + iVar1) * 2);
  uVar3 = 0;
  if (iVar4 != 0) {
    iVar2 = param_1[1] - *param_1 >> 1;
    lVar6 = (__int64)iVar2;
    if (*param_1 != 0) {
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          *(unsigned short *)(iVar5 + iVar4) = *(unsigned short *)(iVar5 + *param_1);
          iVar5 = iVar5 + 2;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    *param_1 = iVar4;
    param_1[2] = param_2 + iVar1;
    uVar3 = 1;
    param_1[1] = iVar2 * 2 + iVar4;
  }
  return uVar3;
}

