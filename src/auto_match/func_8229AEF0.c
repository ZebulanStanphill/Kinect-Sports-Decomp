extern int fn_822315A0();
extern int fn_82297DB0();
extern int fn_8229BA88();
extern int fn_82512A48();
extern int fn_8265CA20();
extern int fn_8266C6F8();
extern int fn_8266C730();
extern void *fn_8266EC60();

int fn_8229AEF0(int param_1)
{
  int uVar1;

  fn_8229BA88(param_1);
  if (*(void **)(param_1 + 0xa8) != 0) {
    fn_82512A48(*(void **)(param_1 + 0xa8));
    *(int *)(param_1 + 0xa8) = 0;
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    *(int *)(param_1 + 0xac) = 0;
    uVar1 = *(int *)(param_1 + 0xb0);
    fn_8266C6F8(fn_8266EC60(), uVar1);
    uVar1 = *(int *)(param_1 + 0xb4);
    fn_8266C730(fn_8266EC60(), uVar1);
  }
  fn_82297DB0(param_1 + 0x8c,1,0);
  fn_82297DB0(param_1 + 0x70,1,0);
  if (*(void **)(param_1 + 4) != 0) {
    fn_822315A0(*(void **)(param_1 + 4));
  }
  fn_8265CA20(param_1);
  return param_1;
}
