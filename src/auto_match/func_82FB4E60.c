typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82FF6060();
extern int fn_8301A5D0();


unsigned char fn_82FB4E60(int param_1,int *param_2,unsigned int *param_3,int *param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  bool bVar6;
  unsigned int *puVar7;
  char cVar9;
  int iVar8;
  unsigned char uVar10;
  
  for (puVar1 = *(unsigned int **)(param_1 + 0x54);
      (puVar1 != (unsigned int *)0x0 && (puVar1[1] != *(int *)(*(int *)(param_1 + 0x74) + 4)));
      puVar1 = (unsigned int *)*puVar1) {
  }
  puVar1 = (unsigned int *)*puVar1;
  do {
    if (puVar1 == (unsigned int *)0x0) {
      uVar10 = 0;
      if ((int *)param_4[1] != (int *)*param_4) {
        puVar3 = *(unsigned int **)(param_1 + 0x54);
        puVar1 = (unsigned int *)0x0;
        while ((puVar7 = puVar3, puVar7 != (unsigned int *)0x0 && (puVar7[1] != *(int *)*param_4))) {
          puVar1 = puVar7;
          puVar3 = (unsigned int *)*puVar7;
        }
        uVar10 = *(unsigned char *)(puVar7[1] + 0x50);
        do {
          puVar3 = (unsigned int *)*puVar7;
          fn_82FF6060((unsigned int *)(param_1 + 0x54),puVar7,puVar1);
          puVar7 = puVar3;
        } while (puVar3 != (unsigned int *)0x0);
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0x58) + 4);
      if (iVar4 != *(int *)(*(int *)(param_1 + 0x74) + 4)) {
        iVar8 = (**(int (***)())(**(int **)(iVar4 + 0x1c) + 0x18))();
        *param_2 = iVar8;
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(iVar8 + 4);
        }
        param_2[1] = iVar8;
        *param_3 = *(unsigned int *)(iVar4 + 0x48);
      }
      return uVar10;
    }
    if ((*(unsigned char *)(*(int *)(puVar1[1] + 0x1c) + 0x34) & 0x80) == 0) {
      cVar9 = (**(int (***)())(**(int **)(puVar1[1] + 0x40) + 0x28))();
      bVar6 = true;
      if (cVar9 == '\0') goto LAB_82fb4ef4;
    }
    else {
LAB_82fb4ef4:
      bVar6 = false;
    }
    if (bVar6) {
      uVar2 = puVar1[1];
      uVar5 = param_4[1] - *param_4 >> 2;
      if ((((unsigned int)param_4[2] <= uVar5) && (cVar9 = fn_8301A5D0(param_4,8), cVar9 == '\0')) ||
         ((unsigned int)param_4[2] <= uVar5)) goto LAB_82fb4f64;
      puVar3 = (unsigned int *)param_4[1];
      param_4[1] = (int)(puVar3 + 1);
      if (puVar3 == (unsigned int *)0x0) goto LAB_82fb4f64;
      *puVar3 = uVar2;
    }
    else {
LAB_82fb4f64:
      param_4[1] = *param_4;
    }
    puVar1 = (unsigned int *)*puVar1;
  } while( true );
}

