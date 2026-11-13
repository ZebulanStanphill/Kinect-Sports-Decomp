extern unsigned int *auStack_30;
extern int fn_82D02A58();
extern int fn_82D02B68();
extern int fn_82D03028();


void fn_82D035F8(__int64 param_1)

{
  unsigned int uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned char auStack_30 [48];
  
  iVar2 = (int)param_1;
  uVar8 = param_1 + 0xa4;
  *(unsigned int *)(*(int *)(iVar2 + 0x10) + 4) = *(unsigned int *)(iVar2 + 0x14) | 1;
  *(int *)(*(int *)(iVar2 + 0x14) + *(int *)(iVar2 + 0x10)) = *(int *)(iVar2 + 0x14);
  uVar5 = (unsigned __int64)*(unsigned int *)(iVar2 + 0xa8);
  if (uVar5 != (uVar8 & 0xffffffff)) {
    do {
      piVar6 = (int *)uVar5;
      iVar4 = piVar6[4];
      if (((*(unsigned int *)(iVar4 + 4) >> 1 & 1) == 0) &&
         ((*(unsigned int *)(iVar4 + 4) & 0xfffffffc) + iVar4 == piVar6[5] + -0x10)) {
        uVar1 = piVar6[1];
        *(unsigned int *)(*piVar6 + 4) = uVar1;
        *(int *)piVar6[1] = *piVar6;
        if (iVar4 == *(int *)(iVar2 + 0x10)) {
          *(unsigned int *)(iVar2 + 0x14) = 0;
          *(int *)(iVar2 + 0x10) = iVar2 + 0x9c;
        }
        else {
          fn_82D02B68(param_1);
        }
        (**(int (***)())(**(int **)(iVar2 + 0x98) + 0x10))
                  (*(int **)(iVar2 + 0x98),uVar5,*(unsigned int *)((int)uVar5 + 0xc));
      }
      else {
        uVar1 = piVar6[1];
      }
      uVar5 = (unsigned __int64)uVar1;
    } while (uVar5 != (uVar8 & 0xffffffff));
  }
  if ((unsigned __int64)*(unsigned int *)(iVar2 + 0xa8) == (uVar8 & 0xffffffff)) {
    *(unsigned int *)(iVar2 + 0x14) = 0;
    *(int *)(iVar2 + 0x10) = iVar2 + 0x9c;
  }
  else {
    pcVar3 = (char *)(**(int (***)())(**(int **)(iVar2 + 0x98) + 4))(auStack_30);
    if (*pcVar3 == '\0') {
      uVar9 = (unsigned int)(param_1 + 0x9cU);
      if ((unsigned __int64)*(unsigned int *)(iVar2 + 0x10) != (param_1 + 0x9cU & 0xffffffff)) {
        fn_82D02A58(param_1,(unsigned __int64)*(unsigned int *)(iVar2 + 0x10),*(unsigned int *)(iVar2 + 0x14));
        *(unsigned int *)(iVar2 + 0x10) = uVar9;
        *(unsigned int *)(iVar2 + 0x14) = 0;
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(iVar2 + 0xa8);
      iVar4 = 0;
      if (uVar5 != (uVar8 & 0xffffffff)) {
        do {
          iVar7 = *(int *)((int)uVar5 + 0x14);
          piVar6 = (int *)(iVar7 + -0x10);
          if (((*(unsigned int *)(iVar7 + -0xc) & 1) == 0) &&
             ((iVar7 = (int)piVar6 - *piVar6, iVar4 == 0 ||
              ((*(unsigned int *)(iVar4 + 4) & 0xfffffffc) < (*(unsigned int *)(iVar7 + 4) & 0xfffffffc))))) {
            iVar4 = iVar7;
          }
          uVar5 = (unsigned __int64)*(unsigned int *)((int)uVar5 + 4);
        } while (uVar5 != (uVar8 & 0xffffffff));
        if (iVar4 != 0) {
          fn_82D02B68(param_1);
          *(int *)(iVar2 + 0x10) = iVar4;
          *(unsigned int *)(iVar2 + 0x14) = *(unsigned int *)(iVar4 + 4) & 0xfffffffc;
          return;
        }
      }
      *(unsigned int *)(iVar2 + 0x10) = uVar9;
      *(unsigned int *)(iVar2 + 0x14) = 0;
    }
    else if (0x7fff < *(unsigned int *)(iVar2 + 0x14)) {
      fn_82D03028(auStack_30,param_1,
                    ((unsigned __int64)*(unsigned int *)(iVar2 + 0x10) -
                    (unsigned __int64)*(unsigned int *)(*(int *)(iVar2 + 0xa8) + 0x10)) + 0x120);
    }
  }
  return;
}

