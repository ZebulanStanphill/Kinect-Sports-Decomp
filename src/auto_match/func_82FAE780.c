extern int fn_82FFF750();
extern int fn_830298E8();


unsigned __int64 fn_82FAE780(__int64 param_1)

{
  unsigned __int64 *puVar2;
  unsigned __int64 uVar1;
  
  puVar2 = (unsigned __int64 *)fn_830298E8(param_1 + 0xa0);
  if (puVar2 != (unsigned __int64 *)0x0) {
    *puVar2 = 0;
    puVar2 = (unsigned __int64 *)fn_830298E8(param_1 + 0xa0);
    if (puVar2 != (unsigned __int64 *)0x0) {
      *puVar2 = 0;
      uVar1 = fn_82FFF750(param_1);
      return uVar1;
    }
  }
  return 0x34;
}

