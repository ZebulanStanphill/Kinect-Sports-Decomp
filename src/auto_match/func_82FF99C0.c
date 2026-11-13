extern unsigned int *auStack_40;
extern int fn_82FA5060();
extern int fn_82FF86A8();
extern int fn_82FF8938();
extern int fn_82FF8988();
extern int fn_82FF8ED8();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_82FF99C0(__int64 param_1,int param_2,unsigned __int64 param_3,char param_4)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned char auStack_40 [16];
  
  uVar3 = 1;
  if (*(int *)(param_2 + 0x20) == 0) {
    uVar4 = (param_3 & 0xffffffff) / 0xc;
    uVar5 = uVar4 * 0xc & 0xfffffffc;
    if (param_4 == '\0') {
      uVar1 = fn_82FA5060(lbl_831BC768);
      *(int *)(param_2 + 0x28) = (int)uVar1;
      if ((uVar1 & 0xffffffff) == 0) {
        uVar3 = 0x34;
      }
      else {
        *(unsigned char *)(param_2 + 0x48) = *(unsigned char *)(param_2 + 0x48) | 0x40;
        fn_82FF8938(param_1 + 4,uVar1,uVar5);
      }
    }
    else {
      uVar2 = fn_82FF8ED8(param_1 + 4,uVar5);
      if (*(int *)(param_2 + 0x28) == 0) {
        *(unsigned int *)(param_2 + 0x28) = uVar2;
      }
      fn_82FF86A8(param_1 + 4);
    }
    if (*(int *)(param_2 + 0x28) != 0) {
      *(int *)(param_2 + 0x24) = (int)uVar4;
    }
  }
  else {
    fn_82FF8988(param_1 + 4,param_3,auStack_40);
    uVar3 = 1;
  }
  return uVar3;
}

