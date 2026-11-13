extern int fn_8267B750();
extern int fn_8267B7E0();
extern int fn_82685798();


int fn_826858C8(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar1 = fn_8267B750(param_2);
  do {
    uVar2 = fn_8267B750(param_2);
    fn_82685798(*(unsigned int *)(param_1 + 4));
    uVar3 = fn_8267B750(param_2);
    if (uVar3 >= uVar2) break;
  } while ((uVar3 + param_3 & 0xffffffff) > uVar1);
  if ((uVar3 + param_3 & 0xffffffff) > uVar1) {
    fn_8267B7E0(param_2,*(unsigned int *)(param_2 + 0x2c) + param_3);
  }
  return 1;
}

