extern void fn_82230110(void *s, const char *c);
extern void fn_82230300(void *s, int a, int b);
extern unsigned char fn_822BD338(int a, const char *s);
extern void fn_822C8C08(int a, const char *s);
extern void fn_822FB198(int a, void *s);
extern void fn_823000E0(int a, void *b);
extern float lbl_821CC160;

#define W(p, o) (*(int *)((p) + (o)))
#define F(p, o) (*(float *)((p) + (o)))

typedef struct Tmp_82306898 { int a[4]; int f10; int pad[3]; } Tmp_82306898;
typedef struct Str_82306898 { int a[10]; } Str_82306898;

void fn_82306898(int param_1)
{
  int iVar1;
  int *puVar3;
  Tmp_82306898 t;
  Str_82306898 s;

  iVar1 = W(W(param_1, 0xc), 0x1e8);
  if (W(iVar1, 0x56c) != 0) {
    W(iVar1, 0x568) = -1;
  }
  W(iVar1, 0x56c) = 0;
  t.f10 = 0;
  F(iVar1, 0x558) = lbl_821CC160;
  W(W(W(param_1, 0xc), 0x1e8), 0x564) = 0;
  iVar1 = W(param_1, 0xc);
  W(W(iVar1, 0x1e8), 0x578) = 0;
  fn_823000E0(W(iVar1, 0x1e8), &t);
  fn_82230110(&s, "idleset_default");
  fn_822FB198(W(W(W(param_1, 0xc), 0x114), 0xc0), &s);
  fn_82230300(&s, 1, 0);
  if (fn_822BD338(W(W(W(param_1, 0xc), 0x114), 0x20) + 4, "challenge_locomotion") != 0) {
    fn_822C8C08(W(W(param_1, 0xc), 0x114), "idle");
  }
  iVar1 = W(W(param_1, 0x10), 0x4c4);
  for (puVar3 = (int *)(iVar1 + 0x380); puVar3 != (int *)(iVar1 + 0x3b8); puVar3++) {
    *puVar3 = 0;
  }
  W(W(param_1, 0xc), 0x20c) = 0;
}
