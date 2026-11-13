extern unsigned int *auStack_40;
extern int fn_8223FD30();
extern int fn_8223FE60();
extern int fn_8223FFB8();
extern int fn_82240070();


int * fn_8223B728(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned char auStack_40 [4];
  char cStack_3c;
  
  uVar1 = param_2[4];
  uVar5 = 0;
  uVar4 = *(unsigned __int64 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20);
  if (((__int64)uVar4 < 1) || (uVar4 = uVar4 & 0xffffffff, uVar6 = uVar4 - uVar1, uVar4 <= uVar1))
  {
    uVar6 = 0;
  }
  fn_8223FD30(auStack_40,param_1);
  if (cStack_3c == '\0') {
    uVar5 = 4;
  }
  else {
    if ((*(unsigned int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x14) & 0x1c0) != 0x40) {
      uVar4 = uVar6 & 0xffffffff;
      while (uVar4 != 0) {
        iVar3 = fn_8223FFB8(*(unsigned int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),
                                *(unsigned char *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
        if (iVar3 == -1) {
          uVar5 = 4;
          goto LAB_8223b7f4;
        }
        uVar6 = uVar6 - 1;
        uVar4 = uVar6;
      }
    }
    if (0xf < (unsigned int)param_2[5]) {
      param_2 = (unsigned int *)*param_2;
    }
    piVar2 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
    uVar4 = (**(int (***)())(*piVar2 + 0x24))(piVar2,param_2,(unsigned __int64)uVar1);
    if (uVar4 == uVar1) {
LAB_8223b7f4:
      uVar4 = uVar6 & 0xffffffff;
      while (uVar4 != 0) {
        iVar3 = fn_8223FFB8(*(unsigned int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),
                                *(unsigned char *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
        if (iVar3 == -1) {
          uVar5 = 4;
          break;
        }
        uVar6 = uVar6 - 1;
        uVar4 = uVar6;
      }
    }
    else {
      uVar5 = 4;
    }
    *(unsigned __int64 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20) = 0;
  }
  iVar3 = *(int *)(*param_1 + 4) + (int)param_1;
  if (uVar5 != 0) {
    uVar5 = *(unsigned int *)(iVar3 + 0xc) | uVar5;
    if (*(int *)(iVar3 + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    fn_82240070(iVar3,uVar5,0);
  }
  fn_8223FE60(auStack_40);
  return param_1;
}

