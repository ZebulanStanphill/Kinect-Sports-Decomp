extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_82E4FE40();
extern int fn_82E5A2E0();
extern int fn_82E5EE70();
extern unsigned int uStack_2c;


__int64 fn_82E5EF70(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  __int64 lVar2;
  unsigned short auStack_30;
  unsigned int uStack_2c;
  unsigned int auStack_28 [1];
  
  if (((param_1 == (int *)0x0) || ((param_2 & 0xffffffff) == 0)) || ((param_3 & 0xffffffff) == 0)) {
    lVar2 = -0x7fffbffd;
  }
  else {
    lVar2 = 0;
    uStack_2c = 0;
    auStack_28[0] = 0;
    auStack_30 = 0;
    iVar1 = (**(int (***)())(*param_1 + 0x34))(param_1,0xffffffff8214bff0,&uStack_2c,auStack_28);
    if ((iVar1 == 0) && (lVar2 = fn_82E5EE70(param_2,uStack_2c,&auStack_30), -1 < lVar2)) {
      lVar2 = fn_82E5A2E0(param_3,auStack_30);
    }
    fn_82E4FE40(uStack_2c);
  }
  return lVar2;
}

