extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_827D9698();
extern int fn_827DDFB8();
extern int fn_82A1BB18();


unsigned __int64 fn_8259B138(int param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  int lVar2;
  int lock = param_1 + 0x60;
  int iVar3;
  unsigned int *puVar4;
  
  lVar2 = fn_82A1BB18();
  fn_8259C5D8(lock,1,lVar2 + 1);
  puVar4 = *(unsigned int **)(param_1 + 0x38);
  for (puVar1 = (unsigned int *)*puVar4; puVar1 != puVar4; puVar1 = (unsigned int *)*puVar1) {
    iVar3 = fn_827D9698(puVar1[3]);
    if (iVar3 == *param_2) {
      fn_827DDFB8(param_3,puVar1[3]);
    }
    puVar4 = *(unsigned int **)(param_1 + 0x38);
  }
  fn_82A1BB18();
  fn_8259C738(lock);
  return 0;
}

