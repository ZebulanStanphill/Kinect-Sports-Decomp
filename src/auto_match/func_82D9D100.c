extern unsigned int *auStack_40;
extern int fn_82CE5410();
extern int fn_82D81240();


void fn_82D9D100(int param_1,int param_2,unsigned __int64 param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned char auStack_40 [1];
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4c) - 1;
  if (-1 < (__int64)uVar3) {
    lVar4 = (uVar3 & 0x3fffffff) << 2;
    do {
      cVar2 = *(char *)(*(int *)(*(int *)(param_1 + 0x48) + (int)lVar4) + 0xd0);
      if (cVar2 < param_2) {
        iVar1 = (int)cVar2;
        if ((int)cVar2 < *param_4) {
          iVar1 = *param_4;
        }
        *param_4 = iVar1;
      }
      else {
        fn_82D81240(auStack_40,*(unsigned int *)(param_1 + 0x18));
        iVar1 = fn_82CE5410();
        cVar2 = (**(int (***)())(**(int **)(iVar1 + 0x10) + 0x24))(*(int **)(iVar1 + 0x10),param_3);
        if (cVar2 == '\0') {
          return;
        }
      }
      uVar3 = uVar3 - 1;
      lVar4 = lVar4 + -4;
    } while (-1 < (__int64)uVar3);
  }
  return;
}

