typedef unsigned char bool;
extern int fn_83022188();
extern int fn_830221F8();
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_8301BC18(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  bool bVar2;
  
  bVar2 = (float)param_2[0xcc] != lbl_821AAD20;
  if ((!bVar2) && (*(char *)(param_1 + 0x3f) == '\0')) {
    *(bool *)(param_1 + 0x3f) = bVar2;
    return 1;
  }
  *(bool *)(param_1 + 0x3f) = bVar2;
  if (*param_2 == 0) {
    uVar1 = 2;
  }
  else {
    fn_830221F8((double)(float)param_2[0xcc],param_1 + 0x1a4);
    fn_83022188(param_1 + 0x1a4,param_2);
    uVar1 = 1;
  }
  return uVar1;
}

