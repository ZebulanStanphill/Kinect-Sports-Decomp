typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82FA5358();
extern int fn_830514A8();
extern int fn_83055E98();
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_83051768(int param_1,float *param_2)

{
  char cVar1;
  unsigned __int64 *puVar2;
  int iVar3;
  bool bVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  float fVar12;
  unsigned __int64 *puVar13;
  unsigned __int64 *puVar14;
  
  if (((*param_2 < lbl_821AAD20) || (cVar1 = *(char *)(param_2 + 4), cVar1 < '\0')) || ('d' < cVar1)
     ) {
    uVar5 = 0x1f;
  }
  else {
    *(char *)(param_1 + -8) = cVar1;
    if (((__int64)(unsigned __int64)(unsigned int)param_2[2] <= (__int64)*(unsigned __int64 *)(param_1 + -0x60)) ||
       (uVar8 = *(unsigned __int64 *)(param_1 + -0x60) & 0xffffffff,
       (*(unsigned int *)(param_1 + -4) & 0x4000000) == 0)) {
      uVar8 = (unsigned __int64)(unsigned int)param_2[2];
    }
    if ((*(unsigned int *)(param_1 + 0x18) == uVar8) && (*(float *)(param_1 + 0x14) == param_2[1])) {
      fVar12 = param_2[3];
      if (fVar12 == 0.0) {
        fVar12 = 1.4013e-45;
      }
      if ((*(float *)(param_1 + 0x10) != *param_2) || (*(float *)(param_1 + 0x1c) != fVar12)) {
        RtlEnterCriticalSection(param_1 + -0x40);
        *(float *)(param_1 + 0x1c) = fVar12;
        *(float *)(param_1 + 0x10) = *param_2;
        fn_830514A8(param_1 + -0x78);
        RtlLeaveCriticalSection(param_1 + -0x40);
        return 1;
      }
    }
    else {
      RtlEnterCriticalSection(param_1 + -0x40);
      *(float *)(param_1 + 0x10) = *param_2;
      fVar12 = param_2[3];
      if (fVar12 == 0.0) {
        fVar12 = 1.4013e-45;
      }
      *(float *)(param_1 + 0x1c) = fVar12;
      if ((((uVar8 != 0) ||
           (uVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18), (unsigned __int64)*(unsigned int *)(param_1 + 0x18) == 0
           )) && ((uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18), uVar6 != 0 ||
                  (uVar10 = uVar8, uVar8 == 0)))) && (uVar10 = uVar6, uVar8 <= uVar6)) {
        uVar10 = uVar8;
      }
      piVar9 = (int *)(param_1 + -0x78);
      puVar13 = (unsigned __int64 *)0x0;
      puVar14 = *(unsigned __int64 **)(param_1 + 0x24);
      uVar7 = 0;
      uVar10 = ((__int64)*(int *)(param_1 + -0xc) * (__int64)*(int *)(param_1 + -0x58) &
               0xffffffffU) + uVar10;
      if (*(unsigned char *)(param_1 + 0x30) != 0) {
        do {
          puVar13 = puVar14;
          uVar7 = uVar7 + 1;
          puVar14 = *(unsigned __int64 **)(puVar13 + 2);
        } while (uVar7 < *(unsigned char *)(param_1 + 0x30));
      }
      bVar4 = false;
      do {
        puVar2 = puVar14;
        puVar14 = puVar2;
        if ((puVar2 == (unsigned __int64 *)0x0) || (uVar10 <= *puVar2)) goto LAB_8305194c;
        puVar14 = *(unsigned __int64 **)(puVar2 + 2);
        puVar13 = puVar2;
      } while ((unsigned __int64)*(unsigned int *)((int)puVar2 + 0xc) + *puVar2 < uVar10);
      bVar4 = true;
LAB_8305194c:
      lVar11 = (unsigned __int64)*(unsigned int *)(param_1 + -0x18) + 0x10;
      RtlEnterCriticalSection(lVar11);
      while (puVar14 != (unsigned __int64 *)0x0) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - *(int *)((int)puVar14 + 0xc);
        puVar2 = *(unsigned __int64 **)(puVar14 + 2);
        if (puVar14 == *(unsigned __int64 **)(param_1 + 0x24)) {
          *(unsigned __int64 **)(param_1 + 0x24) = puVar2;
        }
        else {
          *(unsigned __int64 **)(puVar13 + 2) = puVar2;
        }
        if (puVar14 == *(unsigned __int64 **)(param_1 + 0x28)) {
          *(unsigned __int64 **)(param_1 + 0x28) = puVar13;
        }
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
        fn_82FA5358(*(unsigned int *)(*(int *)(param_1 + -0x18) + 0x8c),*(unsigned int *)(puVar14 + 1))
        ;
        iVar3 = *(int *)(param_1 + -0x18);
        if (*(int *)(iVar3 + 0x78) == 0) {
          *(unsigned __int64 **)(iVar3 + 0x78) = puVar14;
          *(int *)(puVar14 + 2) = 0;
          puVar14 = puVar2;
        }
        else {
          *(int *)(puVar14 + 2) = *(int *)(iVar3 + 0x78);
          *(unsigned __int64 **)(iVar3 + 0x78) = puVar14;
          puVar14 = puVar2;
        }
      }
      if (bVar4) {
        uVar10 = 0;
      }
      (**(int (***)())(*piVar9 + 0x30))(piVar9,uVar10);
      fn_83055E98(*(unsigned int *)(param_1 + -0x18));
      RtlLeaveCriticalSection(lVar11);
      fVar12 = param_2[1];
      uVar7 = *(unsigned int *)(param_1 + -0xc);
      *(int *)(param_1 + 0x18) = (int)uVar8;
      trapWord(6,(unsigned __int64)uVar7,0);
      *(unsigned int *)(param_1 + 0x14) = ((unsigned int)fVar12 / uVar7) * uVar7;
      fn_830514A8(piVar9);
      RtlLeaveCriticalSection(param_1 + -0x40);
    }
    uVar5 = 1;
  }
  return uVar5;
}

