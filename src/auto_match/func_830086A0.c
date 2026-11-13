extern int fn_82A1DDC0();
extern int fn_82F64CE0();
extern int fn_82FA5060();
extern int fn_83008488();
extern unsigned int lbl_831BC768;


void fn_830086A0(int param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  *(unsigned __int64 *)(param_1 + 0x20) = param_5;
  fn_83008488();
  *(unsigned int *)(param_1 + 0x1c) = param_3;
  *(unsigned int *)(param_1 + 0x18) = 0;
  if ((param_4 & 0xffffffff) != 0) {
    lVar1 = fn_82F64CE0(param_4);
    lVar1 = (lVar1 + 1U & 0x7fffffff) << 1;
    uVar2 = fn_82FA5060(lbl_831BC768,lVar1);
    *(int *)(param_1 + 0x18) = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
      fn_82A1DDC0(uVar2,param_4,lVar1);
    }
  }
  *(unsigned int *)(param_1 + 4) = param_2;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 8) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned char *)(param_1 + 0x14) = 2;
  *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_1 + 0x14) | 0x1000000;
  return;
}

