extern unsigned int *auStack_1c;
extern int fn_8256A790();
extern int strncmp();
extern unsigned int uStack_20;


void fn_825B0530(unsigned __int64 param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uStack_20;
  unsigned int auStack_1c;
  
  if (param_2[2] != 0) {
    iVar1 = strncmp(*param_2,"AMID_BRS_",9);
    if (iVar1 == 0) {
      uStack_20 = param_2[3];
      auStack_1c = param_2[2];
      fn_8256A790(&uStack_20,&auStack_1c);
    }
  }
  return;
}

