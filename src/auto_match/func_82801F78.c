extern unsigned int *auStack_b0;
extern int fn_827F9E08();
extern int fn_82805590();
extern int fn_828079D8();
extern int fn_82807A48();
extern int fn_82807A50();
extern int fn_82807A58();
extern int fn_82807A68();
extern int fn_82807A70();
extern int fn_82807A78();
extern int fn_82807A88();
extern int fn_82807A90();
extern int fn_82807A98();
extern int fn_82807AA0();
extern int fn_82807AA8();
extern int fn_82807AB0();
extern int fn_82807AB8();
extern int fn_82808638();


void fn_82801F78(unsigned __int64 param_1, int param_2, unsigned __int64 param_3, unsigned __int64 param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned __int64 param_8, unsigned __int64 param_9, unsigned int in_stack_0000005c)

{
  int iVar1;
  unsigned __int64 uVar2;

  unsigned char auStack_b0 [96];
  
  fn_828079D8(auStack_b0);
  fn_82807A50(auStack_b0,param_9);
  fn_82807AB0(param_1,auStack_b0);
  fn_82807A70(auStack_b0,param_9);
  fn_82807A58(auStack_b0,0xc);
  fn_82807A68(auStack_b0,1);
  fn_82807AA0(auStack_b0,0xffffffff83156d30);
  fn_82807AA8(auStack_b0,0xc);
  fn_82807A98(auStack_b0,param_8);
  fn_82805590(auStack_b0,in_stack_0000005c);
  fn_82807A48(auStack_b0,*(unsigned int *)(param_2 + 0x9c));
  iVar1 = fn_827F9E08(param_2);
  if (iVar1 == 0) {
    fn_82807A88(auStack_b0,0xffffffff83156cd0);
    uVar2 = 2;
  }
  else {
    if (iVar1 != 1) goto LAB_82802088;
    fn_82807A78(auStack_b0,0xffffffff83156c40);
    fn_82807A88(auStack_b0,0xffffffff83156d00);
    uVar2 = 6;
  }
  fn_82807A90(auStack_b0,uVar2);
LAB_82802088:
  fn_82808638(auStack_b0,param_4,param_5,param_7);
  if ((param_6 & 0xffffffff) != 0) {
    fn_82807AB8(auStack_b0,param_4,param_6,1);
  }
  return;
}

