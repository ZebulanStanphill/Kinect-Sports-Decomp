extern unsigned int *auStack_4c;
extern int fn_82E2E008();
extern int fn_82E55A50();
extern unsigned int uStack_50;
extern unsigned int uStack_54;


__int64 fn_82E2FCE0(int param_1,unsigned int *param_2)

{
  __int64 lVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int auStack_4c [19];
  
  piStack_58 = (int *)0x0;
  piStack_60 = (int *)0x0;
  piStack_5c = (int *)0x0;
  uStack_54 = 0;
  uStack_50 = 0;
  auStack_4c[0] = 0;
  lVar1 = (**(int (***)())*param_2)(param_2,0xffffffff82154c18,&piStack_58);
  if ((((-1 < lVar1) &&
       (lVar1 = (**(int (***)())(*piStack_58 + 0xc))(piStack_58,0xffffffff821549d8,&uStack_54),
       -1 < lVar1)) &&
      (lVar1 = (**(int (***)())(*piStack_58 + 0xc))(piStack_58,0xffffffff82154a68,&uStack_50),
      -1 < lVar1)) &&
     (lVar1 = (**(int (***)())(*piStack_58 + 0xc))(piStack_58,0xffffffff82154a78,auStack_4c), -1 < lVar1
     )) {
    lVar4 = (unsigned __int64)auStack_4c[0] + (unsigned __int64)uStack_50 + (unsigned __int64)uStack_54;
    if ((lVar4 == 0) || (iVar2 = fn_82E2E008(param_1 + 0x100,lVar4 + -1,0), iVar2 != 0)) {
      uVar5 = 0;
      if (uStack_54 != 0) {
        do {
          if (piStack_60 != (int *)0x0) {
            (**(int (***)())(*piStack_60 + 8))();
            piStack_60 = (int *)0x0;
          }
          lVar1 = (**(int (***)())(*piStack_58 + 0x10))(piStack_58,0xffffffff821549d8,uVar5,&piStack_60)
          ;
          if ((lVar1 < 0) || (lVar1 = fn_82E55A50(piStack_60,&piStack_5c), lVar1 < 0)) break;
          if (((unsigned __int64)*(unsigned int *)(param_1 + 0x168) <= (uVar5 & 0xffffffff)) ||
             (iVar2 = fn_82E2E008(param_1 + 0x100,uVar5,piStack_5c), iVar2 == 0)) {
            lVar1 = -0x7ff8fff2;
            break;
          }
          uVar5 = uVar5 + 1;
          piStack_5c = (int *)0x0;
        } while ((uVar5 & 0xffffffff) < (unsigned __int64)uStack_54);
      }
      uVar5 = 0;
      if (uStack_50 != 0) {
        do {
          if (piStack_60 != (int *)0x0) {
            (**(int (***)())(*piStack_60 + 8))();
            piStack_60 = (int *)0x0;
          }
          lVar1 = (**(int (***)())(*piStack_58 + 0x10))(piStack_58,0xffffffff82154a68,uVar5,&piStack_60)
          ;
          if ((lVar1 < 0) || (lVar1 = fn_82E55A50(piStack_60,&piStack_5c), lVar1 < 0)) break;
          if (((unsigned __int64)*(unsigned int *)(param_1 + 0x168) <= (uVar5 + uStack_54 & 0xffffffff)) ||
             (iVar2 = fn_82E2E008(param_1 + 0x100,uVar5 + uStack_54,piStack_5c), iVar2 == 0)) {
            lVar1 = -0x7ff8fff2;
            break;
          }
          uVar5 = uVar5 + 1;
          piStack_5c = (int *)0x0;
        } while ((uVar5 & 0xffffffff) < (unsigned __int64)uStack_50);
      }
      uVar5 = 0;
      if (auStack_4c[0] != 0) {
        do {
          if (piStack_60 != (int *)0x0) {
            (**(int (***)())(*piStack_60 + 8))();
            piStack_60 = (int *)0x0;
          }
          lVar1 = (**(int (***)())(*piStack_58 + 0x10))(piStack_58,0xffffffff82154a78,uVar5,&piStack_60)
          ;
          if ((lVar1 < 0) || (lVar1 = fn_82E55A50(piStack_60,&piStack_5c), lVar1 < 0)) break;
          uVar3 = uVar5 + uStack_50 + (unsigned __int64)uStack_54;
          if (((unsigned __int64)*(unsigned int *)(param_1 + 0x168) <= (uVar3 & 0xffffffff)) ||
             (iVar2 = fn_82E2E008(param_1 + 0x100,uVar3,piStack_5c), iVar2 == 0)) {
            lVar1 = -0x7ff8fff2;
            break;
          }
          uVar5 = uVar5 + 1;
          piStack_5c = (int *)0x0;
        } while ((uVar5 & 0xffffffff) < (unsigned __int64)auStack_4c[0]);
      }
    }
    else {
      lVar1 = -0x7ff8fff2;
    }
  }
  if (piStack_58 != (int *)0x0) {
    (**(int (***)())(*piStack_58 + 8))();
    piStack_58 = (int *)0x0;
  }
  if (piStack_60 != (int *)0x0) {
    (**(int (***)())(*piStack_60 + 8))();
    piStack_60 = (int *)0x0;
  }
  if (piStack_5c != (int *)0x0) {
    (**(int (***)())(*piStack_5c + 8))();
  }
  return lVar1;
}

