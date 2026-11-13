extern int fn_82637300();
extern int memcpy();


void fn_82635CC8(int param_1,int param_2,int param_3)

{
  fn_82637300((unsigned int *)(param_1 + 0x4dc4),(param_3 + 3U & 0xffffffff) >> 2,
                    param_1 + 0x4dbc);
  if (*(int *)(param_1 + 0x4dbc) >= 0) {
    memcpy(*(unsigned int *)(param_1 + 0x4dc4),param_2,param_3);
  }
  return;
}

