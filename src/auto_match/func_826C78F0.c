extern int fn_8267C498();
extern int fn_826C58D8();
extern int fn_826C5930();
extern int fn_826C59A0();


void fn_826C78F0(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned char cVar2;
  
  uVar1 = fn_826C58D8();
  if ((uVar1) != 0) {
    fn_826C5930(uVar1,0);
  }
  uVar1 = fn_826C59A0(param_1);
  if ((uVar1) != 0) {
    fn_826C78F0(uVar1,0);
  }
  if ((param_1[0x6f] != 0) && (cVar2 = (*(unsigned char (**)())(*param_1 + 0xa0))(param_1), cVar2 == '\0')) {
    fn_8267C498(param_1[0x6f]);
  }
  param_1[0x6f] = param_2;
  param_1[0x23] = param_1[0x23] & 0xffff7fff;
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    *(unsigned short *)(param_1 + 0x19) = 0;
    uVar1 = fn_826C59A0(param_2);
    if ((uVar1) != 0) {
      fn_826C78F0(uVar1,0);
    }
    fn_826C5930(param_2,param_1);
  }
  *(unsigned int *)(param_1[0x28] + 0xb00) = *(unsigned int *)(param_1[0x28] + 0xb00) | 0x400;
  return;
}

