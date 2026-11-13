extern int fn_827EF828();
extern int fn_827EFFE8();
extern int fn_827F0180();


void fn_825012C0(int param_1)

{
  fn_827EF828(*(unsigned int *)(param_1 + 0xb64));
  fn_827EFFE8(*(unsigned int *)(param_1 + 0xb64));
  if (*(unsigned int *)(param_1 + 0x8c0) != 0) {
    fn_827F0180(*(unsigned int *)(param_1 + 0xb64),
                      **(unsigned int **)
                        ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 +
                        *(int *)(param_1 + 0x8c0)),1,0,0);
  }
  return;
}

