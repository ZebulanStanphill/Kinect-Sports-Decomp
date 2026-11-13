extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826828D8();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_82696B20();
extern int fn_8275BB38();
extern unsigned int iStack_30;
extern unsigned int iStack_38;
extern unsigned int iStack_84;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;


void fn_8275C568(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  __int64 lVar4;
  int aiStack_90 [2];
  int *piStack_88;
  int iStack_84;
  unsigned char bStack_80;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char **ppuStack_50;
  unsigned char *puStack_4c;
  int *piStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned char uStack_3c;
  int iStack_38;
  unsigned int uStack_34;
  int iStack_30;
  
  piVar1 = (int *)fn_8275BB38();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(int (***)())(*piVar1 + 0x5c))();
    auStack_70[0] = 0;
    fn_82681728(aiStack_90,(unsigned __int64)*(unsigned int *)(iVar2 + 0x78) + 0x254,0xffffffff820147bc);
    piVar1 = (int *)(param_1 + 0x10);
    cVar3 = (**(int (***)())(*piVar1 + 0x2c))(piVar1,iVar2 + 0x78,aiStack_90,auStack_70);
    lVar4 = (unsigned __int64)*(unsigned int *)(aiStack_90[0] + 8) - 1;
    *(int *)(aiStack_90[0] + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8(aiStack_90[0]);
    }
    if (cVar3 != '\0') {
      fn_82696B20(&piStack_88,auStack_70,iVar2);
      auStack_60[0] = 0;
      puStack_4c = auStack_60;
      ppuStack_50 = &lbl_8200579C;
      uStack_3c = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_34 = 0;
      iStack_30 = (*(int *)(iVar2 + 8) - *(int *)(iVar2 + 0xc) >> 4) + *(int *)(iVar2 + 0x1c) * 0x20
                  + -0x20;
      piStack_48 = piVar1;
      iStack_38 = iVar2;
      (**(int (***)())(*piStack_88 + 0x28))(piStack_88,&ppuStack_50,iStack_84,0);
      fn_826828D8(&ppuStack_50);
      fn_82696330(auStack_60);
      if (((bStack_80 & 2) == 0) && (piStack_88 != (int *)0x0)) {
        fn_826824B0();
      }
      piStack_88 = (int *)0x0;
      if (((bStack_80 & 1) == 0) && (iStack_84 != 0)) {
        fn_826824B0();
      }
      iStack_84 = 0;
    }
    fn_82696330(auStack_70);
  }
  return;
}

