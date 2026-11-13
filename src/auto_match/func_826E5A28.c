extern void fn_8267C4F0(void *);
extern void fn_82687270(void *);
extern void fn_826E54D8(void *);


void fn_826E5A28(char *param_1)

{
  if (*(void **)(param_1 + 0x24) != 0) {
    fn_82687270(*(void **)(param_1 + 0x24));
  }
  if (*(void **)(param_1 + 0x1c) != 0) {
    fn_8267C4F0(*(void **)(param_1 + 0x1c));
  }
  if (*(void **)(param_1 + 0x18) != 0) {
    fn_82687270(*(void **)(param_1 + 0x18));
  }
  if (*(void **)(param_1 + 0x14) != 0) {
    fn_82687270(*(void **)(param_1 + 0x14));
  }
  fn_826E54D8(param_1);
  return;
}

