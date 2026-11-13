extern unsigned int *auStack_340;
extern int fn_82E96A58();
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern unsigned int iStack_34c;


void fn_82E97140(int param_1,__int64 param_2,__int64 param_3,int *param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  int iVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned int in_stack_0000005c;
  unsigned int *in_stack_0000007c;
  unsigned int *in_stack_00000084;
  int *in_stack_0000008c;
  int in_stack_00000094;
  int iStack_34c;
  unsigned char auStack_340 [832];
  
  uVar1 = *in_stack_0000007c;
  uVar2 = *in_stack_00000084;
  fn_82E96A58();
  if (*(int *)(param_1 + 0x6d74) != 0) {
    if (*param_4 == 0) {
      uVar14 = (unsigned __int64)(unsigned int)param_4[2];
      uVar13 = (unsigned __int64)(unsigned int)param_4[3];
    }
    else {
      uVar11 = uVar1 - param_4[2];
      uVar10 = uVar2 - param_4[3];
      uVar9 = uVar1 - param_4[4];
      uVar3 = (int)uVar11 >> 0x1f;
      uVar8 = uVar2 - param_4[5];
      uVar4 = (int)uVar10 >> 0x1f;
      uVar5 = (int)uVar9 >> 0x1f;
      uVar6 = (int)uVar8 >> 0x1f;
      uVar13 = (unsigned __int64)(unsigned int)param_4[5];
      uVar14 = (unsigned __int64)(unsigned int)param_4[4];
      if ((int)(((uVar11 ^ uVar3) - uVar3) + ((uVar10 ^ uVar4) - uVar4)) <
          (int)(((uVar9 ^ uVar5) - uVar5) + ((uVar8 ^ uVar6) - uVar6))) {
        uVar13 = (unsigned __int64)(unsigned int)param_4[3];
        uVar14 = (unsigned __int64)(unsigned int)param_4[2];
      }
    }
    param_3 = (__int64)((int)uVar2 >> 2) * (__int64)*(int *)(param_1 + 0x564) +
              (__int64)((int)uVar1 >> 2) + param_3;
    (**(int (***)())(param_1 + 0xa5c))
              (param_3,*(int *)(param_1 + 0x564),auStack_340,0x10,uVar1 & 3,uVar2 & 3,
               *(unsigned int *)(param_1 + 0x618));
    fn_82E9AC18(param_1,param_2,0x10,auStack_340,0x10,8,8,param_5);
    if (in_stack_00000094 == 0) {
      (**(int (***)())(param_1 + 0xa5c))
                (((unsigned __int64)*(unsigned int *)(param_1 + 0x564) & 0x1fffffff) * 8 + param_3,
                 *(unsigned int *)(param_1 + 0x564),auStack_340,0x10,uVar1 & 3,uVar2 & 3,
                 *(unsigned int *)(param_1 + 0x618));
      fn_82E9AC18(param_1,param_2 + 0x80,0x10,auStack_340,0x10,8,8,param_5);
    }
    else {
      (**(int (***)())(param_1 + 0xa5c))(param_3 + 8);
      fn_82E9AC18(param_1,param_2 + 8,0x10,auStack_340,0x10,8,8,param_5);
    }
    iVar7 = fn_82E9B140(param_1,uVar1 - uVar14,uVar2 - uVar13,in_stack_0000005c,0);
    iVar12 = iVar7 + 2;
    if (*param_4 != 0) {
      iVar12 = iVar7 + 3;
    }
    iStack_34c = *(int *)(param_1 + 0x6f14) * iVar12;
  }
  *in_stack_0000007c = uVar1;
  *in_stack_00000084 = uVar2;
  *in_stack_0000008c = iStack_34c;
  return;
}

