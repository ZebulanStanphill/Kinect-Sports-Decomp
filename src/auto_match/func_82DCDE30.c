typedef unsigned char bool;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82DDEEC0();


bool fn_82DCDE30(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  char *pcVar1;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [80];
  
  pcVar1 = (char *)fn_82DDEEC0(auStack_70,auStack_60,param_1,param_2,param_3,param_4);
  return *pcVar1 != '\0';
}

