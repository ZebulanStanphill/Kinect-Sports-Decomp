typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


__int64 fn_8279C2A0(double param_1,int param_2,unsigned int param_3)

{
  int *piVar1;
  bool bVar2;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned int uVar6;
  unsigned __int64 uVar5;
  double dVar7;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  
  if (param_3 < *(unsigned int *)(param_2 + 0x28)) {
    piVar1 = *(int **)(param_3 * 4 + *(int *)(param_2 + 0x24));
    dVar7 = (double)((float)(param_1 - (double)(__int64)piVar1[3]) +
                    (float)*(unsigned int *)(param_2 + 0x4c));
    fn_82756F70(&uStack_90,piVar1);
    lVar3 = 0;
    uVar6 = 0;
    while( true ) {
      if ((uStack_90 == 0) || (bVar2 = false, uStack_8c <= uStack_90)) {
        bVar2 = true;
      }
      if (bVar2) goto LAB_8279c3f4;
      if ((*(unsigned short *)(uStack_90 + 6) >> 6 & 1) == 0) {
        uVar4 = (unsigned int)*(unsigned short *)(uStack_90 + 2);
      }
      else {
        uVar4 = -(unsigned int)*(unsigned short *)(uStack_90 + 2);
      }
      if (dVar7 < (double)(uVar4 + uVar6)) break;
      if ((*(unsigned short *)(uStack_90 + 6) >> 8 & 1) == 0) {
        lVar3 = (unsigned __int64)(*(unsigned short *)(uStack_90 + 4) >> 0xc) + lVar3;
      }
      fn_827555D8(&uStack_90);
      uVar6 = uVar4 + uVar6;
    }
    if ((float)(uVar4 >> 1) < (float)(dVar7 - (double)(__int64)(int)uVar6)) {
      lVar3 = (unsigned __int64)(*(unsigned short *)(uStack_90 + 4) >> 0xc) + lVar3;
    }
LAB_8279c3f4:
    if (*piVar1 < 0) {
      uVar5 = (unsigned __int64)(unsigned int)piVar1[2] & 0xffffff;
      if (uVar5 == 0xffffff) {
        uVar5 = 0xffffffffffffffff;
      }
    }
    else {
      uVar5 = (unsigned __int64)(unsigned int)piVar1[2];
    }
    fn_82756488(&uStack_90);
    lVar3 = uVar5 + lVar3;
  }
  else {
    lVar3 = -1;
  }
  return lVar3;
}

