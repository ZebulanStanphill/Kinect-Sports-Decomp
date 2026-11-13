#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_30;
extern int fn_82230360();
extern int fn_824C9D48();
extern int fn_824C9FB8();
extern int fn_824CC5A0();
extern int fn_82F63108();
extern unsigned int iStack_34;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_824C9678(double param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float afStack_40 [2];
  float *pfStack_38;
  int iStack_34;
  unsigned char auStack_30 [24];
  
  puVar2 = (unsigned int *)(param_2 + 8);
  if (0xf < *(unsigned int *)(param_2 + 0x1c)) {
    puVar2 = (unsigned int *)*puVar2;
  }
  iVar1 = fn_824C9FB8(param_2,puVar2);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x80) != 0) {
      if (*(int *)(iVar1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(int (***)())(**(int **)(iVar1 + 0x80) + 4))(param_1);
    }
    pfStack_38 = afStack_40;
    afStack_40[0] = (float)param_1;
    iStack_34 = param_2;
    fn_824CC5A0(&pfStack_38,*(unsigned int *)(iVar1 + 0x48),*(unsigned int *)(iVar1 + 0x4c),
                    CONCAT44(pfStack_38,param_2));
  }
  pfStack_38 = afStack_40;
  afStack_40[0] = (float)param_1;
  iStack_34 = param_2;
  fn_824CC5A0(auStack_30,*(unsigned int *)(param_2 + 100),*(unsigned int *)(param_2 + 0x68),
                  CONCAT44(pfStack_38,param_2));
  if (*(int *)(param_2 + 0x40) != 0) {
    dVar4 = (double)(float)((double)*(float *)(param_2 + 0x40) - param_1);
    dVar7 = (double)ltcg_pool_0_0f;
    dVar6 = -dVar4;
    dVar5 = dVar7;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar6 < dVar7) << 2) | (unsigned int)(NAN(dVar6) || NAN(dVar7)) << 2)) <
        0.0) {
      dVar5 = dVar4;
    }
    *(float *)(param_2 + 0x40) = (float)dVar5;
    if (dVar5 == dVar7) {
      puVar3 = (unsigned int *)(param_2 + 0x24);
      puVar2 = puVar3;
      if (0xf < *(unsigned int *)(param_2 + 0x38)) {
        puVar2 = (unsigned int *)*puVar3;
      }
      fn_824C9D48(param_2,puVar2);
      *(float *)(param_2 + 0x40) = (float)dVar7;
      fn_82230360(puVar3,0xffffffff82196582,0);
    }
  }
  return;
}

