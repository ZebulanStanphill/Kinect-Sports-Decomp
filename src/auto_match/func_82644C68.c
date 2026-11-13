extern int fn_82643B08();
extern int fn_826441E0();
extern int fn_82644B28();
extern int fn_82644DF0();
extern int fn_8264B568();


void fn_82644C68(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar4;
  __int64 lVar3;
  int iVar5;
  
  uVar1 = *(unsigned int *)(param_1 + 0x3b24);
  iVar5 = *(int *)(param_1 + 0x30) + 4;
  if ((*(unsigned char *)(param_1 + 0x2abd) & 0x20) == 0) {
    if ((*(unsigned char *)(param_1 + 0x2abc) & 0x80) == 0) {
      if (*(int *)(param_1 + 0x3460) == 0) {
        lVar3 = fn_82644B28(param_1,*(int *)(param_1 + 0x30));
        iVar5 = fn_82644DF0(param_1,lVar3 + 4,
                                  ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1fffffff),
                                  (int)((int)(lVar3 + 4) - uVar1) >> 2,0,param_1 + 0x3500,0);
      }
      else {
        uVar2 = (int)(iVar5 - uVar1) >> 2;
        if (uVar2 != 0) {
          puVar4 = *(unsigned int **)(param_1 + 0x350c);
          if (*(unsigned int **)(param_1 + 0x3510) < puVar4 + 2) {
            puVar4 = (unsigned int *)fn_82643B08(param_1 + 0x3500);
          }
          puVar4[1] = ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1fffffff);
          *puVar4 = uVar2 | 0x81000000;
          *(unsigned int **)(param_1 + 0x350c) = puVar4 + 2;
        }
      }
    }
    else if (((*(int *)(param_1 + 0x35a0) != 0) &&
             (*(int *)(*(int *)(param_1 + 0x35a0) + 0x98) == 0)) &&
            (uVar2 = (int)(iVar5 - uVar1) >> 2, uVar2 != 0)) {
      puVar4 = *(unsigned int **)(param_1 + 0x35b4);
      if (*(unsigned int **)(param_1 + 0x35b8) <= puVar4) {
        puVar4 = (unsigned int *)fn_8264B568(param_1);
      }
      *puVar4 = uVar2 | 0x81000000;
      puVar4[1] = ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1fffffff);
      *(unsigned int **)(param_1 + 0x35b4) = puVar4 + 2;
    }
  }
  if (*(unsigned int *)(param_1 + 0x38) < (iVar5 + 0x1fU & 0xffffffe0)) {
    *(int *)(param_1 + 0x30) = iVar5 + -4;
    fn_826441E0(param_1,0);
  }
  else {
    uVar1 = iVar5 + 0x1fU & 0xffffffe0;
    *(unsigned int *)(param_1 + 0x3b24) = uVar1;
    *(unsigned int *)(param_1 + 0x30) = uVar1 - 4;
  }
  return;
}

