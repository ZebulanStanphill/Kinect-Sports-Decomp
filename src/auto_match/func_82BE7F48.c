extern int fn_82F6B030();
extern unsigned int lbl_82006848;
extern unsigned int lbl_83175240;
extern unsigned int lbl_83175244;


unsigned __int64 fn_82BE7F48(int param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  double dVar3;
  
  dVar3 = (double)fn_82F6B030(*(__int64 *)(param_1 + 0x38) - *(__int64 *)(param_1 + 0x40));
  if (*(int *)(param_1 + 0x9c) == 3) {
    uVar1 = *(unsigned short *)(param_1 + 0x28);
    uVar2 = lbl_83175244;
  }
  else {
    if (*(int *)(param_1 + 0x9c) != 4) {
      return 0x327;
    }
    uVar1 = *(unsigned short *)(param_1 + 0x2a);
    uVar2 = lbl_83175240;
  }
  if (uVar1 == 0) {
    *(unsigned int *)(param_1 + 0x2c) = uVar2;
  }
  else {
    *(int *)(param_1 + 0x2c) =
         (int)((float)(__int64)(int)((unsigned int)uVar1 << 10) * (float)dVar3 * lbl_82006848);
  }
  return 0;
}

