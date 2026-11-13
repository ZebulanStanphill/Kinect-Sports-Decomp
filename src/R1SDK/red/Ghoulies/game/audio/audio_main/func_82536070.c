extern unsigned int *auStack_40;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822A89B8();
extern int fn_82864848();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int *lbl_8327F848;
extern unsigned int *lbl_8327F868;
extern unsigned int lbl_8327F878;


void fn_82536070(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned char auStack_90 [16];
  unsigned char auStack_70 [48];
  unsigned char auStack_40 [40];
  
  fn_82864848(auStack_70);
  uVar2 = lbl_8327F878;
  uVar3 = fn_82230110(auStack_90,param_1);
  uVar4 = fn_822A89B8(uVar2,4,uVar3,auStack_70);
  fn_82230300(auStack_90,1,0);
  if ((uVar4 & 0xffffffff) >> 0x1f == 0) {
    iVar1 = *lbl_8327F848;
    uVar3 = fn_82864988(auStack_40,param_2);
    uVar4 = (**(int (***)())(iVar1 + 8))(lbl_8327F848,auStack_70,uVar3);
    fn_82864898(auStack_40);
    if ((uVar4 & 0xffffffff) >> 0x1f == 0) goto code_r0x82536158;
    uVar3 = 0x889;
    uVar5 = 0xffffffff821c3e88;
  }
  else {
    uVar3 = 0x881;
    uVar5 = 0xffffffff821c3e38;
  }
  (**(int (***)())(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,uVar3,uVar5);
code_r0x82536158:
  fn_82864898(auStack_70);
  return;
}

