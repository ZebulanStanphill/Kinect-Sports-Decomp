extern unsigned int *auStack_220;
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82F691F0();
extern unsigned int lbl_82162C1C;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_1f6;
extern unsigned int uStack_204;
extern unsigned int uStack_208;
extern unsigned int uStack_230;


__int64 fn_82F3AE90(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  short sVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  unsigned int uStack_230;
  unsigned char auStack_220 [20];
  unsigned char **ppuStack_20c;
  unsigned int uStack_208;
  unsigned int uStack_204;
  unsigned char uStack_1f6;
  unsigned int uStack_154;
  unsigned int uStack_150;
  
  if (param_1[3] == 0) {
    lVar3 = -0x3ff2c94a;
  }
  else if (param_2 == (unsigned int *)0x0) {
    lVar3 = -0x7ff8ffa9;
  }
  else {
    *param_2 = 0;
    uVar1 = param_1[0x10];
    if (uVar1 < 0x1a) {
      *param_2 = 0x1a;
      lVar3 = -0x3ff2c94f;
    }
    else {
      piVar5 = param_1 + 10;
      uStack_230 = (unsigned int)(((unsigned __int64)(uStack_230) >> 16) & 0xFFFF);
      fn_82E57620(param_1 + 4,piVar5);
      fn_82E576A8(param_1 + 8,piVar5);
      lVar3 = fn_82E57738(&uStack_230,piVar5);
      if (-1 < lVar3) {
        sVar2 = (((unsigned __int64)(uStack_230) >> 0) & 0xFFFF);
        uStack_230 = 0;
        if (sVar2 != 0) {
          uStack_208 = 0;
          uStack_204 = 0;
          uStack_1f6 = 0;
          uStack_154 = 0;
          ppuStack_20c = &lbl_82162C1C;
          uStack_150 = 0;
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(auStack_220,0,0xdc);
        }
        *param_2 = uVar1 - param_1[0x10];
        uVar4 = (**(int (***)())(*param_1 + 0x2c))(param_1);
        if (uVar4 != *param_2) {
          lVar3 = -0x3ff2c566;
        }
      }
    }
  }
  return lVar3;
}

