extern unsigned int *auStack_50;
extern int fn_8251F720();
extern int fn_8255F448();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F21F0();
extern int fn_827F2220();
extern int fn_827F5730();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821CA460;


void fn_8234F188(unsigned __int64 param_1,unsigned __int64 param_2,double param_3,double param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 extraout_f1;
  unsigned char auStack_50 [80];
  
  iVar4 = fn_82F6A548();
  uVar2 = extraout_f1;
  fn_8255F880(auStack_50);
  uVar2 = fn_8255F8D0(uVar2,param_2,auStack_50);
  *(float *)(*(int *)(iVar4 + 4) + 0x184) = (float)param_3;
  iVar1 = *(int *)(iVar4 + 4);
  uVar3 = fn_8251F720(param_7,0);
  fn_8255F448(iVar1,uVar2,uVar3,0);
  *(unsigned int *)(iVar1 + 0x168) = 0;
  *(unsigned int *)(iVar1 + 0x160) = *(unsigned int *)param_7;
  fn_827F21F0(*(unsigned int *)(iVar4 + 4));
  fn_827F2220(*(unsigned int *)(iVar4 + 4));
  fn_827F5730((double)lbl_821CA460,param_4,*(unsigned int *)(iVar4 + 0xc));
  *(float *)(iVar4 + 0x14) = (float)param_4;
  fn_82F6A594();
  return;
}

