#define true 1
extern unsigned int *auStack_58;
extern int fn_83048F80();
extern int fn_83049D68();
extern int fn_8307DD98();
extern int fn_8307E570();
extern int fn_8307E600();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


char fn_8304A158(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  char cVar6;
  int *piVar7;
  int *piVar8;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int auStack_58;
  
  cVar6 = '\x01';
  piVar8 = (int *)(param_1 + 0x60);
  lVar5 = 2;
  do {
    if (*piVar8 == 0) {
LAB_8304a1d0:
      uStack_60 = 0;
      piVar7 = piVar8 + 1;
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x2c))
                        (*(int **)(param_1 + 0x2c),piVar7,&uStack_60,0);
      if (((iVar2 != 0x11) && (iVar2 != 0x2e)) && (iVar2 != 0x2d)) {
        cVar6 = '\x02';
      }
      if ((unsigned __int64)uStack_60 != 0) {
        *piVar8 = *piVar7 + *(int *)(param_1 + 0x30);
        lVar4 = (unsigned __int64)uStack_60 - (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
        *(unsigned int *)(param_1 + 0x30) = 0;
        iVar2 = *piVar8;
        uStack_60 = (unsigned int)lVar4;
        if (*(int *)(param_1 + 0x44) == 0) {
          fn_83049D68(param_1,lVar4,iVar2);
          iVar2 = fn_8307E600(*(unsigned int *)(param_1 + 0x28),0,iVar2,lVar4);
          cVar6 = (iVar2 != 0) + '\x01';
        }
        else {
          iVar3 = fn_83048F80(iVar2,lVar4,(unsigned int *)(param_1 + 0x44),&auStack_58,&uStack_5c
                                   );
          uVar1 = uStack_60;
          if (iVar3 == 1) {
            fn_83049D68(param_1,uStack_60,iVar2);
            iVar2 = fn_8307E600(*(unsigned int *)(param_1 + 0x28),0,iVar2,uVar1);
            cVar6 = (iVar2 != 0) + '\x01';
            if (cVar6 == '\x01') {
              fn_8307E570(*(unsigned int *)(param_1 + 0x28),0,auStack_58,uStack_5c);
              *(unsigned int *)(param_1 + 0x44) = 0;
            }
          }
          else {
            fn_83049D68(param_1,uStack_60,iVar2);
            if (*piVar7 != 0) {
              (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x30))();
              *piVar7 = 0;
            }
            *piVar8 = 0;
          }
        }
      }
    }
    else {
      iVar2 = fn_8307DD98(*(unsigned int *)(param_1 + 0x28),0);
      if (iVar2 == 0) {
        if (piVar8[1] != 0) {
          (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x30))();
          piVar8[1] = 0;
        }
        *piVar8 = 0;
        goto LAB_8304a1d0;
      }
      if (*piVar8 == 0) goto LAB_8304a1d0;
    }
    lVar5 = lVar5 + -1;
    piVar8 = piVar8 + 2;
    if (lVar5 == 0) {
      return cVar6;
    }
  } while( true );
}

