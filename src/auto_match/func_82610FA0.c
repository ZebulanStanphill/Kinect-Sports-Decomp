extern void fn_822315A0(void *p);
extern void fn_82517978();
extern void fn_827D5078();
extern void fn_827D50C0();
extern void fn_827D5108();
extern void fn_827D5158();

void fn_82610FA0(int param_1, void (*param_2)(void *, void *), void *param_3)
{
  struct { int first; void *second; } a;
  struct { int first; int second; } b;

  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = 0;
  }
  fn_827D5158(&a);
  fn_827D50C0(a.first, 0);
  fn_827D5078(a.first, 0);
  fn_827D5108(a.first, 0);
  b.first = 0;
  b.second = 0;
  fn_82517978(&b, a.first, a.second, 0);
  param_2(&b, param_3);
  fn_827D5108(a.first, 3);
  if (a.second != 0) {
    fn_822315A0(a.second);
  }
}
