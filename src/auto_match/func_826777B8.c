extern int fn_82639380();
extern int fn_82639528();


void fn_826777B8(int param_1,int param_2)

{
  unsigned int bVar1;
  
  if (*(int *)(param_1 + 0x1cc) != (int)param_2) {
    *(int *)(param_1 + 0x1cc) = (int)param_2;
    bVar1 = param_2 != 0;
    fn_82639380(*(unsigned int *)(param_1 + 0xd8),0,bVar1);
    fn_82639528(*(unsigned int *)(param_1 + 0xd8),0,bVar1);
    fn_82639380(*(unsigned int *)(param_1 + 0xd8),1,bVar1);
    fn_82639528(*(unsigned int *)(param_1 + 0xd8),1,bVar1);
  }
  return;
}

