extern unsigned int *auStack_240;
extern unsigned int *auStack_250;
extern int fn_8260A488();
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CED628();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82D93880();
extern int fn_82D93B08();
extern int fn_82D93C00();
extern int fn_82D962A8();
extern int fn_82D976F0();
extern int fn_82D97750();
extern int fn_82D977B0();
extern int fn_82D97C48();
extern int fn_82D97CB8();
extern int fn_82DED890();
extern unsigned int *lbl_8323B464;


void fn_82DED8F0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar8;
  unsigned __int64 uVar5;
  __int64 lVar6;
  __int64 lVar7;
  int iVar9;
  unsigned char auStack_250 [16];
  unsigned char auStack_240 [576];
  
  piVar1 = *(int **)(param_1 + 0xc);
  uVar2 = *(unsigned int *)(param_1 + 0x14);
  uVar3 = *(unsigned int *)(param_1 + 0x18);
  iVar8 = (**(int (***)())(*piVar1 + 0x20))(piVar1);
  if (iVar8 == 2) {
    iVar8 = fn_82CE5410();
    iVar8 = (**(int (***)())(**(int **)(iVar8 + 0x10) + 4))(*(int **)(iVar8 + 0x10),0xe0);
    *(unsigned short *)(iVar8 + 4) = 0xe0;
    iVar8 = fn_82D93C00();
    fn_8260A488(iVar8 + 0x10,piVar1 + 4);
    if (*(int *)(iVar8 + 0xb0) != 0) {
      fn_82CE4040();
    }
    fn_82D93880(iVar8,param_2);
    fn_82D93B08(iVar8,0,param_3);
    iVar9 = fn_82CE5410();
    iVar9 = (**(int (***)())(**(int **)(iVar9 + 0x10) + 4))(*(int **)(iVar9 + 0x10),0x38);
    *(unsigned short *)(iVar9 + 4) = 0x38;
    lVar6 = fn_82D962A8(iVar9,uVar2,uVar3,iVar8,*(unsigned char *)(param_1 + 0x1c));
    fn_82CE4118(iVar8);
                    /* WARNING: Subroutine does not return */
    fn_82CED628(lVar6 + 0x28,*(unsigned int *)(param_1 + 0x28) & 0xfffffffe);
  }
  if (iVar8 != 7) {
    fn_82CEE578(auStack_250,auStack_240,0x200);
    uVar4 = *(unsigned int *)(param_1 + 0x28);
    uVar5 = fn_82CEDB38(auStack_250,0xffffffff821454d4);
    uVar5 = fn_82CEDB38(uVar5,uVar4 & 0xfffffffe);
    fn_82CEDB38(uVar5,0xffffffff821454b8);
    (**(int (***)())(*lbl_8323B464 + 0xc))
              (lbl_8323B464,1,0xffffffffabba1b34,auStack_240,0xffffffff82145380,0x6f);
                    /* WARNING: Subroutine does not return */
    fn_82CED958(auStack_250);
  }
  iVar8 = fn_82CE5410();
  iVar8 = (**(int (***)())(**(int **)(iVar8 + 0x10) + 4))(*(int **)(iVar8 + 0x10),0x140);
  *(unsigned short *)(iVar8 + 4) = 0x140;
  lVar6 = fn_82D97CB8();
  fn_82DED890(piVar1 + 4,lVar6 + 0x10);
  fn_82D976F0(lVar6,param_2);
  fn_82D977B0(lVar6,param_2);
  fn_82D97750(lVar6,param_2);
  fn_82D97C48(lVar6,0,param_3);
  iVar8 = fn_82CE5410();
  iVar8 = (**(int (***)())(**(int **)(iVar8 + 0x10) + 4))(*(int **)(iVar8 + 0x10),0x38);
  *(unsigned short *)(iVar8 + 4) = 0x38;
  lVar7 = fn_82D962A8(iVar8,uVar2,uVar3,lVar6,*(unsigned char *)(param_1 + 0x1c));
  fn_82CE4118(lVar6);
                    /* WARNING: Subroutine does not return */
  fn_82CED628(lVar7 + 0x28,*(unsigned int *)(param_1 + 0x28) & 0xfffffffe);
}

