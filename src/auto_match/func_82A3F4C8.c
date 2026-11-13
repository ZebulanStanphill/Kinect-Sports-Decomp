extern unsigned int *auStack_50;
extern int fn_82F691F0();


unsigned __int64 fn_82A3F4C8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned char *pbVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar6;
  unsigned __int64 uVar5;
  short asStack_80 [24];
  unsigned short auStack_50 [17];
  short sStack_2e;
  
  uVar6 = 1;
  do {
    uVar4 = uVar6 + 1 & 0xffff;
    asStack_80[uVar6] = 0;
    uVar6 = uVar4;
  } while (uVar4 < 0x11);
  uVar6 = 0;
  do {
    pbVar1 = (unsigned char *)(uVar6 + param_2);
    uVar6 = uVar6 + 1 & 0xffff;
    asStack_80[*pbVar1] = asStack_80[*pbVar1] + 1;
  } while (uVar6 < 8);
  auStack_50[1] = 0;
  uVar6 = 1;
  do {
    uVar4 = uVar6 + 1 & 0xffff;
    auStack_50[uVar6 + 1] = (asStack_80[uVar6] << (0x10 - uVar6 & 0x3f)) + auStack_50[uVar6];
    uVar6 = uVar4;
  } while (uVar4 < 0x11);
  if (sStack_2e != 0) {
    return 0;
  }
  uVar5 = 1;
  do {
    iVar2 = (int)uVar5;
    iVar3 = (int)(uVar5 << 1);
    uVar5 = uVar5 + 1 & 0xffff;
    *(short *)((int)asStack_80 + iVar3) = (short)(1 << (7U - iVar2 & 0x3f));
    *(unsigned short *)((int)auStack_50 + iVar3) = *(unsigned short *)((int)auStack_50 + iVar3) >> 9;
  } while (uVar5 < 8);
  for (; uVar5 < 0x11; uVar5 = uVar5 + 1 & 0xffff) {
    *(short *)((int)asStack_80 + (int)(uVar5 << 1)) = (short)(1 << (0x10U - (int)uVar5 & 0x3f));
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_3,0,0x80);
}

