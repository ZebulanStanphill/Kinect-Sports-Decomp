#define true 1
extern int fn_82AA6648();
extern int fn_82AD6090();


unsigned int fn_82B50558(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  do {
    do {
      puVar1 = *(unsigned int **)(param_1 + 4);
      uVar7 = puVar1[1];
      if (((uVar7 & 1) != 0) || (uVar7 == 0)) {
        return 0;
      }
      if ((uVar7 & 1) == 0) {
        puVar5 = (unsigned int *)((*puVar1 & 0xfffffffe) - 4);
      }
      else {
        puVar5 = (unsigned int *)0x0;
      }
      uVar6 = puVar5[2] - 1;
      uVar7 = puVar5[puVar5[2] + 3];
      puVar5[2] = uVar6;
      if (uVar6 == 0) {
        *(unsigned int *)(puVar5[1] & 0xfffffffe) = *puVar5;
        *(unsigned int *)(*puVar5 & 0xfffffffe) = puVar5[1];
        fn_82AA6648(puVar1,puVar5,((unsigned __int64)puVar5[3] + 4 & 0x3fffffff) << 2);
      }
    } while (uVar7 == 0);
    do {
      if (*(int *)(uVar7 + 4) != 1) break;
      iVar2 = *(int *)(uVar7 + 0xc);
      if (iVar2 != 0) {
        puVar1 = *(unsigned int **)(param_1 + 4);
        if ((puVar1[1] & 1) == 0) {
          uVar6 = *puVar1 & 0xfffffffe;
          iVar4 = uVar6 - 4;
          if ((iVar4 == 0) || (*(unsigned int *)(uVar6 + 8) < *(int *)(uVar6 + 4) + 1U)) goto LAB_82b50648;
        }
        else {
LAB_82b50648:
          iVar4 = fn_82AD6090(puVar1,1);
        }
        iVar3 = *(int *)(iVar4 + 8);
        *(int *)(iVar4 + 8) = iVar3 + 1;
        *(int *)((iVar3 + 4) * 4 + iVar4) = iVar2;
      }
      uVar7 = *(unsigned int *)(uVar7 + 8);
    } while (uVar7 != 0);
    if (uVar7 != 0) {
      return uVar7;
    }
  } while( true );
}

