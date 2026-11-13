extern unsigned int fn_8268F7C0();
extern int fn_82722C50();
extern int fn_82729B90();
extern unsigned int fn_827912D8();
extern int fn_8279A130();
extern int fn_827A3A50();

void fn_82729CA8(int param_1)
{
  unsigned int uVar1;
  unsigned int uVar2;

  if (*(int *)(*(int *)(param_1 + 0xa0) + 0x114) != 0) {
    fn_8279A130(*(int *)(param_1 + 0xa0));
    if (*(int *)(*(int *)(param_1 + 0xa0) + 0x114) != 0) {
      uVar1 = fn_827912D8(*(unsigned int *)(*(int *)(param_1 + 0xa0) + 8));
      uVar2 = fn_8268F7C0(*(unsigned int *)(*(int *)(param_1 + 0xa0) + 0x114));
      if (uVar2 > uVar1) {
        fn_827A3A50(*(unsigned int *)(*(int *)(param_1 + 0xa0) + 0x114),uVar1,0);
      }
    }
    fn_82722C50(param_1);
    fn_82729B90(param_1);
  }
}
