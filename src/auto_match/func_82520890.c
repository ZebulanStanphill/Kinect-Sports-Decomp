extern int fn_8223C478();
extern int fn_828E9DB8();
extern int fn_828EA2D8();
extern unsigned int lbl_832961DC;


void fn_82520890(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int iVar2;
  unsigned int uVar3;
  
  uVar3 = lbl_832961DC;
  uVar1 = *(unsigned int *)(param_1 + 0x7d8);
  fn_8223C478(param_3,lbl_832961DC,0);
  fn_828E9DB8(param_3,uVar1,uVar3);
  iVar2 = *(int *)(param_1 + 0x7d8);
  if (iVar2 != 0) {
    fn_8223C478(param_3,iVar2 << 3,0);
    fn_828EA2D8(param_3,param_1 + 0x3f0,iVar2);
  }
  return;
}

