extern int fn_823BD380();
extern int fn_8265C9E0();
extern unsigned int lbl_821B9BA4;


unsigned int * fn_82446A88(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)0x0;
  param_1[1] = 0;
  *param_1 = &lbl_821B9BA4;
  param_1[2] = 0;
  uVar2 = fn_8265C9E0(0x14);
  if ((uVar2 & 0xffffffff) != 0) {
    puVar3 = (unsigned int *)fn_823BD380(uVar2,3,5,6,7,0,0,6);
  }
  puVar1 = (unsigned int *)param_1[2];
  if (puVar3 != puVar1) {
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
    param_1[2] = puVar3;
  }
  return param_1;
}

