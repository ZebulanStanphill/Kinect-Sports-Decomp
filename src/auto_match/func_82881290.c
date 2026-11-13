extern int fn_82888170();
extern int fn_82888228();


unsigned __int64 fn_82881290(int *param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  
  if (*param_1 != *param_2) {
    do {
      piVar3 = (int *)(*param_1 + -8);
      fn_82888170(*(unsigned int *)(*param_1 + 0x10),2,0x2b,1);
      uVar2 = (**(int (***)())(*piVar3 + 4))(piVar3);
      fn_82888228(uVar2,0x2b,1);
      iVar1 = *(int *)*param_1;
      *param_1 = iVar1;
    } while (iVar1 != *param_2);
  }
  return param_3;
}

