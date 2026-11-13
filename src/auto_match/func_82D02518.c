extern int fn_82D02398();


unsigned char * fn_82D02518(unsigned char *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      if (*(int **)(param_2 + 8) == (int *)0x0) {
        puVar3 = *(unsigned int **)(param_2 + 0xc);
        if (puVar3 == (unsigned int *)0x0) goto LAB_82d025f4;
        iVar1 = fn_82D02398(param_2,puVar3);
        if (iVar1 == 0) goto LAB_82d025c4;
        *(unsigned int *)(param_2 + 0xc) = *puVar3;
        *puVar3 = *(unsigned int *)(param_2 + 0x10);
        *(unsigned int **)(param_2 + 0x10) = puVar3;
      }
      else {
        puVar3 = (unsigned int *)**(int **)(param_2 + 8);
        if (puVar3 == (unsigned int *)0x0) {
LAB_82d025f4:
          *param_4 = iVar2;
          *(unsigned int *)(param_2 + 8) = 0;
          *param_1 = 1;
          return param_1;
        }
        iVar1 = fn_82D02398(param_2,puVar3);
        if (iVar1 == 0) {
LAB_82d025c4:
          *(unsigned int **)(param_2 + 8) = puVar3;
        }
        else {
          **(unsigned int **)(param_2 + 8) = *puVar3;
          *puVar3 = *(unsigned int *)(param_2 + 0x10);
          *(unsigned int **)(param_2 + 0x10) = puVar3;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  *param_4 = iVar2;
  *param_1 = *(int *)(param_2 + 8) == 0;
  return param_1;
}

