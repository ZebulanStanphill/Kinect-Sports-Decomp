extern int fn_82D81078();
extern int fn_82D8A058();


void fn_82DF3F48(int param_1,unsigned __int64 param_2)

{
  if ((*(unsigned char *)(param_1 + 0xc) & 4) != 0) {
    fn_82D8A058(*(unsigned int *)(param_1 + 0x10),param_1 + 8);
  }
  fn_82D81078(param_2,*(unsigned int *)(param_1 + 0x10),1);
  return;
}

