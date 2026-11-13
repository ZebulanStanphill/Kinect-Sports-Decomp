extern int fn_822315A0();
extern int fn_822B7340();
extern int fn_822CE1C0();
extern int fn_822E2D18();
extern int fn_8237C400();
extern int fn_824D2AE8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;


void fn_822E27C8(int param_1)

{
  float fVar1;
  int iVar2;
  double dVar3;
  int iStack_30;
  int iStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  iVar2 = fn_822CE1C0(*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x30));
  if (iVar2 != 0) {
    if ((*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x1c0) + 0x204) == 0) &&
       (*(int *)(*(int *)(param_1 + 0x14) + 0x78) != 0)) {
      fn_822B7340();
    }
    fn_822E2D18(param_1,5);
    fVar1 = ltcg_pool_0_0f;
    if (*(int *)(param_1 + 0x30) == 0) {
      fVar1 = lbl_821CA460;
    }
    dVar3 = (double)fVar1;
    fn_824D2AE8(&iStack_30,param_1 + 0x58);
    uStack_24 = 0;
    uStack_20 = 0;
    if (dVar3 < (double)lbl_8218E8E8) {
      uStack_28 = *(unsigned int *)(iStack_30 + 0x2188);
    }
    else {
      uStack_28 = *(unsigned int *)(iStack_30 + 0x218c);
    }
    fn_8237C400(iStack_30,&uStack_28,0xffffffff82196288);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  return;
}

