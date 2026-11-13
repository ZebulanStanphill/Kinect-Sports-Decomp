extern unsigned int *auStack_3c;
extern int fn_82273C88();
extern int fn_8228E780();
extern int fn_8267B890();
extern int fn_8267BE38();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_40;


void fn_826837C8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned int uStack_40;
  unsigned int auStack_3c;
  
  if ((param_3 & 0xffffffff) == 0) {
    if (*param_1 != 0) {
      fn_8267BE38();
      *param_1 = 0;
    }
    param_1[2] = 0;
  }
  else {
    lVar2 = (param_3 + 3 & 0xffffffc) << 4;
    if (*param_1 == 0) {
      auStack_3c = 2;
      uVar1 = fn_8267B890(lbl_831E7E64,lVar2,&auStack_3c);
      *param_1 = uVar1;
    }
    else {
      uStack_40 = 2;
      lVar2 = fn_8267B890(lbl_831E7E64,lVar2,&uStack_40);
      uVar1 = 0;
      if (param_1[1] != 0) {
        lVar3 = 0;
        do {
          if (lVar3 + lVar2 != 0) {
            fn_8228E780(lVar3 + lVar2,lVar3 + (unsigned __int64)*param_1);
          }
          fn_82273C88(lVar3 + (unsigned __int64)*param_1);
          uVar1 = uVar1 + 1;
          lVar3 = lVar3 + 0x10;
        } while (uVar1 < param_1[1]);
      }
      fn_8267BE38(*param_1);
      *param_1 = (unsigned int)lVar2;
    }
    param_1[2] = (unsigned int)(param_3 + 3) & 0xfffffffc;
  }
  return;
}

