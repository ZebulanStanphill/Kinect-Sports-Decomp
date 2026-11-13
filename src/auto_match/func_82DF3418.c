extern int fn_82CE5410();
extern int fn_82CED628();
extern int fn_82D94AC8();
extern int fn_82DF2E48();
extern int fn_82D94A38();
extern int fn_82D949A8();
extern int fn_82D94B58();
extern unsigned int uStack0000001c;


void fn_82DF3418(int param_1,unsigned int param_2)

{
  int iVar3;
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar4;
  unsigned int uStack0000001c;

  uStack0000001c = param_2;
  iVar3 = fn_82CE5410();
  iVar3 = (**(int (***)())(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x44);
  *(unsigned short *)(iVar3 + 4) = 0x44;
  uVar1 = fn_82D94B58();
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar4 = 0;
    do {
      fn_82D94AC8(uVar1,*(unsigned int *)(iVar4 + *(int *)(param_1 + 8)));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar4 = 0;
    do {
      fn_82D949A8(uVar1,*(unsigned int *)(iVar4 + *(int *)(param_1 + 0x20)));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x24));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar4 = 0;
    do {
      fn_82D94A38(uVar1,*(unsigned int *)(iVar4 + *(int *)(param_1 + 0x14)));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar4 = 0;
    do {
      fn_82DF2E48(uVar1,*(unsigned int *)(*(int *)(param_1 + 0x2c) + iVar4));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x30));
  }
  iVar3 = fn_82CE5410();
  iVar3 = (**(int (***)())(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x44);
  *(unsigned short *)(iVar3 + 4) = 0x44;
  lVar2 = fn_82D94B58();
                    /* WARNING: Subroutine does not return */
  fn_82CED628(lVar2 + 0x38,0xffffffff821458e0);
}
