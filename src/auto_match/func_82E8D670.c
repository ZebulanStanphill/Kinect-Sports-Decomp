extern unsigned int stack0x0000001c;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;


void fn_82E8D670(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  
  uStack00000020 = param_2;
  puVar2 = (unsigned int *)&stack0x0000001c;
  uStack00000028 = param_3;
  uStack00000030 = param_4;
  puVar1 = (unsigned int *)(param_1 + 0x344);
  uStack00000038 = param_5;
  lVar3 = 7;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

