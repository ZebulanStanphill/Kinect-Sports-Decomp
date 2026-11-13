extern int fn_826ADE60();
extern int fn_826B55A0();
extern int fn_826C36F0();
extern int fn_826C43B0();
extern int fn_826C4E78();
extern unsigned int iStack_48;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;


void fn_826C4FD8(int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned short uVar1;
  char cVar2;
  int *piStack_50;
  int *piStack_4c;
  int iStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  struct { unsigned int first; unsigned int second; } stack_pair_3c;

  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  stack_pair_3c.first = 0;
  stack_pair_3c.second = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  piStack_50 = param_1;
  iStack_48 = param_2;
  uStack_44 = param_3;
  uStack_40 = param_4;
  piStack_4c = (int *)(**(int (***)())(*param_1 + 0x24))(param_1,param_2,&stack_pair_3c.first);
  if ((*(unsigned char *)(piStack_4c[0x1d] + 0x66) & 0x10) != 0) {
    piStack_4c = *(int **)(param_2 + 0x18);
  }
  uVar1 = *(unsigned short *)(piStack_4c + 0x31);
  *(unsigned short *)(piStack_4c + 0x31) = uVar1 + 1;
  if (uVar1 < 0xff) {
    fn_826C43B0(&piStack_50);
    fn_826B55A0(param_1[0xe],piStack_4c,param_1[0x12],param_1[0x13],
                      *(unsigned int *)(param_2 + 4),param_1 + 0xf,
                      *(unsigned char *)((int)param_1 + 0x66));
    fn_826C4E78(&piStack_50);
  }
  else {
    cVar2 = (**(int (***)())(*piStack_4c + 4))();
    if (cVar2 != '\0') {
      fn_826ADE60(piStack_4c,0xffffffff8200b9a8);
    }
  }
  *(short *)(piStack_4c + 0x31) = *(short *)(piStack_4c + 0x31) + -1;
  fn_826C36F0(&piStack_50);
  return;
}

