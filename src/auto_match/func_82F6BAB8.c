extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F6AC80();
extern int fn_82F6B890();
extern int fn_82F6BB5C();
extern unsigned int uStack00000014;


unsigned __int64 fn_82F6BAB8(__int64 param_1)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned int uStack00000014;
  
  uStack00000014 = (unsigned int)param_1;
  if (param_1 == 0) {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    uVar1 = 0xffffffffffffffff;
  }
  else {
    fn_82F6AC80(param_1);
    uVar3 = fn_82F6B890(param_1);
    fn_82F6BB5C();
    uVar1 = (unsigned __int64)uVar3;
  }
  return uVar1;
}

