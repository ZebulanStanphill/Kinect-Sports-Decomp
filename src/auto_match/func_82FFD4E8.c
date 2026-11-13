extern int fn_82FF8598();
extern int fn_82FFA118();
extern int fn_82FFD3E8();
extern int fn_82FFE650();
extern int fn_82FFF1C8();
extern int fn_8302B578();


unsigned __int64 fn_82FFD4E8(int param_1)

{
  fn_82FFE650(param_1 + 0x6c);
  fn_82FFD3E8(param_1);
  fn_8302B578(param_1 + 0x39c);
  if (*(int *)(param_1 + 0x90) != -1) {
    fn_82FFF1C8((unsigned int *)(param_1 + 0x90));
    *(unsigned int *)(param_1 + 0x90) = 0xffffffff;
  }
  fn_82FFA118(param_1);
  fn_82FF8598(param_1 + 4);
  return 1;
}

