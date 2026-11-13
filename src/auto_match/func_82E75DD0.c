extern unsigned int *auStack_68;
extern int fn_82E50BE8();
extern int fn_82E5EE48();
extern int fn_82E74420();
extern int fn_82E74E58();
extern int fn_82E74F58();
extern int fn_82E75338();
extern int fn_82E75BB8();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned __int64 fn_82E75DD0(int *param_1,int *param_2,unsigned __int64 param_3,unsigned int *param_4,
                       unsigned int *param_5)

{
  unsigned short uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  int iVar7;
  unsigned char uVar8;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned __int64 auStack_68 [13];
  
  if ((param_4 == (unsigned int *)0x0) || (param_5 == (unsigned int *)0x0)) {
    return 0xffffffff80004003;
  }
  if (param_1[0x1a] == 0) {
    uVar4 = fn_82E75BB8();
    return uVar4;
  }
  *param_4 = 0;
  *param_5 = 0;
  uStack_6c = 0;
  auStack_68[0] = 0;
  uVar4 = (**(int (***)())(*param_2 + 0xb4))(param_2,&uStack_6c);
  uStack_70 = (unsigned int)uVar4;
  if (-1 < (__int64)uVar4) {
    uVar4 = fn_82E74F58(param_1,param_2,param_3,auStack_68);
    uStack_70 = (unsigned int)uVar4;
    if (-1 < (__int64)uVar4) {
      lVar11 = *(__int64 *)(param_1 + 2) * 10000 + auStack_68[0];
      iVar7 = fn_82E5EE48(param_1[0x1c]);
      if (iVar7 == 0) {
        uVar1 = *(unsigned short *)(param_1[0x1c] + 0xc);
        if (((unsigned __int64)uVar1 != 0) &&
           (trapWord(6,(unsigned __int64)uVar1,0),
           (unsigned __int64)uStack_6c != (__int64)(int)(uStack_6c / uVar1) * (__int64)(int)(unsigned int)uVar1))
        {
          uVar4 = 0xffffffff80070057;
          uStack_70 = 0x80070057;
          goto LAB_82e760fc;
        }
      }
      uVar12 = 0;
      if ((unsigned __int64)uStack_6c == 0) {
        uVar4 = uVar4 & 0xffffffff;
      }
      else {
        do {
          piVar2 = (int *)param_1[0x1e];
          if (piVar2 == (int *)0x0) {
            uVar8 = fn_82E75338(param_1);
            if (param_1[0x18] == 0) {
              trapWord(6,(unsigned __int64)*(unsigned int *)(param_1[0x1c] + 8),0);
              uVar4 = (uVar12 * 1000 & 0xffffffff) / (unsigned __int64)*(unsigned int *)(param_1[0x1c] + 8);
            }
            else {
              lVar5 = (**(int (***)())(*param_1 + 0x10))(param_1,param_2);
              trapDoubleWordImmediate(6,(unsigned __int64)uStack_6c,0);
              uVar4 = (lVar5 * (uVar12 & 0xffffffff)) / (unsigned __int64)uStack_6c;
            }
            lVar5 = uVar4 + lVar11 / 10000;
            auStack_68[0] = 0;
            uStack_70 = fn_82E74E58(param_1,lVar5 * 10000,param_1[0x1b],auStack_68);
            uVar6 = (**(int (***)())(*param_1 + 0x10))(param_1,param_2);
            uVar4 = (unsigned __int64)uStack_70;
            *(unsigned __int64 *)(param_1 + 0x10) = uVar6;
            if ((int)uStack_70 < 0) goto LAB_82e760fc;
            uVar4 = fn_82E50BE8(0x130,0,0,0,0);
            if ((uVar4 & 0xffffffff) == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = fn_82E74420(uVar4,param_2,uVar12,param_1[0x1b],lVar5,auStack_68[0],
                                      *(unsigned short *)(param_1 + 5),uVar8);
            }
            param_1[0x1e] = iVar7;
            if (iVar7 == 0) {
              uVar4 = 0xffffffff8007000e;
              uStack_70 = 0x8007000e;
              break;
            }
            uVar4 = (unsigned __int64)uStack_70;
            if ((int)uStack_70 < 0) goto LAB_82e760fc;
            uVar10 = (unsigned __int64)uStack_6c;
            uVar9 = (unsigned __int64)(unsigned int)param_1[0x1b];
            uVar13 = uVar10;
            if (uVar9 < (uVar10 - uVar12 & 0xffffffff)) goto LAB_82e7604c;
          }
          else {
            auStack_68[0] = auStack_68[0] & 0xffffffff;
            uVar4 = (**(int (***)())(*piVar2 + 0xc))(piVar2,param_2,0,auStack_68);
            uStack_70 = (unsigned int)uVar4;
            if ((__int64)uVar4 < 0) goto LAB_82e760fc;
            uVar9 = auStack_68[0] >> 0x20;
            uVar10 = (unsigned __int64)uStack_6c;
LAB_82e7604c:
            uVar13 = uVar9 + uVar12;
          }
          if ((unsigned int)param_1[0x1b] <= *(unsigned int *)(param_1[0x1e] + 0x2c)) {
            param_4[*param_5] = param_1[0x1e];
            *param_5 = *param_5 + 1;
            if (*(__int64 *)(param_1 + 0x12) == 0) {
              *(unsigned __int64 *)(param_1 + 0xc) =
                   (unsigned __int64)(*(__int64 *)(param_1[0x1e] + 0x10) - *(__int64 *)(param_1 + 2)) /
                   100000000;
            }
            uVar10 = (unsigned __int64)uStack_6c;
            *(__int64 *)(param_1 + 0x12) = *(__int64 *)(param_1 + 0x12) + 1;
            *(unsigned __int64 *)(param_1 + 0x14) = uVar10 + *(__int64 *)(param_1 + 0x14);
            if ((unsigned int)param_1[0x16] < uVar10) {
              param_1[0x16] = uStack_6c;
            }
            uVar4 = (unsigned __int64)uStack_70;
            param_1[0x1e] = 0;
          }
          uVar12 = uVar13;
        } while ((uVar13 & 0xffffffff) < uVar10);
      }
      if (-1 < (int)uVar4) {
        return uVar4;
      }
    }
  }
LAB_82e760fc:
  uVar14 = 0;
  if (*param_5 != 0) {
    param_4 = param_4 + -1;
    do {
      puVar3 = (unsigned int *)param_4[1];
      if (puVar3 != (unsigned int *)0x0) {
        (**(int (***)())*puVar3)(puVar3,1);
      }
      param_4 = param_4 + 1;
      *param_4 = 0;
      uVar14 = uVar14 + 1;
    } while (uVar14 < *param_5);
    uVar4 = (unsigned __int64)uStack_70;
  }
  *param_5 = 0;
  return uVar4;
}

