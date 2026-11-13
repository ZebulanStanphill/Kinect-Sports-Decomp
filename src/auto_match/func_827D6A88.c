extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82517A50();
extern int fn_8256DE08();
extern int iRam00000000;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


/* WARNING: Removing unreachable block (ram,0x827d6ba8) */
/* WARNING: Removing unreachable block (ram,0x827d6b70) */
/* WARNING: Removing unreachable block (ram,0x827d6b90) */
/* WARNING: Removing unreachable block (ram,0x827d6bac) */
/* WARNING: Removing unreachable block (ram,0x827d6b80) */

int fn_827D6A88(int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  unsigned int uStack0000001c;
  unsigned char auStack_50 [8];
  unsigned char auStack_48 [8];
  unsigned char auStack_40 [8];
  unsigned char auStack_38 [56];
  
  uStack0000001c = param_2;
  fn_8256DE08(auStack_48,0);
  fn_8256DE08(auStack_40,0);
  RtlEnterCriticalSection(param_1 + 0x6c);
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x44);
  if (uVar1 != *(unsigned int *)(param_1 + 0x48)) {
    do {
      fn_82517A50(auStack_48,uVar1);
      fn_8256DE08(auStack_38,0);
      (**(int (***)())(iRam00000000 + 0x14))(0,&stack0x0000001c,0,auStack_38,auStack_50,auStack_40,0);
      uVar1 = uVar1 + 8;
    } while ((uVar1 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x48));
  }
  RtlLeaveCriticalSection(param_1 + 0x6c);
  return param_1 + 1000;
}

