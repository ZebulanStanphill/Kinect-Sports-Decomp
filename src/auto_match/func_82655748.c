extern unsigned int *auStack_e0;
extern int fn_82F691F0();
extern int fn_8314276C();
extern unsigned int iStack_d8;
extern unsigned int uStack0000004c;
extern unsigned int uStack_c4;


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82655748(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,int *param_7,unsigned int param_8)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int *piStack00000044;
  unsigned int uStack0000004c;
  int *in_stack_00000054;
  unsigned int in_stack_00000064;
  unsigned char auStack_e0 [8];
  int iStack_d8;
  unsigned int uStack_c4;
  
  piStack00000044 = param_7;
  uStack0000004c = param_8;
  fn_8314276C(auStack_e0);
  uVar2 = ((unsigned __int64)(iStack_d8 == 0) ^ 1) + 1;
  if ((param_2 == 0) && ((param_3 & 0xffffffff) == 0)) {
    param_3 = param_6;
  }
  uVar1 = (param_3 & 0xffffffff) >> 0x10;
  uVar3 = (param_5 & 0xffffffff) >> 0x10;
  if (*in_stack_00000054 == 0) {
    if (uVar1 == uVar3) {
      iVar4 = 7;
    }
    else {
      iVar4 = (-(unsigned int)(uVar1 < uVar3) & 0xfffffffc) + 5;
    }
    *in_stack_00000054 = iVar4;
  }
  if (*param_7 == 0) {
    uVar3 = (param_5 & 0xffff) / uVar2;
    trapWord(6,uVar2,0);
    if ((param_3 & 0xffff) == uVar3) {
      iVar4 = (-(unsigned int)(iStack_d8 != 0) & 0xfffffffe) + 7;
    }
    else {
      iVar4 = (-(unsigned int)((param_3 & 0xffff) < uVar3) & 0xfffffffc) + 5;
    }
    *param_7 = iVar4;
  }
  trapWord(6,(unsigned __int64)uStack_c4,0);
  trapWord(6,uVar1,0);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(in_stack_00000064,0,0x580);
}

