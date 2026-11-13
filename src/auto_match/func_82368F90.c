extern int fn_8252CB48();
extern int fn_82539560();
extern int fn_8256EA58();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_82192A78;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82368F90(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned int param_5,
                  int param_6)

{
  float fVar1;
  int iVar2;
  unsigned int uVar3;
  
  uVar3 = 2;
  if (param_6 == 0) {
    uVar3 = param_5;
  }
  iVar2 = (param_4 + 0xb2) * 4;
  fn_8252CB48(*(unsigned int *)(iVar2 + param_2),param_3,0,uVar3 & 0xff);
  uVar3 = 2;
  if (param_6 == 0) {
    uVar3 = param_5;
  }
  fn_8252CB48(*(unsigned int *)(iVar2 + param_2),param_3,1,uVar3 & 0xff);
  fn_8252CB48(*(unsigned int *)(iVar2 + param_2),param_3,2,param_6 == 0);
  if (*(int *)(param_2 + 0x34c) != 0) {
    fVar1 = ltcg_pool_0_0f;
    if ((param_6 == 0) && (fVar1 = lbl_821CA460, param_5 != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82539560(param_1,(double)lbl_82192A78,(double)lbl_821916FC,(double)lbl_821917C0,
                   (double)lbl_821CA460);
    }
    fn_8256EA58((double)fVar1,*(int *)(param_2 + 0x34c),
                    *(unsigned int *)((param_4 + 0x44) * 0xc + param_2));
    iVar2 = param_4 * 0xc + param_2;
    fn_8256EA58(*(unsigned int *)(param_2 + 0x34c),*(unsigned int *)(iVar2 + 0x334));
    fn_8256EA58(*(unsigned int *)(param_2 + 0x34c),*(unsigned int *)(iVar2 + 0x338));
  }
  return;
}

