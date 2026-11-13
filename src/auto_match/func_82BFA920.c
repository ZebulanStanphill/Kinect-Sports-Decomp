extern int fn_82F664B0();
extern int fn_82F6D460();


int fn_82BFA920(char *param_1,char *param_2,char *param_3)

{
  int iVar2;
  int iVar3;
  
  if (param_1 != 0 && param_2 != 0) {
    iVar2 = fn_82F6D460(param_1,0x104);
    iVar3 = fn_82F6D460(param_2,0x104);
    if ((unsigned int)(iVar3 + iVar2) <= 0x102) {
      fn_82F664B0(param_3,0x104,param_1);
      if (param_3[iVar2 - 1] != '\\') {
        param_3[iVar2] = '\\';
        iVar2 = iVar2 + 1;
      }
      fn_82F664B0(param_3 + iVar2,0x104 - iVar2,param_2);
      return 1;
    }
  }
  return 0;
}
