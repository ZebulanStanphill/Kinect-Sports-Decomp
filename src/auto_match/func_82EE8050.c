extern int fn_82E4FE40();
extern int fn_82EEB538();


void fn_82EE8050(unsigned int *param_1)

{
  unsigned int iVar1;
  
  if (*param_1 != 0) {
    fn_82E4FE40(*param_1);
  }
  iVar1 = param_1[6];
  if (iVar1 != 0) {
    fn_82EEB538(iVar1);
    fn_82E4FE40(iVar1);
  }
  return;
}

