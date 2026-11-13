extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_82E3BDF8();
extern int fn_82E3C690();
extern int fn_82E3D9C0();
extern int fn_82E6F3A0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


__int64 fn_82E3F8D0(int param_1)

{
  __int64 lVar1;
  int iVar2;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned char auStack_48 [8];
  unsigned char auStack_40 [64];
  
  piStack_54 = (int *)0x0;
  piStack_5c = (int *)0x0;
  piStack_60 = (int *)0x0;
  piStack_58 = (int *)0x0;
  lVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x48))
                    (*(unsigned int **)(param_1 + 0x48),0xffffffff82154c18,&piStack_54);
  if (((-1 < lVar1) &&
      (lVar1 = (**(int (***)())(*piStack_54 + 0x24))(piStack_54,0xffffffff8202e618,&piStack_5c),
      -1 < lVar1)) && (lVar1 = (**(int (***)())(*piStack_5c + 0x14))(), -1 < lVar1)) {
    uStack_4c = 0;
    iVar2 = (**(int (***)())(*piStack_5c + 0xc))(piStack_5c,1,&piStack_60,&uStack_4c);
    while (iVar2 == 0) {
      iVar2 = (**(int (***)())*piStack_60)(piStack_60,0xffffffff82154c98,&piStack_58);
      if (iVar2 < 0) {
        if (piStack_60 != (int *)0x0) {
          (**(int (***)())(*piStack_60 + 8))();
          piStack_60 = (int *)0x0;
        }
      }
      else {
        if (piStack_60 != (int *)0x0) {
          (**(int (***)())(*piStack_60 + 8))();
          piStack_60 = (int *)0x0;
        }
        lVar1 = fn_82E3D9C0(param_1,piStack_58);
        if (lVar1 < 0) goto LAB_82e3faa0;
        if (piStack_58 != (int *)0x0) {
          (**(int (***)())(*piStack_58 + 8))();
          piStack_58 = (int *)0x0;
        }
      }
      iVar2 = (**(int (***)())(*piStack_5c + 0xc))(piStack_5c,1,&piStack_60,&uStack_4c);
    }
    uStack_50 = 0;
    iVar2 = fn_82E3BDF8(param_1 + 0x1ac,auStack_48);
    if (iVar2 == 0) {
      lVar1 = 0;
    }
    else {
      do {
        iVar2 = fn_82E3C690(param_1 + 0x1ac,auStack_48,auStack_40,&uStack_50);
        if (iVar2 == 0) break;
        lVar1 = fn_82E6F3A0(uStack_50);
      } while (-1 < lVar1);
    }
  }
LAB_82e3faa0:
  if (piStack_54 != (int *)0x0) {
    (**(int (***)())(*piStack_54 + 8))();
    piStack_54 = (int *)0x0;
  }
  if (piStack_5c != (int *)0x0) {
    (**(int (***)())(*piStack_5c + 8))();
    piStack_5c = (int *)0x0;
  }
  if (piStack_60 != (int *)0x0) {
    (**(int (***)())(*piStack_60 + 8))();
    piStack_60 = (int *)0x0;
  }
  if (piStack_58 != (int *)0x0) {
    (**(int (***)())(*piStack_58 + 8))();
  }
  return lVar1;
}

