extern unsigned int *auStack_60;
extern int fn_82230360();
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_828A17A0();
extern int fn_828AC450();
extern int fn_828D0BE0();
extern int fn_82F68CC0();
extern unsigned int iStack_5c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82025400;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83213FC8;


unsigned int *
fn_828B9D90(unsigned int *param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned char param_7,unsigned __int64 param_8)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned char *puVar6;
  unsigned char *puVar7;
  __int64 lVar8;
  int in_stack_00000054;
  unsigned char auStack_60 [4];
  int iStack_5c;
  
  *param_1 = &lbl_82025400;
  param_1[2] = 0;
  lVar8 = 8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar7 = (unsigned char *)(param_4 + -1);
  param_1[8] = 0;
  puVar6 = (unsigned char *)((int)param_1 + 0x27);
  do {
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
    *puVar6 = *puVar7;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  fn_82F68CC0(param_1 + 0xc,param_5,0x10);
  fn_82F68CC0(param_1 + 0x10,param_6,0x24);
  *(unsigned char *)(param_1 + 0x19) = param_7;
  *(unsigned __int64 *)(param_1 + 0x1a) = param_3;
  iVar1 = *(int *)(param_2 + 0x90);
  *(int *)(param_2 + 0x90) = iVar1 + 1;
  param_1[0x1c] = iVar1;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(unsigned char *)(param_1 + 0x1d) = 0;
  fn_82230360(param_1 + 0x1d,0xffffffff82196582,0);
  param_1[0x24] = param_2;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(unsigned char *)(param_1 + 0x27) = 0;
  uVar3 = lbl_821AAD20;
  *(unsigned char *)((int)param_1 + 0x9d) = 0;
  uVar2 = lbl_82002AE0;
  *(unsigned char *)((int)param_1 + 0x9e) = 0;
  param_1[0x28] = uVar3;
  *(unsigned char *)(param_1 + 0x29) = 0;
  param_1[0x2b] = uVar3;
  *(unsigned char *)((int)param_1 + 0xa5) = 0;
  param_1[0x2c] = uVar3;
  *(unsigned char *)((int)param_1 + 0xa6) = 0;
  param_1[0x2d] = uVar2;
  *(unsigned short *)(param_1 + 0x2a) = 0xffff;
  fn_828AC450(param_1 + 0x2e,param_8);
  if (in_stack_00000054 != 0) {
    uVar5 = (unsigned __int64)lbl_83213FC8;
    if (uVar5 == 0) {
      uVar5 = fn_828A17A0();
    }
    uVar4 = fn_828D0BE0(auStack_60,uVar5,in_stack_00000054 == 2,param_1 + 0x10,param_1 + 10,
                              param_1 + 0xc);
    fn_823F2E20(param_1 + 0x25,uVar4);
    if (iStack_5c != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

