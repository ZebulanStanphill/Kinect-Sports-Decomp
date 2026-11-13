#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_58;
extern unsigned int *auStack_70;
extern unsigned int *auStack_8c;
extern unsigned int *auStack_90;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_822315A0();
extern int fn_828C01A0();
extern int fn_828CCCC0();
extern int fn_828E0268();
extern int fn_828E2A80();
extern int fn_828E2D30();
extern int fn_828E2FE8();
extern int fn_828E36E8();
extern int fn_828E39E8();
extern int fn_828E4598();
extern unsigned int iStack_84;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_b1;
extern unsigned int uStack_c4;


/* WARNING: Type propagation algorithm not settling */

void fn_828E4768(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar5;
  unsigned char auStack_d0 [8];
  int (**pcStack_c8)();
  unsigned int uStack_c4;
  unsigned char auStack_c0 [15];
  unsigned char uStack_b1;
  int aiStack_b0 [4];
  int *piStack_a0;
  unsigned char auStack_90 [4];
  unsigned char auStack_8c [4];
  int *piStack_88;
  int iStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned char auStack_70 [24];
  unsigned char auStack_58 [56];
  
  uVar3 = (**(int (***)())(*param_1 + 0xc))();
  uStack_c4 = 0;
  pcStack_c8 = fn_828E36E8;
  piStack_88 = param_1;
  fn_828E2FE8(aiStack_b0,0x828e36e800000000,CONCAT44(param_1,iStack_84),
                  CONCAT44(uStack_80,uStack_7c),auStack_d0);
  uStack_80 = 0;
  fn_828C01A0(auStack_70,aiStack_b0);
  fn_828C01A0(auStack_58,auStack_90);
  (**(int (***)())(*(int *)*param_3 + 4))((int *)*param_3,auStack_70);
  fn_828E2A80(auStack_70);
  if (piStack_a0 != (int *)0x0) {
    iVar5 = (int)aiStack_b0 + -(int)piStack_a0;
    (**(int (***)())(*piStack_a0 + 0xc))
              (piStack_a0,iVar5 - (int)(&uStack_b1 + (unsigned int)(iVar5 == 0) + -(int)piStack_a0));
  }
  iVar5 = param_1[1];
  uVar4 = (**(int (***)())(*param_1 + 0xc))(param_1);
  aiStack_b0[1] = 0;
  aiStack_b0[2] = 0;
  aiStack_b0[0] = iVar5;
  fn_828CCCC0(aiStack_b0 + 1,*param_3,param_3[1],0);
  aiStack_b0[3] = uVar3;
  piStack_a0 = (int *)uVar4;
  uVar1 = fn_828E0268(&pcStack_c8,param_2);
  fn_828E39E8(auStack_90,uVar1,aiStack_b0);
  lVar2 = fn_828E2D30(param_1 + 2);
  if (lVar2 + 0xc != 0) {
    fn_828E39E8(lVar2 + 0xc,auStack_90,auStack_8c);
  }
  fn_828E4598(auStack_c0,param_1 + 2,lVar2,0);
  if (iStack_84 != 0) {
    fn_822315A0();
  }
  if (aiStack_b0[2] != 0) {
    fn_822315A0();
  }
  return;
}

