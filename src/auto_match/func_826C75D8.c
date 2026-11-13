typedef unsigned char bool;
extern int fn_82703C40();


bool fn_826C75D8(int *param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned char cVar1;
  
  cVar1 = (*(int (**)())(*param_1 + 0x114))(param_1,param_2,param_3);
  if (cVar1 == '\0') return 0;
  {
    (*(int (**)())(*param_3 + 0x70))(param_3);
    (*(int (**)())(*param_1 + 0x40))(param_1);
    fn_82703C40();
    *(unsigned int *)(param_1[0x28] + 0xb00) = *(unsigned int *)(param_1[0x28] + 0xb00) | 0x400;
  }
  return 1;
}

