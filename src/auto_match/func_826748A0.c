extern unsigned int *auStack_2c;
extern int fn_8260D428();
extern int fn_82674828();
extern unsigned int uStack_30;


unsigned int * fn_826748A0(unsigned int *param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uStack_30;
  unsigned int auStack_2c [1];
  
  uStack_30 = fn_82674828(param_2,param_3);
  if (uStack_30 != *(unsigned int *)(param_2 + 4)) {
    puVar2 = (unsigned int *)(uStack_30 + 0xc);
    if (0xf < *(unsigned int *)(uStack_30 + 0x20)) {
      puVar2 = (unsigned int *)*puVar2;
    }
    iVar1 = fn_8260D428(param_3,0,*(unsigned int *)(param_3 + 0x10),puVar2,
                         *(unsigned int *)(uStack_30 + 0x1c));
    if (-1 < iVar1) {
      puVar3 = &uStack_30;
      goto LAB_8267491c;
    }
  }
  puVar3 = auStack_2c;
  auStack_2c[0] = *(unsigned int *)(param_2 + 4);
LAB_8267491c:
  *param_1 = *puVar3;
  return param_1;
}

