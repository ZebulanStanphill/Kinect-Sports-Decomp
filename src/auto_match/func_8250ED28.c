#define true 1
extern int fn_82230040();
extern int fn_823116D8();
extern int fn_8250EFF0();
extern int fn_8250F130();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821914B0;
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_6c;


void fn_8250ED28(int *param_1,__int64 param_2)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  unsigned int uVar4;
  float fVar5;
  int in_r0;
  unsigned __int64 *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  unsigned char **ppuStack_70;
  unsigned int uStack_6c;
  float afStack_60 [4];
  unsigned __int64 *puStack_50;
  unsigned __int64 *puStack_4c;
  unsigned __int64 *puStack_48;
  unsigned __int64 uStack_40;
  unsigned __int64 uStack_38;
  unsigned __int64 uStack_30;
  unsigned __int64 uStack_28;
  
  fn_8250EFF0(&uStack_40,param_2,param_2 + 4);
  fVar5 = lbl_821914B0;
  iVar7 = *param_1;
  iVar1 = param_1[1];
  pfVar3 = (float *)((int)&uStack_40 + in_r0 & 0xfffffff0);
  fVar8 = *pfVar3;
  fVar9 = pfVar3[1];
  fVar10 = pfVar3[2];
  fVar11 = pfVar3[3];
  while( true ) {
    if (iVar7 == iVar1) {
      pfVar3 = (float *)((int)afStack_60 + in_r0 & 0xfffffff0);
      *pfVar3 = fVar8;
      pfVar3[1] = fVar9;
      pfVar3[2] = fVar10;
      pfVar3[3] = fVar11;
      puStack_50 = (unsigned __int64 *)0x0;
      puStack_4c = (unsigned __int64 *)0x0;
      puStack_48 = (unsigned __int64 *)0x0;
      puVar6 = (unsigned __int64 *)fn_8265C9E0(0x20);
      if (puVar6 != (unsigned __int64 *)0x0) {
        puStack_4c = puVar6 + 4;
        *puVar6 = uStack_40;
        puVar6[1] = uStack_38;
        puVar6[2] = uStack_30;
        puVar6[3] = uStack_28;
        puStack_50 = puVar6;
        puStack_48 = puStack_4c;
        fn_8250F130(param_1,afStack_60);
        if (puStack_50 != (unsigned __int64 *)0x0) {
          fn_8265CA20();
        }
        return;
      }
      uStack_6c = 0;
      ppuStack_70 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_70);
    }
    uVar4 = in_r0 + iVar7 & 0xfffffff0;
    fVar2 = fVar8 * 0.0 + fVar9 * *(float *)(uVar4 + 4) + fVar10 * *(float *)(uVar4 + 8);
    pfVar3 = (float *)((int)afStack_60 + in_r0 & 0xfffffff0);
    *pfVar3 = fVar2;
    pfVar3[1] = fVar2;
    pfVar3[2] = fVar2;
    pfVar3[3] = fVar2;
    if (fVar5 < afStack_60[0]) break;
    iVar7 = iVar7 + 0x20;
  }
  fn_823116D8(iVar7 + 0x10,&uStack_40);
  return;
}

