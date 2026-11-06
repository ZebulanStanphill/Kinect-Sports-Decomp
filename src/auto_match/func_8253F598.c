typedef unsigned int uint;
extern int fn_8253D898();
extern void fn_825A7BE8(int, uint, float, int);
extern void fn_825A7F68(int, uint, int);
extern void fn_825A88B8(int);
extern float lbl_821922C0[];

void fn_8253F598(int param_1)
{
  float fVar1;
  uint iVar2;

  fn_8253D898();
  iVar2 = *(int *)(param_1 + 0x7c0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x604) != 0) {
      fVar1 = 100.0f;
      if (*(int *)(param_1 + 0x608) == 0) {
        fVar1 = lbl_821922C0[5];
      }
      fn_825A7BE8(param_1 + 0x600, iVar2, fVar1, *(int *)(param_1 + 0x60c));
      *(int *)(param_1 + 0x604) = 0;
    }
    fn_825A7F68(param_1 + 0x600, iVar2, param_1);
  }
  if ((*(int *)(param_1 + 0x8c0) != 0) && ((*(uint *)(param_1 + 2000) & 8) != 0)) {
    fn_825A88B8(param_1);
  }
}
