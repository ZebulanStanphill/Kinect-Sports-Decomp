extern int fn_82E2F3F8();
extern int fn_82E2F4C8();
extern int fn_82E2F530();
extern int fn_82E569B0();


unsigned __int64 fn_82E2FB40(int *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  int * apiStack_30;
  
  (**(int (***)())(*param_1 + 0x50))();
  uVar2 = 0;
  apiStack_30 = (int *)0x0;
  if (param_1[0x3f] != 0) {
    do {
      iVar1 = fn_82E2F3F8(param_1 + 0x25,uVar2,&apiStack_30);
      if (iVar1 != 0) {
        if (apiStack_30 != (int *)0x0) {
          (**(int (***)())(*apiStack_30 + 8))();
          apiStack_30 = (int *)0x0;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[0x3f]);
  }
  fn_82E569B0(param_1 + 0x25,0);
  param_1[0x3f] = 0;
  uVar2 = 0;
  apiStack_30 = (int *)0x0;
  if (param_1[0x5a] != 0) {
    do {
      iVar1 = fn_82E2F4C8(param_1 + 0x40,uVar2,&apiStack_30);
      if (iVar1 != 0) {
        if (apiStack_30 != (int *)0x0) {
          (**(int (***)())(*apiStack_30 + 8))();
          apiStack_30 = (int *)0x0;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[0x5a]);
  }
  fn_82E569B0(param_1 + 0x40,0);
  param_1[0x5a] = 0;
  uVar2 = 0;
  apiStack_30 = (int *)0x0;
  if (param_1[0x75] != 0) {
    do {
      iVar1 = fn_82E2F530(param_1 + 0x5b,uVar2,&apiStack_30);
      if (iVar1 != 0) {
        if (apiStack_30 != (int *)0x0) {
          (**(int (***)())(*apiStack_30 + 8))();
          apiStack_30 = (int *)0x0;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[0x75]);
  }
  fn_82E569B0(param_1 + 0x5b,0);
  param_1[0x75] = 0;
  if ((int *)param_1[0x76] != (int *)0x0) {
    (**(int (***)())(*(int *)param_1[0x76] + 8))();
    param_1[0x76] = 0;
  }
  return 0;
}

