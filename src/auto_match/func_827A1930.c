typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern int fn_827912D8();
extern int fn_827A0BD0();
extern int fn_827A9228();
extern unsigned int lbl_820885C8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_b8;


unsigned __int64 fn_827A1930(int param_1,float *param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  unsigned __int64 uVar5;
  bool bVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  int iVar10;
  unsigned __int64 uVar11;
  int *apiStack_c0 [2];
  unsigned int uStack_b8;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  
  if ((param_2 == (float *)0x0) ||
     (uVar5 = fn_827912D8(*(unsigned int *)(param_1 + 8)),
     (uVar5 & 0xffffffff) <= (param_3 & 0xffffffff))) {
    uVar9 = 0;
  }
  else {
    fn_827A0BD0(param_1);
    fn_827A9228(apiStack_c0,param_1 + 0x24,param_3);
    uVar9 = 0;
    if ((apiStack_c0[0] == (int *)0x0) ||
       (((unsigned int)apiStack_c0[0][1] <= uStack_b8 || (bVar6 = false, (int)uStack_b8 < 0)))) {
      bVar6 = true;
    }
    if (!bVar6) {
      piVar2 = *(int **)(uStack_b8 * 4 + *apiStack_c0[0]);
      uVar5 = (unsigned __int64)(unsigned int)piVar2[2];
      if ((*piVar2 < 0) && (uVar5 = (unsigned __int64)(unsigned int)piVar2[2] & 0xffffff, uVar5 == 0xffffff)) {
        uVar5 = 0xffffffffffffffff;
      }
      fn_82756F70(&uStack_a0,piVar2);
      iVar10 = 0;
      uVar11 = 0;
      while( true ) {
        fVar4 = lbl_821AAD20;
        if ((uStack_a0 == 0) || (bVar6 = false, uStack_9c <= uStack_a0)) {
          bVar6 = true;
        }
        if (bVar6) goto LAB_827a1b40;
        if ((uVar11 & 0xffffffff) == (param_3 - uVar5 & 0xffffffff)) break;
        uVar7 = (unsigned int)*(unsigned short *)(uStack_a0 + 2);
        if ((*(unsigned short *)(uStack_a0 + 6) >> 6 & 1) != 0) {
          uVar7 = -uVar7;
        }
        iVar10 = uVar7 + iVar10;
        fn_827555D8(&uStack_a0);
        uVar11 = uVar11 + 1;
      }
      if ((*(unsigned char *)(uStack_a0 + 6) & 1) == 0) {
        uVar9 = 1;
        *param_2 = lbl_821AAD20;
        param_2[1] = fVar4;
        param_2[2] = fVar4;
        param_2[3] = fVar4;
        fVar4 = lbl_820885C8;
        uVar7 = (unsigned int)*(unsigned short *)(uStack_a0 + 2);
        if ((*(unsigned short *)(uStack_a0 + 6) >> 6 & 1) != 0) {
          uVar7 = -(unsigned int)*(unsigned short *)(uStack_a0 + 2);
        }
        param_2[1] = lbl_820885C8;
        param_2[2] = (float)(__int64)(int)uVar7;
        if (*piVar2 < 0) {
          uVar8 = (unsigned int)*(unsigned short *)((int)piVar2 + 0x16);
        }
        else {
          uVar8 = piVar2[6];
        }
        param_2[3] = (float)(__int64)(int)uVar8;
        iVar1 = piVar2[4];
        fVar3 = (float)(__int64)iVar10 + fVar4;
        *param_2 = fVar3;
        param_2[1] = (float)(__int64)iVar1 + fVar4;
        param_2[2] = (float)(__int64)(int)uVar7 + fVar3;
        param_2[3] = (float)(__int64)(int)uVar8 + (float)(__int64)iVar1;
      }
LAB_827a1b40:
      fn_82756488(&uStack_a0);
    }
  }
  return uVar9;
}

