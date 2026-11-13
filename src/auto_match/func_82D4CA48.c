extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_82D4C580();
extern int fn_82D4C8B0();


char * fn_82D4CA48(char *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [32];
  
  uVar1 = fn_82D4C8B0(param_3,param_2 + 0x20,*(unsigned int *)(param_2 + 0x10),auStack_50,
                          auStack_70);
  lVar2 = fn_82D4C580(param_2 + 0x20,auStack_50,auStack_70,uVar1,param_3,param_4);
  *param_1 = (char)(lVar2 + 1) - ((char)lVar2 + (lVar2 + 1 == 0));
  return param_1;
}

