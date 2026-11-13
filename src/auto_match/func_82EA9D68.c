extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82E9AC18();
extern int fn_82F26110();
extern unsigned int *iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int lbl_82005730;
extern unsigned int stack0x00000064;
extern unsigned int stack0x0000006c;
extern unsigned int stack0x00000074;
extern unsigned int stack0x0000007c;


void fn_82EA9D68(int param_1,int param_2,__int64 param_3,__int64 param_4,int param_5,int param_6
                  ,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned char bVar1;
  int (**pcVar2)();
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned char *pbVar10;
  unsigned char *pbVar11;
  unsigned char *pbVar12;
  unsigned char *pbVar13;
  unsigned char *pbVar14;
  unsigned char *pbVar15;
  unsigned char *pbVar16;
  unsigned char *pbVar17;
  unsigned char *pbVar18;
  unsigned char *pbVar19;
  unsigned char *pbVar20;
  unsigned char *pbVar21;
  unsigned char *pbVar22;
  unsigned char *pbVar23;
  unsigned char *pbVar24;
  unsigned char *pbVar25;
  unsigned char *pbVar26;
  unsigned char *pbVar27;
  unsigned char *pbVar28;
  unsigned char *pbVar29;
  unsigned char *pbVar30;
  unsigned char *pbVar31;
  unsigned char *pbVar32;
  int iVar33;
  unsigned char *pbVar34;
  __int64 lVar35;
  unsigned char *pbVar36;
  int in_stack_00000054;
  unsigned int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  int in_stack_00000084;
  int *in_stack_0000008c;
  int iStack_ac;
  int iStack_a8;
  
  pcVar2 = *(int (***)())(in_stack_00000084 + 8);
  iStack_ac = 0;
  fn_82F26110(param_1,&stack0x00000064,&stack0x0000006c,param_7,param_8);
  lVar35 = (__int64)(in_stack_0000006c >> 2) * (__int64)*(int *)(param_1 + 0x564) +
           (__int64)(in_stack_00000064 >> 2);
  if (in_stack_00000054 == 1) {
    (**(int (***)())(param_1 + 0x9b8))(lVar35 + param_3);
  }
  else {
    (**(int (***)())(param_1 + 0x9c0))
              (lVar35 + param_3,*(int *)(param_1 + 0x564),param_5,0x10,in_stack_00000064,
               in_stack_0000006c,0,*(unsigned int *)(param_1 + 0x618));
  }
  fn_82F26110(param_1,&stack0x00000074,&stack0x0000007c,param_7,param_8);
  iVar33 = *(int *)(param_1 + 0x564);
  if (in_stack_00000054 == 1) {
    (**(int (***)())(param_1 + 0x9b8))
              ((__int64)(in_stack_0000007c >> 2) * (__int64)iVar33 +
               (__int64)(in_stack_00000074 >> 2) + param_4);
  }
  else {
    (**(int (***)())(param_1 + 0x9c0))
              ((__int64)(in_stack_0000007c >> 2) * (__int64)iVar33 +
               (__int64)(in_stack_00000074 >> 2) + param_4,iVar33,param_5 + 0x100,0x10,
               in_stack_00000074,in_stack_0000007c,0,*(unsigned int *)(param_1 + 0x618));
  }
  (**(int (***)())(param_1 + 0xb1c))(param_5,0x10,param_5 + 0x100,0x10,param_5,0x10,0x10,0x10);
  if (*(int *)(param_1 + 0x6d74) == 0) {
    if (*(int *)(param_1 + 0x6d78) == 0) {
      iVar33 = (*pcVar2)(param_2,0x10,param_5,0x10,in_stack_0000005c);
      *in_stack_0000008c = iVar33;
    }
    else {
      lVar35 = 0x10;
      pbVar34 = (unsigned char *)(param_5 + -0x10);
      pbVar36 = (unsigned char *)(param_2 + 0xe);
      do {
        pbVar3 = pbVar34 + 0x15;
        pbVar4 = pbVar36 + -9;
        pbVar5 = pbVar34 + 0x14;
        pbVar6 = pbVar36 + -10;
        pbVar7 = pbVar34 + 0x17;
        pbVar8 = pbVar34 + 0x18;
        pbVar9 = pbVar34 + 0x19;
        pbVar10 = pbVar34 + 0x1a;
        pbVar11 = pbVar34 + 0x16;
        pbVar12 = pbVar34 + 0x1b;
        pbVar13 = pbVar34 + 0x1c;
        pbVar14 = pbVar34 + 0x1d;
        pbVar15 = pbVar34 + 0x1f;
        pbVar16 = pbVar34 + 0x13;
        pbVar17 = pbVar34 + 0x12;
        pbVar18 = pbVar34 + 0x11;
        pbVar34 = pbVar34 + 0x10;
        pbVar19 = pbVar36 + -8;
        pbVar20 = pbVar36 + -7;
        pbVar21 = pbVar36 + -6;
        pbVar22 = pbVar36 + -5;
        pbVar23 = pbVar36 + -4;
        pbVar24 = pbVar36 + -3;
        pbVar25 = pbVar36 + -2;
        pbVar26 = pbVar36 + -1;
        pbVar27 = pbVar36 + (param_5 - param_2);
        bVar1 = *pbVar36;
        pbVar28 = pbVar36 + 1;
        pbVar29 = pbVar36 + -0xb;
        pbVar30 = pbVar36 + -0xc;
        pbVar31 = pbVar36 + -0xd;
        pbVar32 = pbVar36 + -0xe;
        pbVar36 = pbVar36 + 0x10;
        iStack_ac = ((unsigned int)*pbVar5 - (unsigned int)*pbVar6) * ((unsigned int)*pbVar5 - (unsigned int)*pbVar6) +
                    ((unsigned int)*pbVar3 - (unsigned int)*pbVar4) * ((unsigned int)*pbVar3 - (unsigned int)*pbVar4) +
                    ((unsigned int)*pbVar11 - (unsigned int)*pbVar19) * ((unsigned int)*pbVar11 - (unsigned int)*pbVar19) +
                    ((unsigned int)*pbVar7 - (unsigned int)*pbVar20) * ((unsigned int)*pbVar7 - (unsigned int)*pbVar20) +
                    ((unsigned int)*pbVar8 - (unsigned int)*pbVar21) * ((unsigned int)*pbVar8 - (unsigned int)*pbVar21) +
                    ((unsigned int)*pbVar9 - (unsigned int)*pbVar22) * ((unsigned int)*pbVar9 - (unsigned int)*pbVar22) +
                    ((unsigned int)*pbVar10 - (unsigned int)*pbVar23) * ((unsigned int)*pbVar10 - (unsigned int)*pbVar23) +
                    ((unsigned int)*pbVar12 - (unsigned int)*pbVar24) * ((unsigned int)*pbVar12 - (unsigned int)*pbVar24) +
                    ((unsigned int)*pbVar13 - (unsigned int)*pbVar25) * ((unsigned int)*pbVar13 - (unsigned int)*pbVar25) +
                    ((unsigned int)*pbVar14 - (unsigned int)*pbVar26) * ((unsigned int)*pbVar14 - (unsigned int)*pbVar26) +
                    ((unsigned int)*pbVar27 - (unsigned int)bVar1) * ((unsigned int)*pbVar27 - (unsigned int)bVar1) +
                    ((unsigned int)*pbVar15 - (unsigned int)*pbVar28) * ((unsigned int)*pbVar15 - (unsigned int)*pbVar28) +
                    ((unsigned int)*pbVar34 - (unsigned int)*pbVar32) * ((unsigned int)*pbVar34 - (unsigned int)*pbVar32) +
                    ((unsigned int)*pbVar18 - (unsigned int)*pbVar31) * ((unsigned int)*pbVar18 - (unsigned int)*pbVar31) +
                    ((unsigned int)*pbVar17 - (unsigned int)*pbVar30) * ((unsigned int)*pbVar17 - (unsigned int)*pbVar30) +
                    ((unsigned int)*pbVar16 - (unsigned int)*pbVar29) * ((unsigned int)*pbVar16 - (unsigned int)*pbVar29) +
                    iStack_ac;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
      *in_stack_0000008c = (int)((double)SQRT((float)(__int64)iStack_ac) + lbl_82005730);
    }
  }
  else {
    fn_82E9AC18(param_1,param_2,0x10,param_5,0x10,0x10,0x10,param_6);
    *in_stack_0000008c = *(int *)(param_6 + 0x6c) * iStack_a8;
  }
  return;
}

