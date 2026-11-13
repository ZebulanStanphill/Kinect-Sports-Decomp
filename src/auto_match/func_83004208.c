extern int fn_83032B08();
extern int fn_83032D88();


int * fn_83004208(int *param_1,unsigned int param_2)

{
  unsigned int iVar1;
  
  if (param_2 != 0) {
    fn_83032B08(param_2);
  }
  iVar1 = *param_1;
  *param_1 = (int)param_2;
  if (iVar1 != 0) {
    fn_83032D88(iVar1);
  }
  return param_1;
}

