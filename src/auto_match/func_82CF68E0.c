void fn_82CF68E0(int param_1,int param_2,unsigned int param_3)

{
  unsigned __int64 *puVar1;
  unsigned int uVar2;
  
  uVar2 = param_3 >> 3;
  if (param_3 < 8) {
    return;
  }
  puVar1 = (unsigned __int64 *)((uVar2 - 1) * 8 + param_1);
  do {
    *puVar1 = *(unsigned __int64 *)((param_2 - param_1) + (int)puVar1);
    puVar1 = puVar1 + -1;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}

