#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82FA5190();
extern int fn_8300F848();
extern int fn_83010770();
extern int fn_83019E38();
extern unsigned int lbl_831BC768;
extern unsigned int uStack_80;


void fn_83010BF0(int param_1,unsigned __int64 param_2,int param_3,char param_4)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  char cVar8;
  int iVar7;
  unsigned __int64 uStack_80;
  unsigned int *puStack_78;
  unsigned int *puStack_74;
  
  for (puVar1 = *(unsigned int **)(param_1 + 0x70); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    iVar7 = puVar1[2];
    iVar2 = *(int *)(iVar7 + 8);
    if (((((param_2 & 0xffffffff) == 0) ||
         (cVar8 = fn_83010770(param_1,param_2,*(unsigned int *)(iVar2 + 0x10)), cVar8 != '\0'))
        && ((uVar5 = *(unsigned int *)(iVar2 + 0x14) >> 8, (uVar5 & 0xff000) != 0x3000 || (param_4 != '\0'))
           )) && (((param_3 == 0 || (param_3 == *(int *)(iVar7 + 0x34))) && (uVar5 != 0x50100)))) {
      *(int *)(iVar7 + 0x30) = *(int *)(iVar7 + 0x30) + 1;
    }
  }
  puVar3 = *(unsigned int **)(param_1 + 0x50);
  puVar1 = (unsigned int *)0x0;
  while (puVar6 = puVar3, puVar6 != (unsigned int *)0x0) {
    puVar3 = (unsigned int *)puVar6[2];
    iVar7 = puVar3[2];
    if (((((param_2 & 0xffffffff) == 0) ||
         (cVar8 = fn_83010770(param_1,param_2,*(unsigned int *)(iVar7 + 0x10)), cVar8 != '\0'))
        && ((uVar5 = *(unsigned int *)(iVar7 + 0x14) >> 8, (uVar5 & 0xff000) != 0x3000 || (param_4 != '\0'))
           )) && (((param_3 == 0 || (param_3 == puVar3[0xd])) && (uVar5 != 0x50100)))) {
      uVar4 = *(unsigned int *)(iVar7 + 0x10);
      uStack_80 = CONCAT44(puVar3,(((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF));
      puVar3[5] = *(unsigned int *)(param_1 + 0x90);
      puVar3[0xc] = 0;
      iVar7 = fn_83019E38(param_1 + 0x70,uVar4,&uStack_80);
      if (iVar7 != 1) {
        fn_8300F848(param_1,puVar3,0);
        (**(int (***)())(*(int *)puVar3[2] + 8))();
        uVar4 = lbl_831BC768;
        (**(int (***)())*puVar3)(puVar3,0);
        fn_82FA5190(uVar4,puVar3);
      }
      puStack_78 = (unsigned int *)*puVar6;
      if (puVar6 == *(unsigned int **)(param_1 + 0x50)) {
        *(unsigned int **)(param_1 + 0x50) = puStack_78;
      }
      else {
        *puVar1 = puStack_78;
      }
      if (puVar6 == *(unsigned int **)(param_1 + 0x54)) {
        *(unsigned int **)(param_1 + 0x54) = puVar1;
      }
      uStack_80 = CONCAT44(puStack_78,puVar1);
      *puVar6 = *(unsigned int *)(param_1 + 0x58);
      *(unsigned int **)(param_1 + 0x58) = puVar6;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
      puVar3 = puStack_78;
      puStack_74 = puVar1;
    }
    else {
      puVar3 = (unsigned int *)*puVar6;
      puVar1 = puVar6;
    }
  }
  return;
}

