extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F6AC80();
extern int fn_82F86278();
extern int fn_82F864BC();
extern unsigned int uStack0000001c;


unsigned __int64 fn_82F86428(unsigned __int64 param_1,__int64 param_2)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned int uStack0000001c;
  
  uStack0000001c = (unsigned int)param_2;
  if (param_2 == 0) {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    uVar1 = 0xffffffffffffffff;
  }
  else {
    fn_82F6AC80(param_2);
    uVar3 = fn_82F86278(param_1,param_2);
    fn_82F864BC();
    uVar1 = (unsigned __int64)uVar3;
  }
  return uVar1;
}

