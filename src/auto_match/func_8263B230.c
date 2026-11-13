extern unsigned int *auStack_68;
extern int fn_8263AB38();
extern unsigned int lbl_821CBFB1;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


__int64 fn_8263B230(unsigned __int64 param_1,int param_2,int param_3,int param_4,int param_5,int param_6
                      ,int param_7,unsigned int *param_8)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *in_stack_00000054;
  int *in_stack_0000005c;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int auStack_68 [26];
  
  auStack_68[2] = 0;
  auStack_68[3] = 0;
  auStack_68[4] = 0;
  bVar1 = (&lbl_821CBFB1)[param_7 * 2];
  fn_8263AB38(param_7,&uStack_70,&uStack_6c);
  uVar2 = -(unsigned int)(0x20U - LZCOUNT(param_3 + -1) < 0x20U - LZCOUNT(param_2 + -1)) & 1;
  if ((param_1 & 0xffffffff) < 3) {
    auStack_68[uVar2 + 2] = 0x10 >> ((unsigned int)param_1 & 0x3f);
  }
  else {
    uVar3 = uVar2 * 4 ^ 4;
    uVar2 = *(unsigned int *)((int)auStack_68 + uVar3) >> ((unsigned int)param_1 - 2 & 0x3f);
    *(unsigned int *)((int)auStack_68 + uVar3 + 8) = uVar2;
    if (uVar2 < 4) {
      param_1 = (0x20 - LZCOUNT(param_4 + -1)) - param_1;
      if ((param_1 & 0xffffffff) < 2) {
        param_1 = 1;
      }
      auStack_68[4] = (unsigned int)((param_1 & 0xffffffff) << 2);
    }
  }
  trapWord(6,(unsigned __int64)uStack_70,0);
  *param_8 = auStack_68[2] / uStack_70;
  *in_stack_00000054 = auStack_68[3] / uStack_6c;
  *in_stack_0000005c = auStack_68[4];
  trapWord(6,(unsigned __int64)uStack_6c,0);
  return (((__int64)(int)(uStack_70 * bVar1) * (__int64)(int)auStack_68[2] & 0xffffffffU) >> 3) +
         (__int64)(int)auStack_68[3] * (__int64)param_5 +
         (__int64)(int)auStack_68[4] * (__int64)param_6;
}

