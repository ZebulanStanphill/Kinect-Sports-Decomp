extern unsigned int *auStack_6c;
extern int fn_82E439A0();
extern int fn_82E628A0();
extern int fn_82E628F0();
extern int fn_82E62918();
extern int fn_82E62940();
extern unsigned int lbl_820F8F08;
extern unsigned int lbl_82154978;
extern unsigned int lbl_821549D8;
extern unsigned int lbl_82154A68;
extern unsigned int lbl_82154A78;
extern unsigned int lbl_82154A98;
extern unsigned int lbl_82154B08;
extern unsigned int lbl_82154B18;


__int64 fn_82E43BE8(int param_1)

{
  unsigned char *puVar1;
  int *piVar2;
  __int64 lVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int *piStack_70;
  unsigned int auStack_6c [3];
  unsigned char *apuStack_60 [4];
  unsigned char *puStack_50;
  unsigned char *puStack_4c;
  unsigned char *puStack_48;
  unsigned int *puStack_44;
  
  piStack_70 = (int *)0x0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    lVar3 = fn_82E439A0();
  }
  else {
    apuStack_60[0] = &lbl_82154B18;
    apuStack_60[1] = &lbl_820F8F08;
    apuStack_60[2] = &lbl_82154B08;
    apuStack_60[3] = &lbl_82154A68;
    puStack_50 = &lbl_82154A78;
    puStack_4c = &lbl_821549D8;
    puStack_48 = &lbl_82154A98;
    uVar5 = 0;
    puStack_44 = &lbl_82154978;
    do {
      auStack_6c[0] = 0;
      puVar1 = apuStack_60[uVar5];
      lVar3 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 0xc))
                        (*(int **)(param_1 + 0x1c),puVar1,auStack_6c);
      if (lVar3 < 0) goto LAB_82e43c18;
      uVar6 = 0;
      if (auStack_6c[0] != 0) {
        do {
          lVar3 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 0x18))
                            (*(int **)(param_1 + 0x1c),puVar1,uVar6,0);
          if (lVar3 < 0) goto LAB_82e43c18;
          uVar6 = uVar6 + 1;
        } while ((uVar6 & 0xffffffff) < (unsigned __int64)auStack_6c[0]);
      }
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < 8);
    iVar4 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 0x10))
                      (*(int **)(param_1 + 0x1c),0xffffffff82154aa8,0,&piStack_70);
    piVar2 = piStack_70;
    if (-1 < iVar4) {
      fn_82E628A0(piStack_70,0);
      fn_82E628F0(piVar2,0);
      fn_82E62918(piVar2,0);
      fn_82E62940(piVar2,0);
      if (piStack_70 == (int *)0x0) {
        return lVar3;
      }
      (**(int (***)())(*piStack_70 + 8))();
      piStack_70 = (int *)0x0;
    }
  }
LAB_82e43c18:
  if (piStack_70 != (int *)0x0) {
    (**(int (***)())(*piStack_70 + 8))(piStack_70);
  }
  return lVar3;
}

