extern int fn_82B7BD28();
extern int fn_82BAFE48();
extern int fn_82BC0A30();
extern int fn_82BC13C0();
extern int fn_82BC2958();
extern int fn_82BC3A28();
extern int fn_82BC43D8();
extern int fn_82BC5538();
extern int fn_82BC5580();
extern unsigned int lbl_820E3514;
extern unsigned int lbl_820E36A0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int * fn_82BC1BA0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar7;
  unsigned __int64 uVar6;
  
  fn_82BC13C0();
  *param_1 = &lbl_820E3514;
  iVar1 = *(int *)(param_4 + 0xab0);
  iVar4 = (lbl_820E36A0 + 6) * 4;
  iVar3 = *(int *)(iVar4 + iVar1);
  if (iVar3 == 0) {
    uVar5 = fn_82BAFE48(*(unsigned int *)(iVar1 + 0xac),0xf);
    uVar2 = *(unsigned int *)(param_4 + 0x5ac);
    puVar7 = (unsigned int *)fn_82B7BD28(uVar2,0x3c4);
    *puVar7 = uVar2;
    if (puVar7 + 1 == (unsigned int *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_82BC3A28(puVar7 + 1,param_1,param_4);
    }
    fn_82BC5580(*(unsigned int *)(iVar1 + 0xa4),uVar6);
    fn_82BC2958(uVar6,0,uVar5);
    fn_82BC0A30(uVar5,uVar6);
    *(int *)(iVar4 + iVar1) = (int)uVar6;
  }
  else {
    uVar5 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x1c);
  }
  uVar6 = fn_82BC43D8(0x31,param_4);
  fn_82BC2958(uVar6,1,uVar5);
  fn_82BC2958(uVar6,0,param_1);
  fn_82BC0A30(param_1,uVar6);
  fn_82BC5538(*(unsigned int *)(iVar1 + 0xa4),uVar6);
  return param_1;
}

