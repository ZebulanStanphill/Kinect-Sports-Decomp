extern int fn_826A9280();
extern int fn_826E90B0();


void fn_826FB010(int param_1,int param_2)
{
  unsigned int iVar1;

  iVar1 = *(unsigned int *)(param_2 + 0x314);
  fn_826E90B0(iVar1 != 0 ? iVar1 : param_2 + 0x28,param_1 + 4);
  fn_826A9280(param_2 + 0x14,"  SetBackgroundColor: (%d %d %d)\n",*(unsigned char *)(param_1 + 5),
                    *(unsigned char *)(param_1 + 6),*(unsigned char *)(param_1 + 7));
}
