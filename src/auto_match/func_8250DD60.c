extern int fn_8250C3B0();
extern int fn_8250C540();
extern int fn_8250C6A0();
extern int fn_827F3C20();
extern int fn_827F3C28();
extern int fn_827F3C48();
extern int fn_827F4868();
extern int fn_827F7210();
extern unsigned int lbl_821CA460;


void fn_8250DD60(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  short sVar5;
  double dVar6;
  
  fn_827F3C48(param_1,0);
  uVar2 = fn_827F3C28();
  fn_827F3C48(param_1,1);
  uVar3 = fn_827F3C28();
  uVar4 = fn_827F3C20(param_1);
  dVar6 = (double)fn_827F4868(param_1);
  uVar1 = *(unsigned int *)(param_1 + 0xe8);
  sVar5 = fn_827F7210(uVar2);
  if (sVar5 != 0) {
    fn_8250C6A0(dVar6,uVar2,uVar3,uVar4,param_4,uVar1);
  }
  fn_8250C540((double)(float)((double)lbl_821CA460 - dVar6),dVar6,uVar2,uVar3,uVar4);
  fn_8250C3B0(uVar2,uVar3,uVar4);
  return;
}

