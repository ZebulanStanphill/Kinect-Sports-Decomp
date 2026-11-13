extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F6AC80();
extern int fn_82F6BF90();
extern int fn_82F6C114();
extern unsigned int uStack00000014;


unsigned __int64 fn_82F6C060(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  int iVar4;
  unsigned int uStack00000014;
  
  uStack00000014 = (unsigned int)param_1;
  if ((param_1 == 0) || (((iVar4 = (int)param_3, iVar4 != 0 && (iVar4 != 1)) && (iVar4 != 2)))) {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    uVar1 = 0xffffffffffffffff;
  }
  else {
    fn_82F6AC80(param_1);
    uVar3 = fn_82F6BF90(param_1,param_2,param_3,param_4,param_5,param_6);
    fn_82F6C114();
    uVar1 = (unsigned __int64)uVar3;
  }
  return uVar1;
}

