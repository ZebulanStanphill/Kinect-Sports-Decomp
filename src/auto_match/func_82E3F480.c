#define true 1
extern unsigned int *auStack_c0;
extern int fn_82E3B468();
extern int fn_82E3B6F0();
extern int fn_82E3B7C8();
extern int fn_82E3C770();
extern int fn_82E3E728();
extern int fn_82E3E788();
extern int fn_82E723B0();
extern int fn_82EEA6E8();
extern unsigned int lbl_82152F10;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_c4;


__int64 fn_82E3F480(int param_1,int *param_2)

{
  __int64 lVar1;
  int iVar2;
  int *piVar3;
  int *piStack_e0;
  int *piStack_dc;
  int *piStack_d8;
  int *piStack_d4;
  int *piStack_d0;
  int *piStack_cc;
  int *piStack_c8;
  unsigned int uStack_c4;
  unsigned __int64 auStack_c0 [2];
  unsigned char **ppuStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  
  if (param_2 == (int *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    if (*(int *)(param_1 + 0x48) != 0) {
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_48 = 0;
      piVar3 = (int *)0x0;
      uStack_4c = 0;
      ppuStack_b0 = &lbl_82152F10;
      piStack_d0 = (int *)0x0;
      piStack_cc = (int *)0x0;
      piStack_c8 = (int *)0x0;
      piStack_d8 = (int *)0x0;
      piStack_dc = (int *)0x0;
      piStack_d4 = (int *)0x0;
      piStack_e0 = (int *)0x0;
      lVar1 = fn_82E3E788(&ppuStack_b0,10,0);
      if (((((-1 < lVar1) &&
            (lVar1 = (**(int (***)())*param_2)(param_2,0xffffffff82154c58,&piStack_d0), -1 < lVar1)) &&
           (lVar1 = (**(int (***)())(*piStack_d0 + 0x10))(piStack_d0,&piStack_cc), -1 < lVar1)) &&
          ((lVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x48))
                              (*(unsigned int **)(param_1 + 0x48),0xffffffff82154c18,&piStack_c8),
           -1 < lVar1 &&
           (lVar1 = (**(int (***)())(*piStack_c8 + 0x24))(piStack_c8,0xffffffff8202e618,&piStack_d8),
           -1 < lVar1)))) && (lVar1 = (**(int (***)())(*piStack_d8 + 0x14))(), -1 < lVar1)) {
        uStack_c4 = 0;
        iVar2 = (**(int (***)())(*piStack_d8 + 0xc))(piStack_d8,1,&piStack_dc,&uStack_c4);
        while (iVar2 == 0) {
          if (piStack_d4 != (int *)0x0) {
            (**(int (***)())(*piStack_d4 + 8))();
            piStack_d4 = (int *)0x0;
          }
          iVar2 = (**(int (***)())*piStack_dc)(piStack_dc,0xffffffff82154c98,&piStack_d4);
          if (piStack_dc != (int *)0x0) {
            (**(int (***)())(*piStack_dc + 8))(piStack_dc);
            piStack_dc = (int *)0x0;
          }
          if (iVar2 < 0) {
            lVar1 = 0;
          }
          else {
            lVar1 = fn_82E3B468(param_1,piStack_d4,piStack_cc,&piStack_e0);
            piVar3 = piStack_e0;
            if ((lVar1 < 0) || (lVar1 = fn_82E723B0(piStack_e0,0xffffffff82154a18), lVar1 < 0))
            goto LAB_82e3f7b0;
            auStack_c0[0] = 0;
            lVar1 = (**(int (***)())(*piVar3 + 0x14))(piVar3,0,auStack_c0);
            if ((lVar1 < 0) || (lVar1 = fn_82E3C770(&ppuStack_b0,&piStack_e0), lVar1 < 0))
            goto LAB_82e3f7b0;
            piStack_e0 = (int *)0x0;
          }
          iVar2 = (**(int (***)())(*piStack_d8 + 0xc))(piStack_d8,1,&piStack_dc,&uStack_c4);
        }
        piVar3 = (int *)0x0;
        if (-1 < (int)lVar1) {
          fn_82E3B6F0(param_1,param_2);
          lVar1 = fn_82E3B7C8(param_1,param_2);
          if (-1 < lVar1) {
            while (iVar2 = fn_82EEA6E8(&ppuStack_b0,&piStack_e0), piVar3 = piStack_e0, iVar2 != 0)
            {
              auStack_c0[0] = auStack_c0[0] & 0xffffffff;
              lVar1 = (**(int (***)())(*param_2 + 0x14))(param_2,piStack_e0,auStack_c0);
              if (lVar1 < 0) break;
              if (piVar3 != (int *)0x0) {
                (**(int (***)())(*piVar3 + 8))(piVar3);
                piStack_e0 = (int *)0x0;
              }
            }
          }
        }
      }
LAB_82e3f7b0:
      if (piStack_d0 != (int *)0x0) {
        (**(int (***)())(*piStack_d0 + 8))();
        piStack_d0 = (int *)0x0;
      }
      if (piStack_cc != (int *)0x0) {
        (**(int (***)())(*piStack_cc + 8))();
        piStack_cc = (int *)0x0;
      }
      if (piStack_c8 != (int *)0x0) {
        (**(int (***)())(*piStack_c8 + 8))();
        piStack_c8 = (int *)0x0;
      }
      if (piStack_d8 != (int *)0x0) {
        (**(int (***)())(*piStack_d8 + 8))();
        piStack_d8 = (int *)0x0;
      }
      if (piStack_dc != (int *)0x0) {
        (**(int (***)())(*piStack_dc + 8))();
        piStack_dc = (int *)0x0;
      }
      if (piStack_d4 != (int *)0x0) {
        (**(int (***)())(*piStack_d4 + 8))();
        piStack_d4 = (int *)0x0;
      }
      if (piVar3 == (int *)0x0) goto LAB_82e3f8a0;
      iVar2 = *piVar3;
      do {
        (**(int (***)())(iVar2 + 8))(piVar3);
LAB_82e3f8a0:
        piStack_e0 = (int *)0x0;
        do {
          iVar2 = fn_82EEA6E8(&ppuStack_b0,&piStack_e0);
          if (iVar2 == 0) {
            fn_82E3E728(&ppuStack_b0);
            return lVar1;
          }
        } while (piStack_e0 == (int *)0x0);
        iVar2 = *piStack_e0;
        piVar3 = piStack_e0;
      } while( true );
    }
    lVar1 = -0x3ff2c94a;
  }
  return lVar1;
}

