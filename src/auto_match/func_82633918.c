extern int fn_826338A0();
extern int fn_82634DF8();
extern int fn_82637090();

struct Flags { unsigned int pad:29; unsigned int flag:1; unsigned int low:2; };

int fn_82633918(int *param_1,unsigned int *param_2)

{
  unsigned int v;
  
  fn_82634DF8(param_1,0,0,0,param_2);
  fn_82637090(param_1 + 0x18,param_2,param_1 + 0x14);
  if (((unsigned char)((struct Flags *)(*param_1 + 0x4db4))->flag == 0) &&
     (fn_826338A0(param_2,&v) != 0)) {
    param_1[0x4f] = param_1[0x4f] + 1;
    *(unsigned char *)((int)param_1 + (*param_2 & 0x3f) + 0x140) |= v;
  }
  return param_1[0x19] - 1;
}
