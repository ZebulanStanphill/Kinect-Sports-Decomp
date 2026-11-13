extern unsigned int *auStack_60;
extern int fn_8255CDF8();
extern int fn_825A1260();


void fn_8261CB98(int param_1,__int64 param_2)

{
  unsigned char auStack_60 [72];
  
  if ((*(int *)(param_1 + 0xb64) != 0) && (*(int *)(param_1 + 0xb10) == 0)) {
    fn_8255CDF8(param_1,auStack_60);
    fn_825A1260(param_2 + 0x7e8,param_1,4,*(unsigned int *)(param_1 + 0xb68),auStack_60);
  }
  return;
}

