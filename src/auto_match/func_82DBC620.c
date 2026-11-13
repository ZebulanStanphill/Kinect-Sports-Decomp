extern int fn_82CF69B8();
extern int fn_830819D8();


void fn_82DBC620(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  __int64 lVar3;
  
  lVar2 = *(unsigned short *)(param_1 + 1) + param_4;
  uVar1 = *(unsigned short *)(param_1 + 1) - param_2;
  if ((int)(*(unsigned short *)((int)param_1 + 6) & 0x3fff) < (int)lVar2) {
    lVar3 = ((unsigned __int64)*(unsigned short *)((int)param_1 + 6) & 0x3fff) << 1;
    if ((int)lVar3 <= (int)lVar2) {
      lVar3 = lVar2;
    }
    fn_830819D8(param_1,lVar3,0x30);
  }
  lVar3 = (param_2 + (param_2 & 0x7fffffff) * 2 & 0xfffffff) * 0x10;
  fn_82CF69B8((param_2 + param_4 + (param_2 + param_4 & 0x7fffffff) * 2 & 0xfffffff) * 0x10 +
               (unsigned __int64)*param_1,(unsigned __int64)*param_1 + lVar3,
               (uVar1 + (uVar1 & 0x7fffffff) * 2 & 0xfffffff) << 4);
  fn_82CF69B8(lVar3 + (unsigned __int64)*param_1,param_3,
               (param_4 + (param_4 & 0x7fffffff) * 2 & 0xfffffff) << 4);
  *(short *)(param_1 + 1) = (short)lVar2;
  return;
}

