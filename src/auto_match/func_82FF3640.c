#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FF38E8();
extern int fn_82FF3C50();
extern int fn_82FF4618();
extern int fn_82FFE158();
extern int fn_83014FE0();
extern unsigned int iStack_40;
extern unsigned int iStack_d0;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264574;
extern unsigned int uStack_cc;


unsigned __int64 fn_82FF3640(int *param_1)

{
  unsigned int uVar1;
  float fVar2;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned __int64 *puVar6;
  int *piVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  __int64 lVar10;
  int iStack_d0;
  unsigned int uStack_cc;
  int *piStack_c8;
  int aiStack_c0 [32];
  int iStack_40;
  
  piVar7 = aiStack_c0;
  iStack_40 = 0;
  lVar10 = 0x1f;
  aiStack_c0[0] = lbl_831BC768;
  do {
    piVar7 = piVar7 + 1;
    *piVar7 = 0;
    lVar10 = lVar10 + -1;
    iVar3 = lbl_83264574;
  } while (lVar10 != 0);
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x10)) {
    uVar1 = *(unsigned int *)(*(int *)(iVar3 + 0x70) + 0x58);
    fn_83014FE0(&iStack_d0,aiStack_c0,uVar1);
    if (piStack_c8 == (int *)0x0) {
      puVar4 = (unsigned int *)fn_82FFE158(aiStack_c0,uVar1);
      if (puVar4 == (unsigned int *)0x0) goto LAB_82ff3744;
      *puVar4 = *(unsigned int *)(iVar3 + 0x140);
    }
    else {
      fVar2 = *(float *)(iVar3 + 0x140);
      if (*(float *)(iVar3 + 0x140) < (float)piStack_c8[2]) {
        fVar2 = (float)piStack_c8[2];
      }
      piStack_c8[2] = (int)fVar2;
    }
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    fn_82FA5190(lbl_831BC768);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  iVar3 = iStack_40;
  if (iStack_40 != 0) {
    iVar5 = fn_82FA5060(lbl_831BC768,iStack_40 << 3);
    *param_1 = iVar5;
    param_1[1] = iVar5;
    if (iVar5 == 0) {
LAB_82ff3744:
      uVar8 = 0x34;
      goto LAB_82ff37d0;
    }
    param_1[2] = iVar3;
  }
  uVar8 = 1;
  fn_82FF4618(&iStack_d0,aiStack_c0);
  iVar3 = iStack_d0;
  uVar9 = uStack_cc;
  if (piStack_c8 != (int *)0x0) {
    do {
      do {
        iStack_d0 = piStack_c8[1];
        uStack_cc = piStack_c8[2];
        puVar6 = (unsigned __int64 *)fn_82FF3C50(param_1);
        if (puVar6 != (unsigned __int64 *)0x0) {
          *puVar6 = CONCAT44(iStack_d0,uStack_cc);
        }
        piStack_c8 = (int *)*piStack_c8;
      } while (piStack_c8 != (int *)0x0);
      do {
        uVar9 = uVar9 + 1;
        if (0x1e < uVar9) {
          if (piStack_c8 == (int *)0x0) goto LAB_82ff37d0;
          break;
        }
        piStack_c8 = *(int **)(uVar9 * 4 + iVar3);
      } while (piStack_c8 == (int *)0x0);
    } while( true );
  }
LAB_82ff37d0:
  if (aiStack_c0[0] != -1) {
    fn_82FF38E8(aiStack_c0);
  }
  return uVar8;
}

