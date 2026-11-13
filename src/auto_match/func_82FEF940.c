extern int fn_82FF3568();
extern unsigned int iStack_38;
extern unsigned int uStack_34;
extern unsigned int uStack_40;


unsigned __int64 fn_82FEF940(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned char bVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned int uStack_40;
  int *piStack_3c;
  int iStack_38;
  unsigned char uStack_34;
  
  uVar1 = *(unsigned int *)(param_1 + 0x6c);
  if (((unsigned __int64)uVar1 != 0xfffffffffffffffc) &&
     ((*(unsigned int *)(uVar1 + 0x14) & 0x3e000000) == 0x4000000)) {
    piVar6 = *(int **)(uVar1 + 0x18);
    if ((piVar6 == (int *)0x0) ||
       (iVar3 = (**(int (***)())(*piVar6 + 8))(piVar6,0xffffffff831bc7f4), iVar3 == 0)) {
      return 2;
    }
    uVar2 = *(unsigned int *)(uVar1 + 0x1c);
    *(int *)(param_1 + 300) = iVar3;
    *(unsigned int *)(param_1 + 0x128) = uVar2;
    fn_82FF3568(piVar6);
  }
  uVar5 = 0;
  piVar6 = (int *)(param_1 + 0xec);
  do {
    (**(int (***)())(**(int **)(param_1 + 0x68) + 0xe8))
              (*(int **)(param_1 + 0x68),uVar5,&uStack_40,*(unsigned int *)(param_1 + 0x70));
    if (((uStack_40 != 0xffffffff) &&
        (iVar3 = (**(int (***)())(*piStack_3c + 8))(piStack_3c,0xffffffff831bc7f4),
        piStack_3c != (int *)0x0)) && (iVar3 != 0)) {
      *piVar6 = iVar3;
      piVar6[1] = iStack_38;
      piVar6[-1] = uStack_40;
      *(unsigned char *)(piVar6 + 2) = uStack_34;
      fn_82FF3568(piStack_3c);
    }
    uVar5 = uVar5 + 1;
    piVar6 = piVar6 + 4;
  } while ((uVar5 & 0xffffffff) < 4);
  bVar4 = (**(int (***)())(**(int **)(param_1 + 0x68) + 0xec))
                    (*(int **)(param_1 + 0x68),*(unsigned int *)(param_1 + 0x70));
  *(unsigned char *)(param_1 + 0xda) = bVar4 & 1 | *(unsigned char *)(param_1 + 0xda) & 0xfe;
  return 1;
}

