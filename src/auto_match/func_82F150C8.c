extern int fn_82F02410();
extern int fn_82F146D0();


unsigned int fn_82F150C8(int param_1,unsigned __int64 param_2)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  
  iVar6 = 0;
  *(unsigned int *)(param_1 + 0x58) = *(unsigned int *)(param_1 + 0x54);
  if (0 < *(int *)(param_1 + 0x5c)) {
    do {
      uVar5 = **(unsigned int **)(param_1 + 0x58) >> 0x12 & 0x3f;
      if ((uVar5 == 8) || (uVar5 == 10)) {
        iVar3 = *(int *)((uVar5 + 10) * 4 + param_1);
        puVar2 = *(unsigned int **)(*(int *)(iVar3 + 0x48) + 0x58);
        bVar1 = *(unsigned char *)puVar2;
        if (*(int *)(iVar3 + 8) != 10) {
          iVar4 = (unsigned int)bVar1 * 4;
          fn_82F02410(param_2,*(unsigned int *)(*(int *)(iVar3 + 0x3c) + iVar4),
                            *(unsigned int *)(*(int *)(iVar3 + 0x38) + iVar4));
          if (*(int *)(iVar3 + 8) == 8) {
            fn_82F02410(param_2,*puVar2 >> 1 & 0x1ffff,
                              *(unsigned char *)(*(int *)(iVar3 + 4) + (unsigned int)bVar1));
          }
        }
      }
      else {
        fn_82F146D0(*(unsigned int *)((uVar5 + 10) * 4 + param_1),param_2);
      }
      iVar6 = iVar6 + 1;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 4;
    } while (iVar6 < *(int *)(param_1 + 0x5c));
  }
  return *(unsigned int *)(param_1 + 0x5c);
}

