extern int fn_8236B6E8(int, int, char *);
extern void fn_82358FD8(int, char *, int, int);
extern void fn_82299AC8(int, char *);
extern void fn_82299BF0(int, char *, char *);
extern int lbl_82193960[];
extern float lbl_821917A8[];
typedef struct Ctx_8236B7E0 { char pad[0x4b0]; int **p4b0; } Ctx_8236B7E0;
void fn_8236B7E0(int param_1, int param_2, int param_3)
{
  char buf1[192];
  char bufb[2048];
  char bufa[2056];
  int iVar1, iVar2, v;
  iVar1 = fn_8236B6E8(param_1, param_2, buf1);
  iVar2 = *(int *)(**(int **)(param_1 + 0x4b0) + 0xd4);
  v = lbl_82193960[param_3];
  if (iVar1 != 0) {
    fn_82358FD8(*(int *)(iVar2 + 0x1c), bufb, 0x400, v);
    iVar2 = *(int *)(iVar2 + 0x38);
    if (*(int *)(iVar2 + 0x1220) != 0) return;
    fn_82299BF0(iVar2, buf1, bufb);
  } else {
    fn_82358FD8(*(int *)(iVar2 + 0x1c), bufa, 0x400, v);
    iVar2 = *(int *)(iVar2 + 0x38);
    if (*(int *)(iVar2 + 0x1220) != 0) return;
    fn_82299AC8(iVar2, bufa);
  }
  *(float *)(iVar2 + 0x121c) = lbl_821917A8[2];
}
