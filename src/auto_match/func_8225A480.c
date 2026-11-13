extern int fn_822315A0();
extern int fn_8223A7A8();
extern int fn_8233E460();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_828E4768();
extern int fn_828E4E08();
extern unsigned int iStack_34;
extern unsigned int lbl_82196E94;
extern unsigned int lbl_82198484;
extern unsigned int lbl_8219848C;
extern unsigned int uStack_38;


unsigned int * fn_8225A480(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puStack_40;
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
  puVar3 = (unsigned int *)fn_8265C9E0(0xa8);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    fn_8233E460(puVar3);
    *puVar3 = &lbl_82198484;
    puVar3[10] = &lbl_8219848C;
  }
  puStack_40 = (unsigned int *)0x0;
  puStack_3c = (unsigned int *)0x0;
  puVar4 = (unsigned int *)fn_8265C9E0(0x10);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4[3] = puVar3;
    puVar4[1] = 1;
    *puVar4 = &lbl_82196E94;
    puVar4[2] = 1;
  }
  if (puStack_3c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  puStack_40 = puVar3;
  puStack_3c = puVar4;
  fn_828E4768(uStack_38,0xffffffff831d7008,&puStack_40);
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

