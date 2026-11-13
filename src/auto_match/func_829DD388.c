extern unsigned int *auStack_800;
extern unsigned int *auStack_b70;
extern int fn_829DC778();
extern int fn_829DD328();
extern int fn_82A1DDC0();
extern unsigned int register0x0000000c;


void fn_829DD388(int param_1,unsigned int param_2)

{
  unsigned char auStack_b70 [800];
  unsigned char *puStack_850;
  unsigned char auStack_800 [2048];
  
  puStack_850 = (unsigned char *)register0x0000000c;
  fn_82A1DDC0(auStack_800,param_2,2000);
  fn_829DC778(param_1,auStack_800);
  if (*(int *)(param_1 + 0xf4a10) == 500) {
    fn_829DD328(param_1,200,auStack_b70);
  }
  return;
}

