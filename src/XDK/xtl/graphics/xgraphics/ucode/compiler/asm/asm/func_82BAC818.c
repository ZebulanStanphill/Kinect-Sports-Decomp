extern int fn_82AB1538();
extern int fn_82BC0088();
extern unsigned int lbl_820E2FB8[];


void fn_82BAC818(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  
  uVar1 = *(unsigned int *)(param_1 + 0xc);
  fn_82AB1538(uVar1,1,0xd,0);
  fn_82AB1538(uVar1,0xe,3,0);
  fn_82AB1538(uVar1,0x11,5,param_2);
  fn_82AB1538(uVar1,0x16,0x16,0);
  fn_82AB1538(uVar1,0x2c,1,0);
  fn_82AB1538(uVar1,0x2d,4,lbl_820E2FB8[12]);
  puVar3 = (unsigned int *)
           fn_82BC0088(*(int *)(param_1 + 0x70),*(unsigned int *)(*(int *)(param_1 + 0x70) + 4))
  ;
  *puVar3 = uVar1;
  iVar2 = *(int *)(param_1 + 0x38) + 1;
  piVar4 = (int *)fn_82BC0088(*(int *)(param_1 + 0x74),
                                    *(unsigned int *)(*(int *)(param_1 + 0x74) + 4));
  *piVar4 = iVar2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 6;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return;
}

