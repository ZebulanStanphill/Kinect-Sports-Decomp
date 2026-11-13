extern int fn_8265C990();
extern int fn_8291AF98();


__int64 fn_8291C018(int param_1)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  lVar2 = uVar1 - 1;
  *(int *)(param_1 + 4) = (int)lVar2;
  if ((unsigned int)uVar1 == 1) {
    fn_8291AF98();
    fn_8265C990(param_1,0x24810000);
  }
  return lVar2;
}

