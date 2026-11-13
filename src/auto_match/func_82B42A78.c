#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABE250();
extern int fn_82AD35E8();
extern int fn_82AD6090();
extern int fn_82B4A218();
extern int fn_82B4BAA8();
extern int fn_82B85298();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82B42A78(unsigned __int64 param_1,unsigned int param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar6;
  unsigned __int64 uVar5;
  int iVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  int iVar10;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  
  puVar6 = (unsigned int *)fn_82ABE250(param_1,8,6);
  puVar4 = puVar6 + 1;
  puVar6[1] = (unsigned int)puVar6 | 1;
  *puVar6 = (unsigned int)puVar4 | 1;
  do {
    for (iVar1 = *(int *)(param_2 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      iVar10 = *(int *)(iVar1 + 4);
      puVar2 = *(unsigned int **)(iVar10 + 0xc);
      while( true ) {
        if (puVar2 == (unsigned int *)0x0) goto LAB_82b42c58;
        uVar9 = *puVar2;
        if (uVar9 != param_2) break;
        puVar2 = (unsigned int *)puVar2[2];
      }
      if (uVar9 == 0) {
LAB_82b42c58:
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      fn_82B85298(&stack_pair_60.first,param_1,uVar9,param_3,param_4);
      uVar5 = fn_82B4BAA8(param_1,&stack_pair_60.first);
      stack_pair_60.first = fn_82AD35E8(param_1,uVar9,uVar9 + 0x18,uVar5,uVar5);
      stack_pair_60.second = stack_pair_60.second & 0x10000 | 1;
      iVar7 = fn_82B4A218(uVar9,param_3,param_1);
      *(unsigned __int64 *)(iVar7 + param_4 * 8) = CONCAT44(stack_pair_60.first,stack_pair_60.second);
      do {
        if ((*(unsigned int *)(iVar10 + 0x30) >> 0x13 & 1) != 0) break;
        iVar10 = *(int *)(iVar10 + 0x34);
      } while (iVar10 != 0);
      if (iVar10 != 0) {
        if ((*puVar4 & 1) == 0) {
          uVar9 = *puVar6 & 0xfffffffe;
          iVar7 = uVar9 - 4;
          if ((iVar7 == 0) || (*(unsigned int *)(uVar9 + 8) < *(int *)(uVar9 + 4) + 1U)) goto LAB_82b42bb0;
        }
        else {
LAB_82b42bb0:
          iVar7 = fn_82AD6090(puVar6,1);
        }
        iVar3 = *(int *)(iVar7 + 8);
        *(int *)(iVar7 + 8) = iVar3 + 1;
        *(int *)((iVar3 + 4) * 4 + iVar7) = iVar10;
      }
    }
    if (((*puVar4 & 1) != 0) || (*puVar4 == 0)) {
      return;
    }
    puVar2 = (unsigned int *)(*puVar6 & 0xfffffffe);
    puVar8 = puVar2 + -1;
    uVar9 = puVar2[1] - 1;
    param_2 = puVar8[puVar2[1] + 3];
    puVar2[1] = uVar9;
    if (uVar9 == 0) {
      *(unsigned int *)(*puVar2 & 0xfffffffe) = *puVar8;
      *(unsigned int *)(*puVar8 & 0xfffffffe) = *puVar2;
      fn_82AA6648(puVar6,puVar8,((unsigned __int64)puVar2[2] + 4 & 0x3fffffff) << 2);
    }
  } while( true );
}

