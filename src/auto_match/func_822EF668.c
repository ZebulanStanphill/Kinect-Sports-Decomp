extern int fn_8223CBE8();
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_8223FDB8();
extern int fn_82240070();
extern int fn_822EF598();


unsigned __int64 fn_822EF668(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int aiStack_30;
  
  iVar2 = *(int *)(*param_1 + 4) + (int)param_1;
  if (*(int *)(iVar2 + 0xc) == 0) {
    if (*(int *)(iVar2 + 0x3c) != 0) {
      fn_8223FDB8();
    }
    if ((param_2 == '\0') && ((*(unsigned int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x14) & 1) != 0)) {
      iVar2 = **(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x30);
      aiStack_30 = iVar2;
      fn_8223F508(iVar2);
      iVar3 = fn_8223CBE8(&aiStack_30);
      if ((iVar2 != 0) &&
         (puVar4 = (unsigned int *)fn_8223F5A0(iVar2), puVar4 != (unsigned int *)0x0)) {
        (**(int (***)())*puVar4)(puVar4,1);
      }
      piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
      if (*(int *)piVar1[8] == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)piVar1[0xc];
      }
      if (iVar2 < 1) {
        uVar5 = (**(int (***)())(*piVar1 + 0x18))();
      }
      else {
        uVar5 = (unsigned int)**(unsigned char **)piVar1[8];
      }
      while (uVar5 != 0xffffffff) {
        if ((*(unsigned short *)((uVar5 & 0xff) * 2 + *(int *)(iVar3 + 0x10)) & 0x48) == 0)
        goto LAB_822ef7cc;
        uVar5 = fn_822EF598(*(unsigned int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38));
      }
      iVar2 = *(int *)(*param_1 + 4) + (int)param_1;
      uVar5 = *(unsigned int *)(iVar2 + 0xc) | 1;
      if (*(int *)(iVar2 + 0x38) == 0) {
        uVar5 = *(unsigned int *)(iVar2 + 0xc) | 5;
      }
      fn_82240070(iVar2,uVar5,0);
    }
LAB_822ef7cc:
    iVar2 = *(int *)(*param_1 + 4) + (int)param_1;
    if (*(int *)(iVar2 + 0xc) == 0) {
      return 1;
    }
  }
  uVar5 = *(unsigned int *)(iVar2 + 0xc) | 2;
  if (*(int *)(iVar2 + 0x38) == 0) {
    uVar5 = *(unsigned int *)(iVar2 + 0xc) | 6;
  }
  fn_82240070(iVar2,uVar5,0);
  return 0;
}

