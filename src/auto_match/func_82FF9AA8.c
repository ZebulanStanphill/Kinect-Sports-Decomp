extern int fn_82FF6828();
extern int fn_82FF7B98();
extern unsigned int lbl_832642E8;


extern char lbl_8326434C[];
void fn_82FF9AA8(void)

{
  RtlEnterCriticalSection(lbl_8326434C);
  fn_82FF6828(lbl_832642E8);
  fn_82FF7B98(lbl_832642E8,1);
  RtlLeaveCriticalSection(lbl_8326434C);
  return;
}

