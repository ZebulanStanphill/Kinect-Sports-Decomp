extern unsigned int *auStack_38;
extern unsigned int *auStack_3c;
extern int fn_827F7218();
extern int fn_827F98C8();
extern int fn_82800A48();
extern int fn_8280CB70();
extern unsigned int uStack_40;


void fn_827F7608(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uStack_40;
  unsigned char auStack_3c [4];
  unsigned char auStack_38 [56];
  
  fn_827F98C8(param_1,param_2,auStack_3c);
  uVar1 = *(unsigned int *)(param_1 + 0xc);
  uVar3 = fn_827F7218(param_1,param_2);
  fn_827F98C8(param_1,uVar3,auStack_38);
  uVar2 = *(unsigned int *)(param_1 + 0xc);
  fn_82800A48(param_1,param_2,&uStack_40);
  fn_8280CB70((uVar3 & 0x3ffffff) * 0x40 + (unsigned __int64)uVar2,uStack_40,
               (param_2 & 0x3ffffff) * 0x40 + (unsigned __int64)uVar1);
  return;
}

