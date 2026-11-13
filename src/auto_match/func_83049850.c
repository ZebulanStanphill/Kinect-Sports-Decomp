extern int fn_83049320();
extern int fn_830493C8();
extern int fn_8304D6F0(int, unsigned int, unsigned int *, int);

int fn_83049850(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)
{
  int iVar1;
  unsigned int uStack_40;
  unsigned int auStack_3c;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((*(unsigned char *)(iVar1 + 0xdb) & 0x80) != 0) {
    fn_8304D6F0(param_1,(unsigned int)(((unsigned __int64)*(unsigned int *)(*(int *)(iVar1 + 0x6c) + 0x20) *
                         (unsigned __int64)*(unsigned int *)(iVar1 + 0xd0)) / 48000),&auStack_3c,
                 param_1 + 0x1c);
    uStack_40 = auStack_3c;
    if ((auStack_3c > *(unsigned int *)(param_2 + 0x18)) ||
       (iVar1 = fn_830493C8(param_1,&uStack_40,param_2,param_4,param_5), iVar1 != 1)) {
      return 2;
    }
    iVar1 = *(int *)(param_1 + 8);
    *(unsigned int *)(param_1 + 0x3c) = uStack_40;
    *(unsigned int *)(iVar1 + 0xd0) = auStack_3c - uStack_40;
    *(unsigned char *)(iVar1 + 0xdb) = *(unsigned char *)(iVar1 + 0xdb) & 0x7f;
  }
  fn_83049320(param_1,param_3,*(unsigned short *)(param_1 + 0x1c));
  return 1;
}
