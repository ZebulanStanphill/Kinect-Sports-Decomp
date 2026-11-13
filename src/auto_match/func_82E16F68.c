extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82E0E240();
extern int fn_82E1BD60();


void fn_82E16F68(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  
  uVar5 = (unsigned __int64)*param_3;
  if ((uVar5 != 0) && (iVar1 = fn_82CEA280(param_1 + 0x18,uVar5,0xffffffffffffffff), iVar1 != -1))
  {
    do {
      puVar4 = (unsigned int *)(iVar1 * 8 + *(int *)(param_1 + 0xc));
      if ((unsigned int *)*puVar4 == param_3) {
        if ((param_2 & 0xffffffff) == uVar5) {
          return;
        }
        fn_82E0E240(param_1 + 0xc,uVar5);
        break;
      }
      iVar1 = puVar4[1];
    } while (iVar1 != -1);
  }
  if ((param_2 & 0xffffffff) != 0) {
    uVar2 = fn_82CEA280(param_1 + 0x18,param_2,0xffffffffffffffff);
    iVar1 = fn_82E1BD60(param_1 + 0xc);
    puVar4 = (unsigned int *)(iVar1 * 8 + *(int *)(param_1 + 0xc));
    *puVar4 = param_3;
    puVar4[1] = uVar2;
    iVar3 = fn_82CE5410();
    fn_82CEA160(param_1 + 0x18,*(unsigned int *)(iVar3 + 0x10),param_2,iVar1);
  }
  *param_3 = (unsigned int)param_2;
  return;
}

