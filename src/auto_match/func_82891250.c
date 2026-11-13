extern unsigned int *auStack_20;
extern int fn_8288BE40();
extern int fn_8288C798();
extern int fn_82890020();
extern unsigned int stack0x0000002f;
extern unsigned int uStack0000002f;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82891250(unsigned int *param_1,unsigned __int64 param_2,__int64 param_3,unsigned char param_4)

{
  __int64 lVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 uVar3;
  unsigned char uStack0000002f;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  struct { unsigned int first; unsigned int second; } stack_pair_28;

  unsigned char auStack_20 [8];
  
  uStack0000002f = param_4;
  lVar1 = fn_82890020();
  uStack_30 = *param_1;
  uStack_2c = 0;
  stack_pair_28.second = 0;
  stack_pair_28.first = uStack_30;
  puVar2 = (unsigned __int64 *)fn_8288BE40(auStack_20,&uStack_30,lVar1 + param_3);
  uVar3 = *puVar2;
  puVar2 = (unsigned __int64 *)fn_8288BE40(&uStack_30,&stack_pair_28.first,lVar1);
  fn_8288C798(*puVar2,uVar3,&stack0x0000002f);
  return;
}

