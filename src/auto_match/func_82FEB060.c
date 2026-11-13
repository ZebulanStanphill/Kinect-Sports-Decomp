typedef unsigned char bool;
extern int fn_82FA5190();
extern int fn_83017108();
extern int fn_8301A7B8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642EC;
extern unsigned int lbl_832642FC;


char fn_82FEB060(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  char cVar4;
  char acStack_40 [64];
  
  RtlEnterCriticalSection(0xffffffff8326434c);
  puVar3 = (unsigned int *)fn_8301A7B8(lbl_832642EC,param_2);
  cVar4 = fn_83017108(lbl_832642FC,param_1,puVar3,param_3,acStack_40);
  *(bool *)param_4 = acStack_40[0] == '\0';
  if (puVar3 != (unsigned int *)0x0) {
    uVar1 = puVar3[0x17];
    puVar3[0x17] = (int)((unsigned __int64)uVar1 - 1);
    uVar2 = lbl_831BC768;
    if ((__int64)((unsigned __int64)uVar1 - 1) < 1) {
      (**(int (***)())*puVar3)(puVar3,0);
      fn_82FA5190(uVar2,puVar3);
    }
  }
  RtlLeaveCriticalSection(0xffffffff8326434c);
  return (cVar4 != '\x01') + '\x01';
}

