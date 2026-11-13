extern int fn_8270C708();
extern unsigned char fn_8270CED8(int,int);
extern void *memcpy(void *, const void *, unsigned int);


int fn_8270CF78(int param_1,void *param_2,int param_3)

{
  unsigned char cVar2;
  int uVar1;
  __int64 lVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x10) == 2) || (cVar2 = fn_8270CED8(param_1,2), cVar2 != '\0')) {
    iVar4 = (int)param_3;
    if ((0x1ff8 - *(int *)(param_1 + 0x14) >= iVar4) || (fn_8270C708(param_1), iVar4 <= 0x1000)) {
      memcpy((void *)(*(unsigned int *)(param_1 + 0xc) + *(unsigned int *)(param_1 + 0x14)),
                   param_2,param_3);
      *(int *)(param_1 + 0x14) = iVar4 + *(int *)(param_1 + 0x14);
      return param_3;
    }
    uVar1 = (*(int (**)())(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),param_2,param_3);
    if (uVar1 <= 0) {
      return uVar1;
    }
    lVar3 = (__int64)(int)uVar1 + *(__int64 *)(param_1 + 0x20);
  }
  else {
    uVar1 = (*(int (**)())(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),param_2,param_3);
    if (uVar1 <= 0) {
      return uVar1;
    }
    lVar3 = (__int64)(int)uVar1 + *(__int64 *)(param_1 + 0x20);
  }
  *(__int64 *)(param_1 + 0x20) = lVar3;
  return uVar1;
}

