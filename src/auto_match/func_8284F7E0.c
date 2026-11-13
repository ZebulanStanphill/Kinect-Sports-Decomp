extern int fn_8284D780();
extern int fn_828509F0();
extern int fn_82850DB8();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8284F7E0(int param_1,int *param_2)

{
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  param_2 = (int *)*param_2;
  if (*param_2 != -1) {
    fn_8284D780(*(unsigned int *)(param_1 + 4),&uStack_20);
    fn_828509F0(uStack_20,param_2[0xe],&uStack_1c);
    fn_82850DB8(uStack_1c,*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 0x14),
                 *(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0x18),
                 *(unsigned int *)(param_1 + 8));
  }
  return;
}

