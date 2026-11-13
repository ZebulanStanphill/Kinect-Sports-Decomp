extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;


void fn_82F59488(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  unsigned __int64 *puVar2;
  int iVar3;
  unsigned __int64 *puVar4;
  int iVar5;
  __int64 lVar6;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned __int64 uStack00000050;
  
  uStack00000020 = param_2;
  uStack00000030 = param_4;
  uStack00000040 = param_6;
  uStack00000050 = param_8;
  uStack00000048 = param_7;
  puVar2 = (unsigned __int64 *)(param_1 + -8);
  uStack00000028 = param_3;
  uStack00000038 = param_5;
  lVar6 = 8;
  puVar4 = (unsigned __int64 *)0x83262818;
  do {
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar3 = 0;
  do {
    iVar5 = 0;
    lVar6 = 3;
    do {
      iVar1 = (iVar3 + iVar5) * 4;
      iVar5 = iVar5 + 1;
      *(unsigned int *)(iVar1 + param_1) = *(unsigned int *)((int)&stack0x00000020 + iVar1);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0xc);
  return;
}

