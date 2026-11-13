#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _fStack_30 ((*(unsigned __int64*)&fStack_30))
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_83027270();
extern int fn_8302A230();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8302A3C0(int param_1,unsigned int param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  piVar3 = *(int **)(param_1 + 0x24);
  fVar1 = *(float *)(param_1 + 0x40) * (float)param_2 + *(float *)(param_1 + 0x44);
  fVar2 = lbl_82002AE0;
  if (fVar1 - lbl_82002AE0 < 0.0) {
    fVar2 = fVar1;
  }
  if (fVar2 < 0.0) {
    fVar2 = lbl_821AAD20;
  }
  _fStack_30 = CONCAT44(*(float *)(param_1 + 0x58) * fVar2 + *(float *)(param_1 + 0x4c),
                        *(float *)(param_1 + 0x5c) * fVar2 + *(float *)(param_1 + 0x50));
  fStack_28 = *(float *)(param_1 + 0x60) * fVar2 + *(float *)(param_1 + 0x54);
  if (piVar3 != *(int **)(param_1 + 0x28)) {
    do {
      fn_83027270(*(unsigned int *)(*piVar3 + 0x38),&fStack_30);
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(param_1 + 0x28));
  }
  if (*(unsigned int *)(param_1 + 0x38) <= param_2) {
    fn_8302A230(param_1);
  }
  return;
}

