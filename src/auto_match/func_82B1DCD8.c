extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82B1A610();
extern int fn_82B1AB88();
extern int fn_82B1ACA0();
extern int fn_82B8A1E8();
extern int fn_82B8A3A0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82B1DCD8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  uVar1 = fn_82B8A3A0((double)lbl_821AAD20,(double)lbl_82002AE0,(double)lbl_821AAD20,param_1,2
                           );
  if ((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
    uVar2 = fn_82B8A1E8();
    uVar3 = fn_82AD1918(param_1,uVar2,0,4);
    uVar4 = fn_82AD18C0(param_1,param_3,0);
    uVar3 = fn_82B1A610(param_1,param_2,uVar4,uVar3);
    uVar4 = fn_82AD18C0(param_1,uVar2,2);
    uVar5 = fn_82AD18C0(param_1,uVar3,0);
    uVar3 = fn_82AD18C0(param_1,uVar3,0);
    uVar3 = fn_82B1ACA0(param_1,param_2,uVar3,uVar5,uVar4);
    uVar4 = fn_82AD18C0(param_1,uVar2,1);
    uVar3 = fn_82AD18C0(param_1,uVar3,0);
    uVar3 = fn_82B1A610(param_1,param_2,uVar3,uVar4);
    uVar2 = fn_82AD1918(param_1,uVar2,2,4);
    uVar4 = fn_82AD18C0(param_1,uVar3,0);
    uVar2 = fn_82B1A610(param_1,param_2,uVar4,uVar2);
    uVar3 = fn_82AD18C0(param_1,uVar3,0);
    uVar1 = fn_82AD18C0(param_1,uVar1,0);
    uVar2 = fn_82AD18C0(param_1,uVar2,0);
    fn_82B1AB88(param_1,param_2,uVar2,uVar1,uVar3);
  }
  else {
    uVar1 = fn_82AD18C0(param_1,uVar1,1);
    uVar2 = fn_82AD18C0(param_1,param_3,0);
    fn_82B1A610(param_1,param_2,uVar2,uVar1);
  }
  return;
}

