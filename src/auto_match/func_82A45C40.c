extern int fn_8265C990();
extern int fn_82A45290();
extern unsigned int lbl_83219DD0;


extern char lbl_8315D948[];
unsigned __int64 fn_82A45C40(int param_1)

{
  if ((*(unsigned int *)(param_1 + 4) & 4) != 0) {
    RtlEnterCriticalSection(lbl_8315D948);
    (&lbl_83219DD0)[*(unsigned short *)(*(int *)(param_1 + 8) + 0x50)] = 0;
    RtlLeaveCriticalSection(lbl_8315D948);
  }
  fn_82A45290(param_1);
  if ((*(unsigned int *)(param_1 + 4) & 2) == 0) {
    fn_8265C990(param_1,0xffffffffa7970000);
  }
  return 0;
}

