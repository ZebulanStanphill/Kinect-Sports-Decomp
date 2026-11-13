extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern int fn_82898540();
extern int fn_828999E8();
extern int fn_8289BBE8();


__int64 fn_8289BFA8(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  char cVar4;
  unsigned int *puVar3;
  unsigned __int64 uVar5;
  unsigned char auStack_20 [4];
  unsigned int *puStack_1c;
  unsigned int auStack_18 [2];
  
  if (((*(int **)(param_1 + 0x20) != (int *)0x0) &&
      (iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0xc))(), iVar2 != 0)) &&
     (cVar4 = fn_82898540(param_1), cVar4 != '\0')) {
    puStack_1c = *(unsigned int **)(param_1 + 0x48);
    auStack_18[0] = *puStack_1c;
    auStack_20[0] = 0;
    fn_8289BBE8(param_1 + 0x44,auStack_18,&puStack_1c,auStack_20);
    puVar1 = *(unsigned int **)(param_1 + 0x48);
    puStack_1c = puVar1;
    puVar3 = (unsigned int *)fn_828999E8(auStack_18,*puVar1,puVar1,param_1);
    if (((unsigned int *)*puVar3 != puVar1) &&
       (uVar5 = (unsigned __int64)(unsigned int)((unsigned int *)*puVar3)[6], uVar5 != 0)) {
      return uVar5 - 0x50;
    }
  }
  return 0;
}

