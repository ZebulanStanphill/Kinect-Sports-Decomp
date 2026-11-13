extern int fn_8267C8D8();
extern int fn_8267CB10();
extern int fn_8267D9C0();


void fn_826D6CF0(int param_1,unsigned int param_2,unsigned int param_3)

{
  __int64 lVar1;
  
  lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x84) + 8;
  fn_8267C8D8(lVar1);
  *(unsigned int *)(param_1 + 0x78) = param_2;
  *(unsigned int *)(param_1 + 0x74) = param_3;
  fn_8267CB10((unsigned __int64)*(unsigned int *)(param_1 + 0x84) + 0x1c);
  fn_8267D9C0(lVar1);
  return;
}

