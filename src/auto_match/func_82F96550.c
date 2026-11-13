extern unsigned int *auStack_20;
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern int fn_8265D5A8();
extern int fn_82F92208();
extern int fn_82F93730();
extern int fn_82F95398();
extern int fn_82F953A8();
extern int fn_82F953B8();
extern int fn_82F96108();
extern unsigned int uStack00000014;


unsigned int fn_82F96550(unsigned int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char *puVar3;
  unsigned int uStack00000014;
  unsigned char auStack_28 [4];
  unsigned char auStack_24 [4];
  unsigned char auStack_20 [16];
  
  uStack00000014 = param_1;
  uVar1 = fn_82F96108((unsigned __int64)param_1 + 1,1,0);
  uVar2 = fn_8265D5A8(uVar1);
  fn_82F93730((unsigned __int64)uStack00000014 + 2,uVar2,auStack_28);
  uVar2 = fn_82F92208(uVar1);
  fn_82F93730((unsigned __int64)uStack00000014 + 2,uVar2,auStack_24);
  uVar2 = fn_82F953B8(uVar1);
  fn_82F93730((unsigned __int64)uStack00000014 + 2,uVar2,auStack_20);
  puVar3 = (unsigned char *)fn_82F95398(uVar1);
  *puVar3 = 1;
  puVar3 = (unsigned char *)fn_82F953A8(uVar1);
  *puVar3 = 0;
  return uVar1;
}

