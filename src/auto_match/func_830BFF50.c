typedef struct B_830BFF50 { char pad[0x34]; unsigned short w34; char pad2[0x580 - 0x36]; char t[1]; } B_830BFF50;
extern int fn_830C0798();
extern int fn_830C0AE0();
extern int fn_830C67B0();
extern int fn_830C9FC8();
extern int fn_830DAA20();
extern int fn_830EF0E8();
extern int fn_830EF208();
extern int fn_830F2798();
extern int fn_83105FF0();
extern unsigned int lbl_8329F084;

int fn_830BFF50(int param_1)
{
  int r;
  B_830BFF50 *s;
  char *t;
  char buf[1536];

  s = (B_830BFF50 *)(param_1 + 0x3e70);
  fn_830C67B0(param_1, s);
  fn_830C0798(lbl_8329F084, param_1 + 0x57a0);
  t = s->t;
  r = fn_830C9FC8(param_1, s, t, 0, 0, s->w34 >> 1);
  if (r == 0 && (r = fn_83105FF0(param_1, s, t, 0, 0, s->w34 >> 1), r == 0) &&
      (r = fn_830F2798(param_1, s, t, 0, 0, s->w34 >> 1), r == 0) &&
      (r = fn_830DAA20(param_1, s, t, 0, 0, s->w34 >> 1), r == 0)) {
    if (*(int *)(param_1 + 0xf6c) != 0) {
      fn_830EF0E8(s, *(int *)(param_1 + 0x110));
      fn_830EF208(param_1, *(int *)(param_1 + 0xec0) + *(int *)(param_1 + 0xdc),
                  *(int *)(param_1 + 0xec4) + *(int *)(param_1 + 0xe0),
                  *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xec8), 0);
      fn_830EF208(param_1, *(int *)(param_1 + 0xec0) + *(int *)(param_1 + 0xdc),
                  *(int *)(param_1 + 0xec4) + *(int *)(param_1 + 0xe0),
                  *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xec8), 1);
    }
    fn_830C0AE0(param_1 + 0x57a0, buf);
    *(int *)(param_1 + 0x3d08) = 1;
    *(int *)(param_1 + 0x3d0c) = 0;
    *(int *)(param_1 + 0x3cf0) = 1;
    return 0;
  }
  return r;
}
