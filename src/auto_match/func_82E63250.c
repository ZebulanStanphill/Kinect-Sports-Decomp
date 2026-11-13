extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;


unsigned __int64
fn_82E63250(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned char *param_4,unsigned int param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  uVar3 = 0;
  if (param_5 != 0) {
    do {
      pbVar5 = (unsigned char *)&stack0x00000020;
      pbVar4 = param_4;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar4;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (pbVar5 != &stack0x00000030);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      param_4 = param_4 + 0x10;
    } while (uVar3 < param_5);
  }
  return 0;
}

