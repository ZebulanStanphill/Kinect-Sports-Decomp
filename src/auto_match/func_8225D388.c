extern int fn_8225DD28();
extern int fn_8225E360();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_8225D388(int param_1,unsigned __int64 param_2)

{
  unsigned int uStack0000001c;
  int aiStack_20 [2];
  
  uStack0000001c = (unsigned int)param_2;
  fn_8225E360(aiStack_20,param_1,&stack0x0000001c);
  if ((aiStack_20[0] != *(int *)(param_1 + 4)) &&
     (*(char *)(*(int *)(aiStack_20[0] + 0x10) + 0xd8) != '\0')) {
    fn_8225DD28(param_1,param_2,0);
  }
  return;
}

