extern int fn_8265C9E0();
extern int fn_82897ED8();
extern int memcpy();
extern unsigned int lbl_82197140;


unsigned int * fn_8288BB90(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  
  *param_1 = &lbl_82197140;
  puVar3 = param_1 + 2;
  param_1[1] = *(unsigned int *)(param_2 + 4);
  param_1[2] = 0;
  uVar1 = *(unsigned int *)(param_2 + 0xc);
  param_1[3] = uVar1;
  if (*(int *)(param_2 + 4) == 7) {
    if (4 < uVar1) {
      uVar2 = fn_8265C9E0();
      *puVar3 = (int)uVar2;
      memcpy(uVar2,*(unsigned int *)(param_2 + 8),param_1[3]);
      return param_1;
    }
  }
  else if (*(int *)(param_2 + 4) == 8) {
    fn_82897ED8(puVar3,param_2 + 8);
    return param_1;
  }
  *puVar3 = *(unsigned int *)(param_2 + 8);
  return param_1;
}

