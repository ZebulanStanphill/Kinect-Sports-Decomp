typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_80;
extern unsigned int *auStack_d0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8225C0A0();
extern int fn_8225C168();
extern int fn_8225C590();
extern int fn_8225CF60();
extern int fn_8225D288();
extern int fn_8225D930();
extern int fn_8225D9B8();
extern int fn_823AB470();
extern unsigned int iStack_9c;
extern unsigned int iStack_bc;
extern unsigned int lbl_8219854C;
extern unsigned int lbl_82198564;


void fn_8225BE20(int param_1,__int64 param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  int iVar10;
  unsigned int auStack_d0 [4];
  unsigned char **ppuStack_c0;
  int iStack_bc;
  unsigned char ***pppuStack_b0;
  unsigned char **ppuStack_a0;
  int iStack_9c;
  unsigned char ***pppuStack_90;
  unsigned char auStack_80 [128];
  
  iVar5 = fn_8225C590();
  iVar10 = (int)param_2;
  if (param_3 == 0) {
    iVar1 = *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x10) >> 2;
    if (iVar10 == iVar1) {
      return;
    }
    if (iVar10 < iVar1) {
      fn_8225C0A0(param_2);
      return;
    }
  }
  fn_8225C0A0(1);
  if (*(int *)(param_1 + 0x10) == -1) {
    ppuStack_c0 = &lbl_82198564;
    pppuStack_b0 = &ppuStack_c0;
    pppuStack_90 = &ppuStack_a0;
    ppuStack_a0 = &lbl_8219854C;
    iStack_bc = param_1;
    iStack_9c = param_1;
    uVar6 = fn_8225CF60(iVar5,&ppuStack_a0,&ppuStack_c0);
    *(unsigned int *)(param_1 + 0x10) = uVar6;
  }
  if (1 < iVar10) {
    param_2 = param_2 + -1;
    do {
      uVar8 = 0;
      if (param_3 == 0) {
        lVar9 = 0;
        do {
          if ((uVar8 & 0xffffffff) != 0) goto LAB_8225bfbc;
          uVar3 = fn_8225D9B8(iVar5,lVar9);
          if (uVar3 != 0) {
            for (puVar7 = *(unsigned int **)(iVar5 + 0x10); puVar7 != *(unsigned int **)(iVar5 + 0x14);
                puVar7 = puVar7 + 1) {
              if ((uVar3 & 0xffffffff) == (unsigned __int64)*puVar7) {
                bVar2 = true;
                goto LAB_8225bf34;
              }
            }
            bVar2 = false;
LAB_8225bf34:
            bVar2 = !bVar2;
            if (param_4 != 0) {
              lVar4 = fn_823AB470(uVar3);
              bVar2 = lVar4 == 2 && bVar2;
            }
            if (bVar2) {
              uVar8 = uVar3;
            }
          }
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < 4);
        if ((uVar8 & 0xffffffff) == 0) goto LAB_8225bf7c;
      }
      else {
LAB_8225bf7c:
        fn_82230110(auStack_80,0xffffffff82198540);
        auStack_d0[0] = fn_8225D288(iVar5,auStack_80,0);
        fn_82230300(auStack_80,1,0);
        fn_8225C168(param_1,auStack_d0);
        uVar8 = (unsigned __int64)auStack_d0[0];
      }
LAB_8225bfbc:
      fn_8225D930(iVar5,uVar8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

