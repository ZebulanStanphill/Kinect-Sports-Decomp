extern int fn_82564458();
extern int fn_825925D8();


void fn_825DA2B8(int param_1,int *param_2)

{
  int iVar1;
  
  fn_825925D8();
  if (*param_2 == 0x33) {
    *(unsigned int *)(param_1 + 0x8ac) = 0;
  }
  else if (*param_2 == 0x45) {
    fn_82564458(param_1,0x27,0);
    iVar1 = *(int *)(param_1 + 0xb84);
    if (((0 < iVar1) && (iVar1 < 0x9e)) && (iVar1 != 0)) {
      fn_82564458(param_1,iVar1,0);
    }
  }
  return;
}

