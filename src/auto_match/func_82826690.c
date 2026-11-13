extern void fn_828278F8(void);
extern int fn_82822510();
extern unsigned int uStack_20;


void fn_82826690(__int64 param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uStack_20;
  int aiStack_1c;
  
  uStack_20 = param_2;
  fn_82822510(param_1 + 0x2fc,fn_828278F8,&uStack_20,&aiStack_1c);
  *param_3 = *(unsigned int *)(aiStack_1c + 0x14);
  return;
}

