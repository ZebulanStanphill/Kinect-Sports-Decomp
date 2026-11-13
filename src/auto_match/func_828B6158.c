extern int fn_82248B90();
extern int fn_8288F948();
extern int fn_828A12E8();
extern int fn_828B5ED8();
extern unsigned int lbl_82025010;
extern unsigned int uStack_2e;
extern unsigned int uStack_30;


unsigned int * fn_828B6158(unsigned int *param_1,short param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned short uStack_30;
  unsigned short uStack_2e;
  int aiStack_2c;
  
  *param_1 = &lbl_82025010;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(short *)(param_1 + 5) = param_2;
  uVar2 = fn_828A12E8(param_3);
  iVar3 = fn_8288F948(uVar2,0x8000);
  aiStack_2c = **(int **)(iVar3 + 4);
  if ((int *)aiStack_2c != *(int **)(iVar3 + 4)) {
    do {
      iVar1 = *(int *)(aiStack_2c + 0x14);
      if (*(short *)(iVar1 + 0x14) == param_2) {
        uStack_30 = *(unsigned short *)(iVar1 + 0x16);
        uStack_2e = *(unsigned short *)(iVar1 + 0x18);
        fn_828B5ED8(param_1 + 1,&uStack_30);
      }
      fn_82248B90(&aiStack_2c);
    } while (aiStack_2c != *(int *)(iVar3 + 4));
  }
  return param_1;
}

