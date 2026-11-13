typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_70;
extern unsigned int fStack_54;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822CD140();
extern int fn_8236D0D0();
extern int fn_824121C8();
extern int fn_824180B0();
extern int fn_8241CEB8();
extern int fn_825200A8();
extern int fn_82539560();
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82411E50(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  bool bVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int uVar9;
  double dVar10;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned char auStack_70 [28];
  float fStack_54;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x28) + 900);
    for (uVar9 = *(unsigned int *)(*(int *)(param_1 + 0x28) + 0x380); uVar9 < uVar1; uVar9 = uVar9 + 0xd0) {
      if (*(int *)(uVar9 + 0x94) != 0) {
        if ((*(unsigned int *)(uVar9 + 0x9c) & 1) == 0) {
          piVar2 = *(int **)(*(int *)(uVar9 + 0x94) + 0x8c0);
          if (piVar2 == (int *)0x0) {
            uVar4 = 0xffffffff82196288;
          }
          else {
            uVar4 = (**(int (***)())(*piVar2 + 0x20))();
          }
          if ((uVar4 & 0xffffffff) != 0) {
            uVar7 = ZEXT48(*(unsigned int **)(param_1 + 0x24));
            lVar8 = 0xcc0;
            uVar6 = (unsigned __int64)**(unsigned int **)(param_1 + 0x24);
            do {
              iVar5 = fn_825200A8(uVar4,lVar8 + uVar6);
              if (iVar5 != 0) {
                bVar3 = true;
                goto LAB_82411f80;
              }
              lVar8 = lVar8 + 4;
            } while ((int)lVar8 < 0xce8);
            bVar3 = false;
LAB_82411f80:
            if (((bVar3) && (*(int *)(*(int *)uVar7 + 0x8b0) != 0)) &&
               ((double)*(float *)(*(int *)uVar7 + 0x88c) < (double)*(float *)(uVar9 + 0xa4))) {
              stack_pair_80.first = 0;
              stack_pair_80.second = 0;
              uStack_78 = 0;
              iVar5 = **(int **)(param_1 + 0x24);
              dVar10 = (double)fn_82539560((double)*(float *)(uVar9 + 0xa4),
                                            (double)*(float *)(iVar5 + 0x88c),
                                            (double)*(float *)(iVar5 + 0x890),
                                            (double)*(float *)(iVar5 + 0x894),
                                            (double)*(float *)(iVar5 + 0x898));
              fn_82230110(auStack_70,0xffffffff821b8218);
              fStack_54 = (float)dVar10;
              fn_8236D0D0(&stack_pair_80.first,auStack_70);
              fn_82230300(auStack_70,1,0);
              fn_824180B0(*(unsigned int **)(param_1 + 0x24),
                                (unsigned __int64)**(unsigned int **)(param_1 + 0x24) + 0x14a4,uVar9,&stack_pair_80.first);
              fn_822CD140(&stack_pair_80.first);
            }
          }
        }
        else if ((*(int *)(**(int **)(param_1 + 0x24) + 0x8ac) != 0) &&
                (*(float *)(**(int **)(param_1 + 0x24) + 0x86c) < *(float *)(uVar9 + 0xa4))) {
          fn_824121C8(param_1);
        }
      }
    }
  }
  else {
    iVar5 = fn_8241CEB8(*(unsigned int *)(param_1 + 0x24),param_1,2);
    if (iVar5 != 0) {
      fn_824121C8((double)*(float *)(iVar5 + 0x10),param_1);
    }
  }
  return;
}

