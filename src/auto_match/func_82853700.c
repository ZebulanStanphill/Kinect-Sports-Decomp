extern unsigned int *auStack_220;
extern int fn_82631920();
extern int fn_82631AF0();


extern int fn_82838B88();

void fn_82853700(int param_1,int param_2,__int64 param_3)

{
  unsigned char auStack_220 [520];
  
  fn_82838B88(auStack_220,*(unsigned int *)(param_2 + 0x14) + param_3,param_1 + 0xa4,
                     *(unsigned short *)(param_2 + 0x1a),*(unsigned short *)(param_2 + 0x1c));
  fn_82631AF0(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_2 + 0x20));
  fn_82631920(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_2 + 0x24));
  return;
}

