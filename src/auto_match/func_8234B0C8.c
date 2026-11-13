extern unsigned int *auStack_40;
extern int fn_8234B190();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F2D60();
extern int fn_827F5708();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8234B0C8(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  double dVar3;
  double dVar4;
  unsigned char auStack_40 [64];
  
  uVar1 = fn_8234B190();
  dVar3 = (double)lbl_821CA460;
  if ((uVar1 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_2 + 0x2c)) {
    fn_8255F880(auStack_40,uVar1 + 0x40);
    dVar4 = (double)ltcg_pool_0_0f;
    uVar2 = fn_8255F8D0(dVar4,dVar3,auStack_40);
    fn_827F2D60(dVar4,*(unsigned int *)(param_2 + 0x20),uVar2,param_4,0x12,0);
    *(float *)(param_2 + 0x30) = (float)param_1;
    *(int *)(param_2 + 0x28) = (int)uVar2;
    *(int *)(param_2 + 0x2c) = (int)uVar1;
  }
  if ((*(int *)(param_2 + 0x34) != 0) && (*(int *)(param_2 + 0x24) != 0)) {
    fn_827F5708(dVar3);
  }
  return;
}

