extern int fn_822315A0();
extern int fn_8223A7A8();
extern int fn_8225A820();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_828E4768();
extern int fn_828E4E08();
extern unsigned int iStack_34;
extern unsigned int lbl_82196E94;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned int * fn_8225A5C0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int uStack_40;
  unsigned int *puStack_3c;
  unsigned int uStack_38;
  int iStack_34;
  
  uVar1 = fn_8265C9E0(0x28);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_828E4E08(uVar1,param_2);
  }
  fn_8223A7A8(&uStack_38,uVar2);
  iVar3 = fn_8265C9E0(0xb0);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_8225A820();
  }
  uStack_40 = 0;
  puStack_3c = (unsigned int *)0x0;
  puVar5 = (unsigned int *)fn_8265C9E0(0x10);
  if (puVar5 == (unsigned int *)0x0) {
    puVar5 = (unsigned int *)0x0;
  }
  else {
    puVar5[3] = uVar4;
    puVar5[1] = 1;
    *puVar5 = &lbl_82196E94;
    puVar5[2] = 1;
  }
  if (puStack_3c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  uStack_40 = uVar4;
  puStack_3c = puVar5;
  fn_828E4768(uStack_38,0xffffffff831d7008,&uStack_40);
  if (puStack_3c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  *param_1 = 0;
  param_1[1] = 0;
  fn_82517978(param_1,uStack_38,iStack_34,0);
  if (iStack_34 != 0) {
    fn_822315A0(iStack_34);
  }
  return param_1;
}

