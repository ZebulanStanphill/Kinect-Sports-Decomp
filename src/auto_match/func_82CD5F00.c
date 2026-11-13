#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))


void fn_82CD5F00(unsigned int *param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5,
                  int param_6,__int64 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  __int64 lVar7;
  int iVar8;
  __int64 lVar9;
  __int64 lVar10;
  int iVar11;
  __int64 lVar12;
  int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  
  iVar3 = (int)param_7;
  iVar8 = 0x8000;
  iVar6 = param_6 * 0x10000 +
          ((int)in_stack_0000005c >> 4) +
          (unsigned int)((int)in_stack_0000005c < 0 && (in_stack_0000005c & 0xf) != 0) + -0x8000;
  if (0 < iVar3) {
    lVar10 = 0;
    do {
      lVar7 = lVar10 + 0x10;
      lVar9 = lVar7;
      if (iVar3 < (int)lVar7) {
        lVar9 = param_7;
      }
      iVar4 = 0x8000;
      if (0x8000 < iVar6) {
        do {
          iVar5 = iVar4 + in_stack_0000005c + in_stack_0000005c;
          iVar11 = iVar5 + in_stack_0000005c;
          lVar12 = lVar9 - lVar10;
          iVar2 = iVar8;
          if ((int)lVar10 < (int)lVar9) {
            do {
              iVar1 = iVar2 >> (in_stack_00000064 & 0x3f);
              *param_1 = CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)
                                                     ((iVar4 >> (in_stack_00000064 & 0x3f)) *
                                                      param_3 + param_2 + iVar1),
                                                    *(unsigned char *)
                                                     (((int)(iVar4 + in_stack_0000005c) >>
                                                      (in_stack_00000064 & 0x3f)) * param_3 +
                                                      param_2 + iVar1)),
                                           *(unsigned char *)
                                            ((iVar5 >> (in_stack_00000064 & 0x3f)) * param_3 +
                                             param_2 + iVar1)),
                                  *(unsigned char *)
                                   ((iVar11 >> (in_stack_00000064 & 0x3f)) * param_3 + param_2 +
                                   iVar1));
              param_1 = (unsigned int *)((int)param_1 + param_4);
              lVar12 = lVar12 + -1;
              iVar2 = iVar2 + in_stack_00000054;
            } while (lVar12 != 0);
          }
          iVar4 = iVar11 + in_stack_0000005c;
          param_1 = (unsigned int *)((int)param_1 + (-4 - (int)(lVar9 - lVar10) * param_4));
        } while (iVar4 < iVar6);
      }
      iVar8 = in_stack_00000054 * 0x10 + iVar8;
      param_1 = (unsigned int *)(param_4 * 0x10 + param_8 + (int)param_1);
      lVar10 = lVar7;
    } while ((int)lVar7 < iVar3);
  }
  return;
}

