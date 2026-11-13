typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82230040();
extern int fn_8228E658();
extern int fn_82514110();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_82513E08(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  char in_RESERVE;
  unsigned char bVar8;
  unsigned int *puStack_50;
  unsigned int uStack_4c;
  unsigned char **ppuStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  int *piStack_38;
  
  puVar7 = *(unsigned int **)(param_1 + 4);
  if (*(char *)((int)puVar7[1] + 0x19) == '\0') {
    puVar3 = (unsigned int *)puVar7[1];
    do {
      if ((unsigned int)puVar3[3] < *param_2) {
        puVar1 = (unsigned int *)puVar3[2];
      }
      else {
        puVar1 = (unsigned int *)*puVar3;
        puVar7 = puVar3;
      }
      puVar3 = puVar1;
    } while (*(char *)((int)puVar1 + 0x19) == '\0');
  }
  if ((puVar7 == *(unsigned int **)(param_1 + 4)) || (*param_2 < (unsigned int)puVar7[3])) {
    uStack_40 = *param_2;
    puStack_50 = (unsigned int *)0x0;
    uStack_4c = 0;
    uStack_3c = 0;
    piStack_38 = (int *)0x0;
    fn_8228E658(&uStack_3c,&puStack_50);
    puVar3 = (unsigned int *)fn_8265C9E0(0x1c);
    if (puVar3 == (unsigned int *)0x0) {
      uStack_44 = 0;
      ppuStack_48 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_48);
    }
    puVar6 = puVar3 + 3;
    bVar8 = (puVar6 == (unsigned int *)0x0) << 1;
    *puVar3 = *(unsigned int *)(param_1 + 4);
    puVar3[1] = *(unsigned int *)(param_1 + 4);
    puVar3[2] = *(unsigned int *)(param_1 + 4);
    *(unsigned char *)(puVar3 + 6) = 0;
    *(unsigned char *)((int)puVar3 + 0x19) = 0;
    if (puVar6 != (unsigned int *)0x0) {
      *puVar6 = uStack_40;
      puVar3[4] = 0;
      puVar3[5] = 0;
      fn_8228E658(puVar3 + 4,&uStack_3c);
    }
    fn_82514110(&puStack_50,param_1,puVar7,puVar3);
    puVar7 = puStack_50;
    if (ZEXT48(piStack_38) != 0) {
      lVar5 = ZEXT48(piStack_38) + 8;
      do {
        puVar6 = (unsigned int *)lVar5;
        lVar4 = (unsigned __int64)*puVar6 - 1;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(lVar4,0,lVar5);
          *puVar6 = uVar2;
          bVar8 = 2;
        }
      } while (!(bool)(bVar8 >> 1 & 1));
      if ((int)lVar4 == 0) {
        (**(int (***)())(*piStack_38 + 4))();
      }
    }
  }
  return puVar7 + 4;
}

