extern unsigned int *auStack_58;
extern int fn_828B5580();
extern int fn_828B55B0();


void fn_8232A7E0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int (**pcStack_60)();
  unsigned char auStack_58 [88];
  
  uVar2 = *(unsigned __int64 *)(param_2 + 8);
  uVar1 = fn_828B5580(auStack_58,param_7);
  pcStack_60 = (int (**)())(uVar2 >> 0x20);
  (*pcStack_60)(param_1,(unsigned __int64)*(unsigned int *)(param_2 + 0x10) + (uVar2 & 0xffffffff),param_3,param_4,
                param_5,param_6,uVar1,param_8);
  fn_828B55B0(param_7);
  return;
}

