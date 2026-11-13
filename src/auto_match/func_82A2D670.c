extern unsigned int *auStack_50;
extern unsigned int *auStack_5c;
extern int fn_82A2B9A0();
extern int fn_82A2C990();
extern int fn_82A2CF08();
extern int fn_82A2D260();
extern int fn_82F68CC0();
extern unsigned int uStack_60;


__int64 fn_82A2D670(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int uStack_60;
  unsigned char auStack_5c [12];
  unsigned char auStack_50 [80];
  
  uVar3 = (unsigned __int64)*(unsigned char *)((int)param_3 + 7);
  uVar7 = (unsigned __int64)*param_3;
  uVar2 = uVar3 & 3;
  lVar5 = (param_2 & 0xfffff) * 0x1000 + (unsigned __int64)*(unsigned int *)(param_1 + 0x34);
  if ((*(unsigned char *)((int)param_3 + 7) & 3) == 0) {
    lVar6 = *(unsigned int *)(param_1 + 0xac) + uVar7;
  }
  else {
    lVar6 = fn_82A2C990(param_1,uVar7,uVar2 - 1);
  }
  if ((uVar3 & 0x10) != 0) {
    XeCryptSha(lVar5,0x1000,0,0,0,0,auStack_50,0x14);
    if (uVar2 == (unsigned __int64)*(unsigned char *)(param_1 + 0xca) + 1) {
      fn_82F68CC0(param_1 + 0xb0,auStack_50,0x14);
    }
    else {
      fn_82A2B9A0(param_1,uVar7,(*(unsigned char *)((int)param_3 + 7) & 3) + 1,&uStack_60,auStack_5c);
      trapWord(6,(unsigned __int64)*(unsigned int *)("XLNI_DET_MEDIA" + (int)(uVar2 << 2) + 0xc),0);
      lVar8 = ((unsigned __int64)uStack_60 & 0xfffff) * 0x1000 + (unsigned __int64)*(unsigned int *)(param_1 + 0x34);
      fn_82F68CC0((((unsigned __int64)*param_3 /
                    (unsigned __int64)*(unsigned int *)("XLNI_DET_MEDIA" + (int)(uVar2 << 2) + 0xc)) % 0xaa) * 0x18
                   + lVar8,auStack_50,0x14);
      uVar4 = (int)lVar8 - *(int *)(param_1 + 0x34);
      iVar1 = (((int)uVar4 >> 0xc) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 0xfff) != 0)) * 8 +
              *(int *)(param_1 + 0x30);
      *(char *)(iVar1 + 4) = *(char *)(iVar1 + 4) + -1;
    }
    *(unsigned char *)((int)param_3 + 7) = *(unsigned char *)((int)param_3 + 7) & 0xef;
  }
  lVar5 = fn_82A2CF08(param_1,lVar5,0x1000,
                            ((((unsigned __int64)(*(unsigned char *)((int)param_3 + 7) >> 5) & 1) + lVar6) * 0x1000
                            & 0xffffffff000) + *(__int64 *)(param_1 + 0x20));
  if (lVar5 < 0) {
    fn_82A2D260(param_1,lVar5);
  }
  *(unsigned char *)((int)param_3 + 7) = *(unsigned char *)((int)param_3 + 7) & 0xbf;
  return lVar5;
}

