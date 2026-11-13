extern unsigned int *auStack_30;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825200A8();
extern int fn_825200F0();
extern int fn_827D6968();
extern unsigned int lbl_83265A24;


__int64 fn_8257D9B8(unsigned __int64 param_1,unsigned int *param_2)

{
  char cVar3;
  unsigned __int64 uVar1;
  int iVar2;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned char auStack_30 [8];
  
  if ((param_2 != (unsigned int *)0x0) &&
     (uVar5 = (unsigned __int64)*param_2, uVar5 != (uVar5 - 1) + (unsigned __int64)(uVar5 == 0))) {
    fn_825200F0(auStack_30);
    cVar3 = fn_827D6968(lbl_83265A24,auStack_30,0xffffffffffffffff);
    if (cVar3 != '\0') {
      uVar1 = fn_8251F720(param_2,0);
      uVar5 = uVar1;
      if (uVar1 != 0) {
        lVar4 = 0;
        do {
          iVar2 = fn_825200A8(param_1);
          if (iVar2 != 0) goto code_r0x8257da60;
          lVar4 = lVar4 + 1;
          uVar1 = -(unsigned __int64)(*(int *)((int)uVar1 + 4) != 0) & uVar1 + 4;
        } while ((uVar1 & 0xffffffff) != 0);
      }
      lVar4 = -1;
code_r0x8257da60:
      lVar4 = (lVar4 + 1) - (lVar4 + (unsigned __int64)(lVar4 + 1 == 0));
      if ((uVar5 & 0xffffffff) == 0) {
        return lVar4;
      }
      fn_8251FA58(uVar5);
      return lVar4;
    }
  }
  return 0;
}

