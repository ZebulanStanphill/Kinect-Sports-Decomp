extern int fn_824CCAE8();
extern int fn_824CD030();
extern int fn_824CEC28();
extern int fn_824D3368();
extern int fn_824D33E8();
extern int fn_824DBC48();
extern int fn_824DCBE8();
extern int fn_828AAF70();


void fn_824D3210(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int *piVar1;
  int iVar6;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  
  iVar6 = fn_824CD030();
  if ((iVar6 != 0) && (iVar6 = *(int *)(param_2 + 0x20), iVar6 != 0)) {
    uVar2 = fn_824D3368(param_2);
    uVar3 = fn_824D33E8(param_2);
    fn_824DBC48(param_1,param_2 + 0x570,iVar6,param_4,uVar3,uVar2);
    uVar2 = fn_824D3368(param_2);
    uVar3 = fn_824D33E8(param_2);
    fn_824DBC48(param_1,param_2 + 0xf0,iVar6,param_4,uVar3,uVar2);
    fn_824DCBE8((double)*(float *)(param_2 + 0x54c),param_1,param_2 + 0x9f0,iVar6);
    piVar1 = *(int **)(param_2 + 0x14);
    if (piVar1 != (int *)0x0) {
      lVar4 = fn_824D33E8(param_2);
      lVar5 = (**(int (***)())(*piVar1 + 8))(piVar1);
      fn_828AAF70(lVar5 + 0x9cc,lVar4 != 0);
      lVar4 = fn_824D3368(param_2);
      lVar5 = (**(int (***)())(*piVar1 + 8))(piVar1);
      fn_828AAF70(lVar5 + 0xa20,lVar4 != 0);
    }
  }
  fn_824CEC28(param_2);
  fn_824CCAE8(param_1,param_2);
  return;
}

