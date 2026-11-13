#define true 1
extern unsigned int *auStack_290;
extern int fn_82E2D840();
extern int fn_82E2D9C0();
extern int fn_82E2E920();
extern int fn_82E2EA08();
extern int fn_82E30238();
extern int fn_82E54710();
extern int fn_82E58B58();
extern int fn_82E58BE8();
extern int fn_82E58CA8();
extern int fn_82E5A018();
extern int fn_82E5A100();
extern int fn_82E5C7D8();
extern int fn_82E5E0F0();
extern int fn_82E783C0();
extern unsigned int uStack_158;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_168;
extern unsigned int uStack_16c;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_184;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;
extern unsigned int uStack_260;
extern unsigned int uStack_268;
extern unsigned int uStack_274;
extern unsigned int uStack_27c;


__int64 fn_82E309D0(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  short *psVar2;
  __int64 lVar3;
  int iVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned short auStack_290;
  int *piStack_28c;
  int *piStack_288;
  int *piStack_284;
  int *piStack_280;
  unsigned int uStack_27c;
  short asStack_278 [2];
  unsigned int uStack_274;
  int *piStack_270;
  int *piStack_26c;
  unsigned __int64 uStack_268;
  struct { unsigned int first; unsigned int second; } stack_pair_260;

  unsigned int uStack_258;
  unsigned int uStack_184;
  unsigned int *puStack_180;
  unsigned int uStack_17c;
  unsigned int uStack_178;
  short *psStack_170;
  unsigned int uStack_16c;
  unsigned int uStack_168;
  unsigned int uStack_164;
  unsigned int uStack_160;
  unsigned int uStack_15c;
  unsigned int uStack_158;
  
  piStack_280 = (int *)0x0;
  piStack_284 = (int *)0x0;
  piStack_288 = (int *)0x0;
  uStack_27c = 0;
  uStack_274 = 0;
  stack_pair_260.first = 0;
  stack_pair_260.second = 0;
  uStack_258 = 0;
  uStack_178 = 0;
  uStack_17c = 0;
  puStack_180 = (unsigned int *)0x0;
  uStack_184 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_168 = 0;
  uStack_16c = 0;
  psStack_170 = (short *)0x0;
  uStack_164 = 0;
  piStack_270 = (int *)0x0;
  lVar3 = (**(int (***)())*param_2)(param_2,0xffffffff82154c18,&piStack_280);
  if (-1 < lVar3) {
    iVar4 = (**(int (***)())(*piStack_280 + 0x10))(piStack_280,0xffffffff82154a58,0,&piStack_270);
    piVar5 = (int *)0x0;
    if (-1 < iVar4) {
      piVar5 = piStack_270;
    }
    lVar3 = (**(int (***)())(*piStack_280 + 0xc))(piStack_280,0xffffffff82154b18,&uStack_27c);
    if (-1 < lVar3) {
      iVar4 = fn_82E58CA8(&stack_pair_260.first,uStack_27c,0);
      if (iVar4 < 0) {
LAB_82e30ad8:
        lVar3 = -0x7ff8fff2;
      }
      else {
        uVar7 = 0;
        if (uStack_27c != 0) {
          do {
            lVar3 = (**(int (***)())(*piStack_280 + 0x10))
                              (piStack_280,0xffffffff82154b18,uVar7,&piStack_284);
            if (lVar3 < 0) goto LAB_82e30ae0;
            iVar4 = fn_82E58B58(&stack_pair_260.first,piStack_284);
            if (iVar4 == 0) goto LAB_82e30ad8;
            uVar7 = uVar7 + 1;
            piStack_284 = (int *)0x0;
          } while ((uVar7 & 0xffffffff) < (unsigned __int64)uStack_27c);
        }
        lVar3 = (**(int (***)())(*piStack_280 + 0xc))(piStack_280,0xffffffff820f8f08,&uStack_274);
        if (-1 < lVar3) {
          fn_82E783C0(&uStack_160,uStack_274);
          uVar7 = 0;
          if (uStack_274 != 0) {
            do {
              lVar3 = (**(int (***)())(*piStack_280 + 0x10))
                                (piStack_280,0xffffffff820f8f08,uVar7,&piStack_284);
              if (lVar3 < 0) goto LAB_82e30ae0;
              auStack_290 = 0;
              piStack_28c = piStack_284;
              lVar3 = fn_82E5A018(piStack_284,&auStack_290);
              if (lVar3 < 0) goto LAB_82e30ae0;
              iVar4 = fn_82E2E920(&psStack_170,&auStack_290,&piStack_28c);
              if (iVar4 == 0) goto LAB_82e30ad8;
              uVar7 = uVar7 + 1;
              piStack_284 = (int *)0x0;
            } while ((uVar7 & 0xffffffff) < (unsigned __int64)uStack_274);
          }
          if (uStack_27c != 0) {
            uStack_268 = 0;
            lVar3 = fn_82E5E0F0(param_2,&uStack_268);
            puVar6 = puStack_180;
            if (-1 < lVar3) {
LAB_82e30ca8:
              if (puVar6 != (unsigned int *)0x0) {
                uVar1 = *puVar6;
                puVar6 = (unsigned int *)puVar6[1];
                asStack_278[0] = 0;
                lVar3 = fn_82E5C7D8(uVar1,asStack_278);
                psVar2 = psStack_170;
                if (-1 < lVar3) {
                  for (; psVar2 != (short *)0x0; psVar2 = *(short **)(psVar2 + 4)) {
                    if (*psVar2 == asStack_278[0]) {
                      iVar4 = *(int *)(psVar2 + 2);
                      goto LAB_82e30cfc;
                    }
                  }
                  iVar4 = 0;
LAB_82e30cfc:
                  lVar3 = fn_82E54710(uVar1,iVar4,uStack_268,&piStack_288);
                  if (-1 < lVar3) {
                    if ((piVar5 != (int *)0x0) && (iVar4 != 0)) {
                      auStack_290 = 0;
                      lVar3 = fn_82E5A100(iVar4,&auStack_290);
                      if ((lVar3 < 0) ||
                         (lVar3 = fn_82E2D840(param_1,auStack_290,piVar5,piStack_288),
                         lVar3 < 0)) goto LAB_82e30ae0;
                    }
                    piStack_28c = (int *)0x0;
                    lVar3 = (**(int (***)())(*piStack_288 + 0x90))(piStack_288,&piStack_28c);
                    if (piStack_28c == (int *)0x0) goto LAB_82e30dc8;
                    if (lVar3 < 0) {
                      (**(int (***)())(*piStack_28c + 8))();
                      piStack_28c = (int *)0x0;
                      goto LAB_82e30dc8;
                    }
                    (**(int (***)())(*piStack_28c + 8))();
                    piStack_28c = (int *)0x0;
                    lVar3 = fn_82E30238(param_1,piStack_288);
                    if (-1 < lVar3) goto LAB_82e30de4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_82e30ae0:
  if (piStack_280 != (int *)0x0) {
    (**(int (***)())(*piStack_280 + 8))();
    piStack_280 = (int *)0x0;
  }
  if (piStack_284 != (int *)0x0) {
    (**(int (***)())(*piStack_284 + 8))();
    piStack_284 = (int *)0x0;
  }
  if (piStack_288 != (int *)0x0) {
    (**(int (***)())(*piStack_288 + 8))();
    piStack_288 = (int *)0x0;
  }
  if (piStack_270 != (int *)0x0) {
    (**(int (***)())(*piStack_270 + 8))();
    piStack_270 = (int *)0x0;
  }
  auStack_290 = 0;
  do {
    piStack_26c = (int *)0x0;
    do {
      iVar4 = fn_82E58BE8(&stack_pair_260.first,&piStack_26c);
      if (iVar4 == 0) {
        do {
          piStack_28c = (int *)0x0;
          do {
            iVar4 = fn_82E2EA08(&psStack_170,0,&auStack_290,&piStack_28c);
            if (iVar4 == 0) {
              fn_82E2D9C0(&uStack_160);
              thunk_FUN_82e58aac(&stack_pair_260.first);
              fn_82E2D9C0(&stack_pair_260.first);
              return lVar3;
            }
          } while (piStack_28c == (int *)0x0);
          (**(int (***)())(*piStack_28c + 8))();
        } while( true );
      }
    } while (piStack_26c == (int *)0x0);
    (**(int (***)())(*piStack_26c + 8))();
  } while( true );
LAB_82e30dc8:
  if (piStack_288 != (int *)0x0) {
    (**(int (***)())(*piStack_288 + 8))();
LAB_82e30de4:
    piStack_288 = (int *)0x0;
  }
  goto LAB_82e30ca8;
}

