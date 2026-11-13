extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_827DCBF8();
extern int fn_827E3638();
extern int fn_827E3DE0();


unsigned __int64
fn_827DC3E8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int in_stack_0000005c;
  unsigned char auStack_60 [96];
  
  uVar1 = fn_827E3638(0x90);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_827E3DE0(param_1,param_2,param_3,uVar1,param_5,param_6,param_7,param_8);
  }
  if (iVar3 == 0) {
    if (*(int *)(in_stack_0000005c + 4) != 0) {
      fn_822315A0();
    }
    uVar2 = 0x65f;
  }
  else {
    fn_827DCBF8(param_4 + 4,auStack_60);
    if (*(int *)(in_stack_0000005c + 4) != 0) {
      fn_822315A0();
    }
    uVar2 = 0;
  }
  return uVar2;
}

