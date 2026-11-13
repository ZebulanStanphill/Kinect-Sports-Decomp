extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_82F8EE48();
extern int fn_82F8F2E0();
extern int fn_82F8F328();
extern int fn_82F8F368();
extern int fn_82F8F580();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack_20;


void fn_82F8EEE0(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 *puVar4;
  int iStack00000014;
  unsigned int uStack0000001c;
  unsigned char auStack_30 [8];
  unsigned char auStack_28 [8];
  unsigned int uStack_20;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uVar1 = fn_82F8EE48(param_1);
  uVar2 = fn_82F8F2E0(iStack00000014);
  if (uVar1 < uVar2) {
    uVar3 = fn_82F8F580(iStack00000014,*(unsigned int *)(iStack00000014 + 8),1,uStack0000001c);
    *(unsigned int *)(iStack00000014 + 8) = uVar3;
  }
  else {
    uStack_20 = uStack0000001c;
    puVar4 = (unsigned __int64 *)fn_82F8F328(auStack_30,iStack00000014);
    fn_82F8F368(auStack_28,iStack00000014,*puVar4,uStack_20);
  }
  return;
}

