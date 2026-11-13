#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT12(h,l) ((unsigned int)((((unsigned char)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT13(h,l) ((unsigned int)((((unsigned char)(h)) << 24) | ((unsigned int)(l))))


void fn_82CD5C30(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  unsigned int param_7,unsigned int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned int *puVar10;
  unsigned int in_stack_00000054;
  
  iVar7 = param_6 * 0x10000 + ((int)param_8 >> 4) + (unsigned int)((int)param_8 < 0 && (param_8 & 0xf) != 0)
          + -0x8000;
  iVar9 = param_5 * 0x10000 + ((int)param_7 >> 4) + (unsigned int)((int)param_7 < 0 && (param_7 & 0xf) != 0)
          + -0x8000;
  iVar8 = 0x8000;
  if (0x8000 < iVar7) {
    do {
      iVar2 = (iVar8 >> (in_stack_00000054 & 0x3f)) * param_3 + param_2;
      iVar3 = 0x8000;
      if (0x8000 < iVar9) {
        puVar10 = (unsigned int *)(param_1 + -4);
        do {
          iVar1 = iVar3 >> (in_stack_00000054 & 0x3f);
          iVar4 = iVar3 + param_7;
          iVar5 = iVar4 + param_7;
          iVar6 = iVar5 + param_7;
          iVar3 = iVar6 + param_7;
          puVar10 = puVar10 + 1;
          *puVar10 = CONCAT13(*(unsigned char *)((iVar6 >> (in_stack_00000054 & 0x3f)) + iVar2),
                              CONCAT12(*(unsigned char *)
                                        ((iVar5 >> (in_stack_00000054 & 0x3f)) + iVar2),
                                       CONCAT11(*(unsigned char *)
                                                 ((iVar4 >> (in_stack_00000054 & 0x3f)) + iVar2),
                                                *(unsigned char *)(iVar1 + iVar2))));
        } while (iVar3 < iVar9);
      }
      iVar8 = iVar8 + param_8;
      param_1 = param_1 + param_4;
    } while (iVar8 < iVar7);
  }
  return;
}

