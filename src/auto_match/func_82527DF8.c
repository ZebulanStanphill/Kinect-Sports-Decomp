extern int fn_82527F50();
extern int fn_82528210();


void fn_82527DF8(int param_1,int param_2,short param_3)

{
  unsigned char *puVar1;
  int *piVar2;
  int iVar3;
  unsigned char uVar4;
  int *piVar5;
  
  if (param_3 == 0) {
LAB_82527e94:
    if ((param_2 == 0) || (iVar3 = fn_82527F50(param_1), iVar3 == 0)) goto LAB_82527ec0;
    iVar3 = *(int *)(param_1 + 0x1b8);
    uVar4 = 1;
  }
  else {
    piVar2 = (int *)(**(int (***)())(**(int **)(param_2 + 0x8c0) + 0x30))();
    if (piVar2 == (int *)0x0) goto LAB_82527e94;
    piVar5 = piVar2 + 1;
    piVar2 = piVar5 + *piVar2 * 0x11;
    for (; piVar5 < piVar2; piVar5 = piVar5 + 0x11) {
      if (*(short *)piVar5 == param_3) goto LAB_82527e64;
    }
    piVar5 = (int *)0x0;
LAB_82527e64:
    if (piVar5 == (int *)0x0) goto LAB_82527e94;
    iVar3 = fn_82527F50(param_1);
    if (iVar3 == 0) goto LAB_82527ec0;
    iVar3 = *(int *)(param_1 + 0x1b8);
    uVar4 = 3;
    *(int **)(iVar3 + 4) = piVar5;
  }
  *(unsigned char *)(iVar3 + 1) = uVar4;
  *(unsigned char *)(iVar3 + 2) = 0;
  *(int *)(iVar3 + 0xc) = param_2;
LAB_82527ec0:
  puVar1 = *(unsigned char **)(param_1 + 0x1b8);
  if (puVar1 != (unsigned char *)0x0) {
    *puVar1 = puVar1[1];
    fn_82528210(param_1,*(unsigned int *)(puVar1 + 0xc));
    *(unsigned int *)(puVar1 + 0xc) = 0;
  }
  return;
}

