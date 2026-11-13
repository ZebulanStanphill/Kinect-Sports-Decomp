extern int fn_827664B0();
extern int fn_827668B8();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64 fn_827B08A0(__int64 param_1,int param_2,__int64 param_3,int param_4)

{
  int iVar2;
  int iVar3;
  unsigned __int64 uVar1;
  int iVar4;
  int iVar5;
  unsigned char *pbVar6;
  __int64 lVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned int uVar10;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned char abStack_58 [16];
  unsigned char abStack_48 [8];
  
  iVar2 = fn_827664B0(param_1 + 0xc,param_2,&uStack_5c);
  iVar2 = iVar2 + param_2;
  iVar3 = fn_827664B0(param_3 + 0xc,param_4,&uStack_60);
  iVar3 = iVar3 + param_4;
  if (uStack_5c == uStack_60) {
    uVar10 = uStack_5c >> 1;
    while (uVar10 != 0) {
      uVar10 = uVar10 - 1;
      iVar4 = fn_827668B8(param_1 + 0xc,iVar2,abStack_48);
      iVar5 = fn_827668B8(param_3 + 0xc,iVar3,abStack_58);
      if (iVar4 != iVar5) goto LAB_827b08f4;
      pbVar8 = abStack_58;
      pbVar9 = abStack_48;
      lVar7 = 0;
      if (iVar4 != 0) {
        pbVar6 = pbVar9 + iVar4;
        do {
          lVar7 = (unsigned __int64)*pbVar9 - (unsigned __int64)*pbVar8;
          if (lVar7 != 0) break;
          pbVar9 = pbVar9 + 1;
          pbVar8 = pbVar8 + 1;
        } while (pbVar9 != pbVar6);
      }
      if ((int)lVar7 != 0) goto LAB_827b08f4;
      iVar2 = iVar4 + iVar2;
      iVar3 = iVar5 + iVar3;
    }
    uVar1 = 1;
  }
  else {
LAB_827b08f4:
    uVar1 = 0;
  }
  return uVar1;
}

