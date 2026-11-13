extern int fn_82E2A8E8();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_821533D8;
extern unsigned int lbl_821533E8;
extern unsigned int lbl_82153828;
extern unsigned int lbl_82153838;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82E2CCC0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  
  pbVar6 = (unsigned char *)&stack0x00000020;
  pbVar5 = &lbl_82153828;
  do {
    bVar1 = *pbVar6;
    bVar2 = *pbVar5;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar6 = pbVar6 + 1;
    pbVar5 = pbVar5 + 1;
  } while (pbVar6 != &stack0x00000030);
  uVar3 = lbl_8202E618;
  uVar4 = lbl_8202E620;
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
    pbVar7 = (unsigned char *)&stack0x00000020;
    pbVar6 = (unsigned char *)&lbl_821533E8;
    pbVar5 = pbVar6;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar5;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar5 = pbVar5 + 1;
    } while (pbVar7 != &stack0x00000030);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
      pbVar7 = (unsigned char *)&stack0x00000020;
      pbVar6 = &lbl_821533D8;
      pbVar5 = pbVar6;
      do {
        bVar1 = *pbVar7;
        bVar2 = *pbVar5;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar7 != &stack0x00000030);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
        pbVar7 = (unsigned char *)&stack0x00000020;
        pbVar6 = (unsigned char *)&lbl_82153838;
        pbVar5 = pbVar6;
        do {
          bVar1 = *pbVar7;
          bVar2 = *pbVar5;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar7 = pbVar7 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar7 != &stack0x00000030);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
          return 0xffffffffc00d36b7;
        }
      }
    }
    uVar3 = *(unsigned __int64 *)pbVar6;
    uVar4 = *(unsigned __int64 *)(pbVar6 + 8);
  }
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  uVar3 = fn_82E2A8E8(param_1,uVar3,uVar4);
  return uVar3;
}

