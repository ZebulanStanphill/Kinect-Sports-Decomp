typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 undefined8;
extern int fn_83049320();
extern int fn_830493C8();
extern int fn_8304D6F0(int, uint, uint *, int);

int fn_83049850(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)
{
  int iVar1;
  uint uStack_40;
  uint auStack_3c;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((*(byte *)(iVar1 + 0xdb) & 0x80) != 0) {
    fn_8304D6F0(param_1,(uint)(((ulonglong)*(uint *)(*(int *)(iVar1 + 0x6c) + 0x20) *
                         (ulonglong)*(uint *)(iVar1 + 0xd0)) / 48000),&auStack_3c,
                 param_1 + 0x1c);
    uStack_40 = auStack_3c;
    if ((auStack_3c > *(uint *)(param_2 + 0x18)) ||
       (iVar1 = fn_830493C8(param_1,&uStack_40,param_2,param_4,param_5), iVar1 != 1)) {
      return 2;
    }
    iVar1 = *(int *)(param_1 + 8);
    *(uint *)(param_1 + 0x3c) = uStack_40;
    *(uint *)(iVar1 + 0xd0) = auStack_3c - uStack_40;
    *(byte *)(iVar1 + 0xdb) = *(byte *)(iVar1 + 0xdb) & 0x7f;
  }
  fn_83049320(param_1,param_3,*(unsigned short *)(param_1 + 0x1c));
  return 1;
}
