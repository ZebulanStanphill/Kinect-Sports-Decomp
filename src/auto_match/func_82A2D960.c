extern int fn_82A2B900();
extern int fn_82A2C990();
extern int fn_82A2CE70();
extern int fn_82A2D260();
extern int fn_82A2D890();
extern unsigned int uStack_80;


__int64 fn_82A2D960(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned char *param_4,unsigned int *param_5,
                      unsigned int *param_6)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int uStack_80;
  unsigned int *apuStack_7c [3];
  unsigned char abStack_70 [112];
  
  lVar4 = fn_82A2D890(param_1,&uStack_80,apuStack_7c);
  if (-1 < (int)lVar4) {
    if ((param_3 == 0) || (3 < param_3)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (unsigned __int64)(*(unsigned int *)(param_4 + 0x14) >> 0x1e) & 1;
      uVar3 = *(unsigned int *)("XLNI_DET_MEDIA" + param_3 * 4 + 0xc);
      trapWord(6,(unsigned __int64)uVar3,0);
      param_2 = (__int64)(int)((param_2 & 0xffffffff) / (unsigned __int64)uVar3) * (__int64)(int)uVar3;
    }
    if (param_3 == 0) {
      lVar4 = *(unsigned int *)(param_1 + 0xac) + param_2;
    }
    else {
      lVar4 = fn_82A2C990(param_1,param_2,param_3 - 1);
    }
    lVar8 = ((unsigned __int64)uStack_80 & 0xfffff) * 0x1000 + (unsigned __int64)*(unsigned int *)(param_1 + 0x34);
    lVar4 = fn_82A2CE70(param_1,lVar8,0x1000,
                            ((lVar4 + uVar7) * 0x1000 & 0xffffffff000) +
                            *(__int64 *)(param_1 + 0x20));
    if (lVar4 < 0) {
      fn_82A2D260(param_1,lVar4);
    }
    else {
      if (param_4 != (unsigned char *)0x0) {
        XeCryptSha(lVar8,0x1000,0,0,0,0,abStack_70,0x14);
        pbVar6 = abStack_70;
        pbVar5 = param_4 + 0x14;
        do {
          bVar1 = *param_4;
          bVar2 = *pbVar6;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          param_4 = param_4 + 1;
          pbVar6 = pbVar6 + 1;
        } while (param_4 != pbVar5);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
          fn_82A2D260(param_1,0xffffffffc0000032);
          return -0x3fffffce;
        }
      }
      *param_5 = (int)lVar8;
      *param_6 = apuStack_7c[0];
      fn_82A2B900(param_1,uStack_80,1);
      *apuStack_7c[0] = (int)param_2;
      lVar4 = 0;
      *(unsigned char *)((int)apuStack_7c[0] + 7) =
           (unsigned char)(uVar7 << 5) | 0x80 | *(unsigned char *)((int)apuStack_7c[0] + 7) & 0xdc | (unsigned char)param_3 & 3
      ;
      *(unsigned char *)(apuStack_7c[0] + 1) = 1;
    }
  }
  return lVar4;
}

