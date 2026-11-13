#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8300F2C0();
extern int fn_8300F848();
extern int fn_83010658();
extern int fn_83019E38();
extern unsigned int uStack_80;


void fn_83011448(int param_1,int param_2,unsigned __int64 param_3,char param_4)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  char cVar7;
  int iVar6;
  unsigned __int64 uStack_80;
  unsigned int *puStack_78;
  unsigned int *puStack_74;
  
  for (puVar1 = *(unsigned int **)(param_1 + 0x70); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    iVar2 = puVar1[2];
    iVar6 = *(int *)(iVar2 + 8);
    if (((((*(unsigned int *)(iVar6 + 0x14) & 0xff00000) != 0x300000) || (param_4 != '\0')) &&
        ((param_2 == 0 || (param_2 == *(int *)(iVar2 + 0x34))))) &&
       ((cVar7 = fn_83010658(param_1,iVar6,param_3), cVar7 == '\0' &&
        ((*(unsigned int *)(iVar6 + 0x14) & 0xffffff00) != 0x5010000)))) {
      *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 1;
    }
  }
  puVar5 = *(unsigned int **)(param_1 + 0x50);
  puVar1 = (unsigned int *)0x0;
  while (puVar4 = puVar5, puVar4 != (unsigned int *)0x0) {
    iVar2 = puVar4[2];
    iVar6 = *(int *)(iVar2 + 8);
    if (((((*(unsigned int *)(iVar6 + 0x14) & 0xff00000) == 0x300000) && (param_4 == '\0')) ||
        ((param_2 != 0 && (param_2 != *(int *)(iVar2 + 0x34))))) ||
       ((cVar7 = fn_83010658(param_1,iVar6,param_3), cVar7 != '\0' ||
        ((*(unsigned int *)(iVar6 + 0x14) & 0xffffff00) == 0x5010000)))) {
      puVar5 = (unsigned int *)*puVar4;
      puVar1 = puVar4;
    }
    else {
      uVar3 = *(unsigned int *)(iVar6 + 0x10);
      uStack_80 = CONCAT44(iVar2,(((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF));
      *(unsigned int *)(iVar2 + 0x14) = *(unsigned int *)(param_1 + 0x90);
      *(unsigned int *)(iVar2 + 0x30) = 0;
      iVar6 = fn_83019E38(param_1 + 0x70,uVar3,&uStack_80);
      if (iVar6 != 1) {
        fn_8300F848(param_1,iVar2,0);
        fn_8300F2C0(param_1,iVar2);
      }
      puStack_78 = (unsigned int *)*puVar4;
      if (puVar4 == *(unsigned int **)(param_1 + 0x50)) {
        *(unsigned int **)(param_1 + 0x50) = puStack_78;
      }
      else {
        *puVar1 = puStack_78;
      }
      if (puVar4 == *(unsigned int **)(param_1 + 0x54)) {
        *(unsigned int **)(param_1 + 0x54) = puVar1;
      }
      uStack_80 = CONCAT44(puStack_78,puVar1);
      *puVar4 = *(unsigned int *)(param_1 + 0x58);
      *(unsigned int **)(param_1 + 0x58) = puVar4;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
      puVar5 = puStack_78;
      puStack_74 = puVar1;
    }
  }
  return;
}

