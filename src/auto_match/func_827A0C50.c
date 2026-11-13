typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern int fn_827A0BD0();
extern int fn_827A8770();
extern int fn_827A9328();
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a8;


__int64 fn_827A0C50(double param_1,double param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  unsigned int uVar3;
  __int64 lVar4;
  int iVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  int *apiStack_b0 [2];
  unsigned int uStack_a8;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  
  fn_827A0BD0();
  dVar8 = (double)(float)(param_1 -
                         (double)(*(float *)(param_3 + 0x3c) - *(float *)(param_3 + 0xf0)));
  dVar7 = (double)(float)(param_2 -
                         (double)(*(float *)(param_3 + 0x40) - *(float *)(param_3 + 0xf4)));
  uVar3 = fn_827A8770(param_3 + 0x24);
  fn_827A9328((double)(float)((double)uVar3 + dVar7),apiStack_b0,param_3 + 0x24);
  if (((apiStack_b0[0] == (int *)0x0) || ((unsigned int)apiStack_b0[0][1] <= uStack_a8)) ||
     (bVar2 = false, (int)uStack_a8 < 0)) {
    bVar2 = true;
  }
  if (!bVar2) {
    piVar1 = *(int **)(uStack_a8 * 4 + *apiStack_b0[0]);
    dVar7 = (double)(__int64)piVar1[3];
    if (dVar7 <= dVar8) {
      if (*piVar1 < 0) {
        uVar3 = (unsigned int)*(unsigned short *)(piVar1 + 5);
      }
      else {
        uVar3 = piVar1[5];
      }
      if (dVar8 <= (double)(float)((double)(__int64)(int)uVar3 + dVar7)) {
        dVar7 = (double)(float)(dVar8 - dVar7);
        iVar5 = 0;
        fn_82756F70(&uStack_90,piVar1);
        lVar4 = 0;
        while( true ) {
          if ((uStack_90 == 0) || (bVar2 = false, uStack_8c <= uStack_90)) {
            bVar2 = true;
          }
          if (bVar2) break;
          uVar3 = (unsigned int)*(unsigned short *)(uStack_90 + 2);
          if ((*(unsigned short *)(uStack_90 + 6) >> 6 & 1) != 0) {
            uVar3 = -uVar3;
          }
          iVar5 = uVar3 + iVar5;
          if (dVar7 < (double)(__int64)iVar5) break;
          lVar4 = (unsigned __int64)(*(unsigned short *)(uStack_90 + 4) >> 0xc) + lVar4;
          fn_827555D8(&uStack_90);
        }
        if (*piVar1 < 0) {
          uVar6 = (unsigned __int64)(unsigned int)piVar1[2] & 0xffffff;
          if (uVar6 == 0xffffff) {
            uVar6 = 0xffffffffffffffff;
          }
        }
        else {
          uVar6 = (unsigned __int64)(unsigned int)piVar1[2];
        }
        fn_82756488(&uStack_90);
        return uVar6 + lVar4;
      }
    }
  }
  return -1;
}

