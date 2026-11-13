extern int fn_82BE5340();
extern int fn_82BE5350(iVar2);
extern int fn_82BE5378();
extern int fn_82BE5398();


int fn_82BEB838(int param_1,unsigned int *param_2)
{
  unsigned int *item;
  int list = param_1 + 0x14;
  fn_82BE5340(list);
  for (item = (unsigned int *)fn_82BE5378(list); item != 0; item = (unsigned int *)fn_82BE5378(list)) {
    if (item == param_2) {
      fn_82BE5398(list, *(unsigned int *)(param_1+0x1c), 1);
      if (item != 0) (*(int (**)())*item)(item,1);
      return 0;
    }
    fn_82BE5350(list);
  }
  return 0x3e9;
}
