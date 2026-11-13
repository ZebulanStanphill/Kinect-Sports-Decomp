extern int fn_823F0828();
extern int fn_8288B760();


void fn_82404028(int *param_1,unsigned __int64 param_2)

{
  char cVar2;
  __int64 lVar1;
  
  cVar2 = fn_8288B760();
  if (cVar2 != '\0') {
    lVar1 = (**(int (***)())(*param_1 + 0x4c))(param_1);
    fn_823F0828(lVar1 + 0x30,param_2);
  }
  return;
}

