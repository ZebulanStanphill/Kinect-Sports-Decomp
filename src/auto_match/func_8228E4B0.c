extern unsigned int lbl_821A9994;
typedef struct Fn_8228E4B0 { void *vt; int owner; int pad[2]; struct Fn_8228E4B0 *self; } Fn_8228E4B0;
extern unsigned int fn_822C5B18(char *, int);
extern int fn_822847A8(int, Fn_8228E4B0 *, int, unsigned int, int, int);
extern void fn_82279D28(int, int, int);

void fn_8228E4B0(int param_1)
{
  int uVar2;
  Fn_8228E4B0 f;
  char auStack_30[24];

  *(int *)(param_1 + 400) = 1;
  if (*(int *)(param_1 + 0x194) != 0) {
    if (*(unsigned int *)(param_1 + 0x144) == 0) {
      f.owner = param_1;
      f.self = &f;
      f.vt = &lbl_821A9994;
      uVar2 = fn_822847A8(0, &f, 0, fn_822C5B18(auStack_30, param_1 + 0x148), 1, 1);
      *(int *)(param_1 + 0x144) = uVar2;
    }
    *(int *)(param_1 + 0x168) = 1;
    if (*(int *)(param_1 + 0x18c) == 0) {
      fn_82279D28(param_1, 1, 0);
    }
    fn_82279D28(param_1, 0, 0);
  }
}
