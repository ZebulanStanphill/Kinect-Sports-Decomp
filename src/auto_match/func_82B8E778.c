typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_58;
extern int fn_82ABDBE8();
extern int fn_82B8D038();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82B8E778(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,int param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  bool bVar3;
  char cVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int auStack_58 [22];
  
  uVar8 = *param_1 >> 5 & 0xff;
  uVar9 = *param_1 & 0x1f;
  uVar7 = param_1[3];
LAB_82b8e7a8:
  do {
    uVar5 = *(unsigned int *)(uVar7 + 8) >> 7 & 0x7f;
    if (uVar5 == 3) {
      puVar2 = *(unsigned int **)(uVar7 + 0x2c);
      cVar4 = fn_82ABDBE8(puVar2,*(unsigned int *)(uVar7 + 0x30));
      if (cVar4 == '\0') {
LAB_82b8e930:
        *param_2 = uVar7;
        *param_3 = uVar8;
        *param_4 = uVar9;
        return;
      }
      uVar5 = *puVar2;
      uVar1 = puVar2[3];
      if (((uVar5 & 0x18) != 0) || ((*(unsigned int *)(uVar1 + 8) & 0x3f80) == 0x3b00)) goto LAB_82b8e930;
      uVar6 = uVar5 & 0x1f;
      if (((uVar5 & 0x18) == 0) || ((uVar9 & 0x18) == 0)) {
        if (((uVar5 & 2) != 0) && ((uVar9 & 1) != 0)) goto LAB_82b8e990;
        if ((uVar5 & 4) == 0) {
LAB_82b8e9bc:
          bVar3 = true;
        }
        else {
          bVar3 = false;
          if ((uVar9 & 1) == 0) goto LAB_82b8e9bc;
        }
      }
      else {
LAB_82b8e990:
        bVar3 = false;
      }
      if ((!bVar3) ||
         ((param_5 != 0 &&
          (((*(unsigned int *)(*(int *)(uVar1 + 0x1c) + 0x4c) ^ *(unsigned int *)(*(int *)(param_5 + 0x1c) + 0x4c))
           & 0x7ffff) != 0)))) goto LAB_82b8e930;
    }
    else {
      if (uVar5 != 0x68) {
        if (uVar5 != 0x70) goto LAB_82b8e930;
        cVar4 = fn_82B8D038(*(unsigned int *)(*(int *)((unsigned int)param_1 & 0xfffff000) + 0x94),uVar7,
                              &uStack_60,auStack_58,&uStack_5c,param_5,0);
        if ((cVar4 == '\0') || (uStack_60 == 0)) goto LAB_82b8e930;
        if (((uStack_5c & 0x18) == 0) || ((uVar9 & 0x18) == 0)) {
          if (((uStack_5c & 2) != 0) && ((uVar9 & 1) != 0)) goto LAB_82b8e818;
          if ((uStack_5c & 4) == 0) {
LAB_82b8e844:
            bVar3 = true;
          }
          else {
            bVar3 = false;
            if ((uVar9 & 1) == 0) goto LAB_82b8e844;
          }
        }
        else {
LAB_82b8e818:
          bVar3 = false;
        }
        if (!bVar3) goto LAB_82b8e930;
        uVar8 = ((auStack_58[0] << 2 | auStack_58[0]) << 2 | auStack_58[0]) << 2 | auStack_58[0];
        uVar7 = uStack_5c;
        if (((uStack_5c & 4) != 0) && ((uVar9 & 2) != 0)) {
          uVar7 = uStack_5c - 4;
        }
        if ((uVar7 & uVar9 & 4) != 0) {
          uVar7 = uVar7 - 4;
          uVar9 = uVar9 - 4;
        }
        if (((uVar7 & 1) != 0) && ((uVar9 & 2) != 0)) {
          uVar9 = uVar9 - 2;
        }
        uVar9 = uVar7 | uVar9;
        uVar7 = uStack_60;
        goto LAB_82b8e7a8;
      }
      if (param_5 != 0) goto LAB_82b8e930;
      uVar5 = **(unsigned int **)(uVar7 + 0x2c);
      uVar1 = (*(unsigned int **)(uVar7 + 0x2c))[3];
      if (((uVar5 & 0x18) != 0) || ((*(unsigned int *)(uVar1 + 8) & 0x3f80) == 0x3b00)) goto LAB_82b8e930;
      uVar6 = uVar5 & 0x1f;
      if (((uVar5 & 0x18) == 0) || ((uVar9 & 0x18) == 0)) {
        if (((uVar5 & 2) != 0) && ((uVar9 & 1) != 0)) goto LAB_82b8e8f8;
        if ((uVar5 & 4) == 0) {
LAB_82b8e924:
          bVar3 = true;
        }
        else {
          bVar3 = false;
          if ((uVar9 & 1) == 0) goto LAB_82b8e924;
        }
      }
      else {
LAB_82b8e8f8:
        bVar3 = false;
      }
      if (!bVar3) goto LAB_82b8e930;
    }
    uVar7 = uVar1;
    uVar5 = uVar5 >> 5 & 0xff;
    uVar8 = (((uVar5 >> (uVar8 >> 5 & 6) & 3) << 2 | uVar5 >> (uVar8 >> 3 & 6) & 3) << 2 |
            uVar5 >> (uVar8 >> 1 & 6) & 3) << 2 | uVar5 >> ((uVar8 & 3) << 1) & 3;
    if (((uVar6 & 4) != 0) && ((uVar9 & 2) != 0)) {
      uVar6 = uVar6 - 4;
    }
    if ((uVar6 & uVar9 & 4) != 0) {
      uVar6 = uVar6 - 4;
      uVar9 = uVar9 - 4;
    }
    if ((uVar6 & 1) != 0) {
      if ((uVar9 & 2) != 0) {
        uVar9 = uVar9 - 2;
      }
    }
    uVar9 = uVar6 | uVar9;
  } while( true );
}

