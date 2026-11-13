typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_2c;
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_826BCE08();
extern int fn_826D9828();
extern unsigned int iStack_24;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_826DB430(unsigned __int64 param_1,unsigned char *param_2,int *param_3,char param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  bool bVar5;
  unsigned char *pbVar7;
  unsigned __int64 uVar6;
  unsigned char bVar8;
  char in_RESERVE;
  unsigned char bVar9;
  double dVar10;
  unsigned char *pbStack_30;
  unsigned int auStack_2c [2];
  int iStack_24;
  
  if ((param_2 != (unsigned char *)0x0) && (bVar8 = *param_2, bVar8 != 0)) {
    bVar9 = (param_4 == '\0') << 1;
    if (param_4 == '\0') {
LAB_826db500:
      pbStack_30 = (unsigned char *)fn_8268C510(auStack_2c,param_2);
      uVar2 = fn_826D9828(param_1,&pbStack_30,param_3);
      lVar3 = ((unsigned __int64)auStack_2c[0] & 0xfffffffc) + 4;
      do {
        puVar4 = (unsigned int *)lVar3;
        uVar6 = (unsigned __int64)*puVar4;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar6 - 1,0,lVar3);
          *puVar4 = uVar1;
          bVar9 = 2;
        }
      } while (!(bool)(bVar9 >> 1 & 1));
      if (uVar6 != 1) {
        return uVar2;
      }
      fn_8267BE38();
      return uVar2;
    }
    bVar5 = false;
    pbVar7 = param_2;
    do {
      if ((bVar8 < 0x30) || (0x39 < bVar8)) {
        if ((((bVar8 != 0x2b) && (bVar8 != 0x2d)) || (bVar9 = !bVar5 << 1, bVar5)) &&
           ((bVar8 != 0x20 && (bVar8 != 9)))) goto LAB_826db500;
      }
      else {
        bVar5 = true;
      }
      pbVar7 = pbVar7 + 1;
      bVar8 = *pbVar7;
      bVar9 = (bVar8 == 0) << 1;
    } while (bVar8 != 0);
    pbStack_30 = (unsigned char *)0x0;
    dVar10 = (double)fn_826BCE08(param_2,&pbStack_30);
    iStack_24 = (int)(__int64)dVar10;
    if ((pbStack_30 != param_2) && (*pbStack_30 == 0)) {
      *param_3 = iStack_24 + -1;
      return 1;
    }
  }
  return 0;
}

