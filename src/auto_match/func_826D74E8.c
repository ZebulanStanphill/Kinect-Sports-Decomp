typedef unsigned char bool;
extern int fn_8267C8D8();
extern int fn_8267CF60();
extern int fn_8267D9C0();


bool fn_826D74E8(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  
  lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x80) + 8;
  fn_8267C8D8(lVar2);
  while (((*(unsigned int *)(param_1 + 0x7c) & 0xf) < 3 && ((*(unsigned int *)(param_1 + 0x7c) & param_2) == 0))) {
    fn_8267CF60((unsigned __int64)*(unsigned int *)(param_1 + 0x80) + 0x1c,
                 (unsigned __int64)*(unsigned int *)(param_1 + 0x80) + 8,0xffffffffffffffff);
  }
  uVar1 = *(unsigned int *)(param_1 + 0x7c);
  fn_8267D9C0(lVar2);
  return (uVar1 & param_2) != 0;
}

