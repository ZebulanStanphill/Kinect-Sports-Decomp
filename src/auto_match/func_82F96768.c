#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_20;
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_8265D5A8();
extern int fn_82F91650();
extern int fn_82F92208();
extern int fn_82F94750();
extern int fn_82F953B8();
extern int fn_82F95C18();
extern int fn_82F95C50();
extern int fn_82F96848();
extern unsigned int iStack00000014;
extern unsigned int uStack_14;
extern unsigned int uStack_18;


void fn_82F96768(int param_1)

{
  unsigned int *puVar2;
  unsigned __int64 *puVar3;
  unsigned __int64 uVar1;
  int iStack00000014;
  unsigned char auStack_30 [8];
  unsigned char auStack_28 [8];
  unsigned char auStack_20 [8];
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  iStack00000014 = param_1;
  puVar2 = (unsigned int *)fn_82F94750(auStack_30,param_1);
  uStack_18 = *puVar2;
  uStack_14 = puVar2[1];
  puVar3 = (unsigned __int64 *)fn_82F91650(auStack_28,iStack00000014);
  fn_82F96848(auStack_20,iStack00000014,*puVar3,CONCAT44(uStack_18,uStack_14));
  uVar1 = fn_8265D5A8(*(unsigned int *)(iStack00000014 + 4));
  fn_82F95C50(iStack00000014 + 2,uVar1);
  uVar1 = fn_82F92208(*(unsigned int *)(iStack00000014 + 4));
  fn_82F95C50(iStack00000014 + 2,uVar1);
  uVar1 = fn_82F953B8(*(unsigned int *)(iStack00000014 + 4));
  fn_82F95C50(iStack00000014 + 2,uVar1);
  fn_82F95C18(iStack00000014 + 1,*(unsigned int *)(iStack00000014 + 4),1);
  *(unsigned int *)(iStack00000014 + 4) = 0;
  *(unsigned int *)(iStack00000014 + 8) = 0;
  return;
}

