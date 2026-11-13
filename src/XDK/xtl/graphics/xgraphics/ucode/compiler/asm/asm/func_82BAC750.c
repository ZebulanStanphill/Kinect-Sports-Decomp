extern int fn_82AB1538();
extern int fn_82BC0088();
extern unsigned int lbl_820E2FF8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BAC750(int param_1,char param_2,unsigned __int64 param_3,char param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  
  uVar1 = *(unsigned int *)(param_1 + 0xc);
  fn_82AB1538(uVar1,0x22,1,1);
  if (param_4 == '\0') {
    uVar3 = 0x2b;
  }
  else {
    uVar3 = 0xe;
  }
  fn_82AB1538(uVar1,uVar3,1,param_4 != '\0' || param_2 == '\x01');
  fn_82AB1538(uVar1,0x23,8,param_3);
  fn_82AB1538(uVar1,0x2d,4,lbl_820E2FF8);
  puVar2 = (unsigned int *)
           fn_82BC0088(*(int *)(param_1 + 0x78),*(unsigned int *)(*(int *)(param_1 + 0x78) + 4))
  ;
  *puVar2 = uVar1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 6;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return;
}

