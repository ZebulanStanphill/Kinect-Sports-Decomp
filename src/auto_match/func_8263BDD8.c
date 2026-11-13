extern unsigned int *auStack_44;
extern int fn_8262F8D8();
extern int fn_8263AB38();
extern int fn_8263B958();
extern unsigned int uStack_50;


void fn_8263BDD8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned int *param_5,int *param_6,unsigned __int64 param_7,unsigned int *param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uStack_50;
  int aiStack_4c [2];
  unsigned char auStack_44 [20];
  
  fn_8263B958();
  uVar1 = *(unsigned int *)(param_1 + 0x20);
  fn_8263AB38(uVar1 & 0x3f,auStack_44,aiStack_4c);
  uVar2 = *(unsigned int *)(param_1 + 0x30);
  uVar3 = *param_5;
  uVar4 = *param_8;
  *param_6 = *param_6 * aiStack_4c[0];
                    /* WARNING: Subroutine does not return */
  fn_8262F8D8(param_1,0xe,param_3,uVar1 & 0xfffff000,uVar2 & 0xfffff000,
                    (unsigned __int64)uVar3 - (unsigned __int64)uVar4,uStack_50,param_4);
}

