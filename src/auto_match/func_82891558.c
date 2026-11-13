extern unsigned int *auStack_40;
extern int fn_8223C478();
extern int fn_82897B18();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B5C88();
extern int fn_828E9DB8();


void fn_82891558(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char auStack_40 [16];
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = fn_82897B18(param_5);
  if (0 < iVar1) {
    fn_8223C478(param_3,iVar1,0);
    fn_828E9DB8(param_3,uVar2,iVar1);
  }
  fn_828B5580(auStack_40,param_4 + 8);
  fn_828B5C88(auStack_40,param_2,param_3);
  fn_828B55B0(auStack_40);
  return;
}

