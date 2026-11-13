extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82E5EE70();
extern int fn_82E7E7E0();
extern unsigned int lbl_82154EA8;


__int64 fn_82E5FC30(int *param_1,int *param_2)

{
  int *piVar1;
  __int64 lVar2;
  unsigned short auStack_50 [2];
  int *apiStack_4c [3];
  unsigned short auStack_40 [4];
  unsigned char *puStack_38;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    apiStack_4c[0] = (int *)0x0;
    lVar2 = (**(int (***)())(*param_2 + 0x10))(param_2,0xffffffff82154a58,0,apiStack_4c);
    if (((lVar2 < 0) &&
        (lVar2 = (**(int (***)())(*param_1 + 0x1c))(param_1,0xffffffff82154a58,apiStack_4c), -1 < lVar2)
        ) && (lVar2 = (**(int (***)())(*param_2 + 0x14))(param_2,apiStack_4c[0],0),
             piVar1 = apiStack_4c[0], -1 < lVar2)) {
      fn_82E7E7E0(auStack_40);
      auStack_50[0] = 0;
      auStack_40[0] = 0x1f;
      puStack_38 = &lbl_82154EA8;
      lVar2 = fn_82E5EE70(piVar1,0xffffffff82154ea8,auStack_50);
    }
    if (apiStack_4c[0] != (int *)0x0) {
      (**(int (***)())(*apiStack_4c[0] + 8))();
    }
  }
  return lVar2;
}

