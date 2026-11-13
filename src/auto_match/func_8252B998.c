extern unsigned int *auStack_40;
extern unsigned int *auStack_90;
extern int fn_82553A18();
extern int memcpy();
extern unsigned int iStack_7c;
extern unsigned int lbl_82196290;
extern unsigned int lbl_82196298;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


void fn_8252B998(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 *puVar4;
  int iVar5;
  int iVar6;
  unsigned char auStack_90 [20];
  int iStack_7c;
  unsigned __int64 uStack_70;
  unsigned __int64 uStack_68;
  unsigned __int64 uStack_60;
  unsigned __int64 uStack_58;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned char auStack_40 [48];
  
  piVar1 = *(int **)(param_1 + 0x8c0);
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 0x10))
              ((double)*(float *)(param_1 + 0xb3c),piVar1,param_1 + 0xf0,
               *(unsigned int *)(*(int *)(param_1 + 0x4c) + 0x44),
               *(unsigned int *)(*(int *)(param_1 + 0x4c) + 0x40));
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x4c) + 0x1a8);
    memcpy(&uStack_70,param_1 + 0xf0,0x40);
    iVar6 = 0;
    if (0 < piVar1[0x48]) {
      iVar5 = 0;
      do {
        iStack_7c = piVar1[0x47];
        memcpy(auStack_90,auStack_40,0x10);
        fn_82553A18(uVar2,*(unsigned int *)(iVar5 + piVar1[0x49]),uStack_70,uStack_68,uStack_60,
                          uStack_58,uStack_50,uStack_48);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar6 < piVar1[0x48]);
    }
  }
  if (0 < (int)*(unsigned int *)(param_1 + 0x1dc)) {
    lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1dc) - 1;
    *(int *)(param_1 + 0x1dc) = (int)lVar3;
    if (lVar3 == 0) {
      puVar4 = (unsigned __int64 *)(param_1 + 0x1f0);
      lVar3 = 2;
      do {
        lVar3 = lVar3 + -1;
        *puVar4 = lbl_82196290;
        puVar4[1] = lbl_82196298;
        puVar4 = puVar4 + 2;
      } while (lVar3 != 0);
    }
  }
  return;
}

