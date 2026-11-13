extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82DB0430();


void fn_82DA8438(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = (int)*(char *)(*param_2 + 5) + *param_2;
  iVar4 = (int)*(char *)(param_2[1] + 5) + param_2[1];
  iVar5 = *(char *)(iVar3 + 0x10) + iVar3;
  iVar6 = *(char *)(iVar4 + 0x10) + iVar4;
  if ((((*(char *)(iVar2 + 0x68) != '\0') && (*(char *)(iVar5 + 0xe8) != '\x05')) &&
      (*(char *)(iVar6 + 0xe8) != '\x05')) && (*(int *)(iVar5 + 0xcc) != *(int *)(iVar6 + 0xcc))) {
    iVar3 = fn_82CE5410();
    if (*(unsigned int *)(iVar2 + 0x70) != (*(unsigned int *)(iVar2 + 0x74) & 0x3fffffff)) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x70) * 8 + *(int *)(iVar2 + 0x6c));
      if (piVar7 != (int *)0x0) {
        *piVar7 = *param_2;
        piVar7[1] = param_2[1];
      }
      *(int *)(iVar2 + 0x70) = *(int *)(iVar2 + 0x70) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),(int *)(iVar2 + 0x6c),8);
  }
  piVar7 = *(int **)(*(int *)(iVar2 + 0xc) + 0x78);
  iVar2 = *piVar7;
  cVar1 = *(char *)(*(char *)(iVar3 + 0x1a) * 10 + (int)*(char *)(iVar4 + 0x1a) + iVar2 + 0x1bb0);
  if (cVar1 != '\0') {
    piVar7[5] = *(int *)(cVar1 * 0x40 + iVar2 + 0x1c30);
    fn_82DB0430();
  }
  return;
}

