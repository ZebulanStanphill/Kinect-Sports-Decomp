#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack_30 ((*(unsigned __int64*)&uStack_30))
extern int fn_822315A0();
extern int fn_8232B908();
extern int fn_8232BEE0();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern unsigned int iStack_2c;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_30;


void fn_822C11F8(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  int iVar3;
  int *piVar4;
  unsigned int uStack_30;
  int iStack_2c;
  
  iVar3 = 0;
  for (piVar4 = (int *)*param_2; (piVar4 != (int *)0x0 && (*piVar4 != 0));
      piVar4 = (int *)(-(unsigned int)(piVar4[1] != 0) & (unsigned int)(piVar4 + 1))) {
    iVar3 = iVar3 + 1;
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar3 = (int)((float)(__int64)iVar3 *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
  _uStack_30 = CONCAT44(*(unsigned int *)(iVar3 * 4 + *param_2),iVar3);
  uVar1 = fn_8251F720(&uStack_30,0);
  puVar2 = (unsigned int *)fn_8265C9E0(0xa8);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[1] = 1;
    *puVar2 = &lbl_821AD588;
    puVar2[2] = 1;
    if (puVar2 + 3 != (unsigned int *)0x0) {
      fn_8232BEE0(puVar2 + 3,param_1,uVar1);
    }
  }
  iVar3 = *(int *)(param_1 + 0x5ac);
  *(unsigned int **)(param_1 + 0x5ac) = puVar2;
  *(unsigned int **)(param_1 + 0x5a8) = puVar2 + 3;
  if (iVar3 != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_1 + 0x27c) != 0) {
    fn_8232B908(*(unsigned int *)(param_1 + 0x5a8));
  }
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8251FA58(uVar1);
  }
  return;
}

