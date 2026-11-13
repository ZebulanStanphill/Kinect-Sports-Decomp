extern int fn_82F655D8();
extern int fn_82FE41A0();
extern unsigned int lbl_82002C40;
extern float lbl_82006848;
extern float lbl_82021544;
extern unsigned int lbl_82175110;
extern unsigned int lbl_82175118;


unsigned __int64 fn_82FE03B0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  unsigned __int64 uVar4;
  double dVar5;
  
  if (*(char *)(param_1 + 0xd0) != '\0') {
    dVar5 = (double)fn_82F655D8(lbl_82002C40,
                                      (double)(*(float *)(param_1 + 0x13c) * lbl_82021544));
    iVar1 = *(int *)(param_1 + 0x134) * 0x14;
    fVar2 = **(float **)(&lbl_82175110 + iVar1) * (float)dVar5;
    fVar3 = **(float **)(&lbl_82175118 + iVar1) * (float)dVar5;
    if (fVar2 - fVar3 < 0.0) {
      fVar3 = fVar2;
    }
    if (((__int64)(fVar3 * (float)*(unsigned int *)(param_1 + 200) * lbl_82006848) & 0xffffffffU) != 0) {
      uVar4 = fn_82FE41A0(param_1 + 0x8c,param_2);
      return uVar4;
    }
  }
  return 1;
}

