#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern int fn_827663E0();
extern int fn_827664B0();


__int64 fn_82768FB0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  __int64 lVar6;
  int *piVar8;
  
  piVar8 = (int *)(param_1 + 8);
  if ((unsigned __int64)**(unsigned int **)(param_1 + 8) < (param_2 + 0xf & 0xffffffff)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(char *)(*(int *)(((unsigned int)((param_2 & 0xffffffff) >> 10) & 0x3ffffc) +
                          (*(unsigned int **)(param_1 + 8))[3]) + ((unsigned int)param_2 & 0xfff)) != '\0') {
      uVar5 = param_2;
      do {
        uVar5 = uVar5 + 1;
        lVar3 = lVar3 + 1;
      } while (*(char *)(*(int *)(((unsigned int)uVar5 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                        ((unsigned int)uVar5 & 0xfff)) != '\0');
    }
    uVar5 = lVar3 + 1;
    fn_827663E0((int *)(param_1 + 0x1c),uVar5,0);
    *(int *)(param_1 + 0x20) = (int)uVar5;
    uVar7 = 0;
    if ((uVar5 & 0xffffffff) != 0) {
      do {
        uVar2 = uVar7 + (unsigned int)param_2;
        uVar4 = uVar7 + 1;
        *(unsigned char *)(uVar7 + *(int *)(param_1 + 0x1c)) =
             *(unsigned char *)
              (*(int *)((uVar2 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) + (uVar2 & 0xfff));
        uVar7 = uVar4;
      } while (uVar4 < *(unsigned int *)(param_1 + 0x20));
    }
    lVar3 = *(unsigned int *)(param_1 + 0x20) + param_2;
    uVar2 = (unsigned int)lVar3;
    *(unsigned int *)(param_1 + 0x28) =
         (unsigned int)CONCAT11(*(unsigned char *)
                         (*(int *)((uVar2 + 1 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                         (uVar2 + 1 & 0xfff)),
                        *(unsigned char *)
                         (*(int *)((uVar2 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                         (uVar2 & 0xfff)));
    *(unsigned int *)(param_1 + 0x2c) =
         (unsigned int)CONCAT11(*(unsigned char *)
                         (*(int *)((uVar2 + 3 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                         (uVar2 + 3 & 0xfff)),
                        *(unsigned char *)
                         (*(int *)((uVar2 + 2 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                         (uVar2 + 2 & 0xfff)));
    *(float *)(param_1 + 0x30) =
         (float)(__int64)
                CONCAT11(*(unsigned char *)
                          (*(int *)((uVar2 + 5 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                          (uVar2 + 5 & 0xfff)),
                         *(unsigned char *)
                          (*(int *)((uVar2 + 4 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                          (uVar2 + 4 & 0xfff)));
    *(float *)(param_1 + 0x34) =
         (float)(__int64)
                CONCAT11(*(unsigned char *)
                          (*(int *)((uVar2 + 7 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                          (uVar2 + 7 & 0xfff)),
                         *(unsigned char *)
                          (*(int *)((uVar2 + 6 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                          (uVar2 + 6 & 0xfff)));
    lVar3 = lVar3 + 0xe;
    *(float *)(param_1 + 0x38) =
         (float)(__int64)
                CONCAT11(*(unsigned char *)
                          (*(int *)((uVar2 + 9 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                          (uVar2 + 9 & 0xfff)),
                         *(unsigned char *)
                          (*(int *)((uVar2 + 8 >> 10 & 0x3ffffc) + *(int *)(*piVar8 + 0xc)) +
                          (uVar2 + 8 & 0xfff)));
    uVar7 = (unsigned int)lVar3;
    iVar1 = *(int *)(*piVar8 + 0xc);
    uVar4 = CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)
                                        (*(int *)((uVar2 + 0xd >> 10 & 0x3ffffc) + iVar1) +
                                        (uVar2 + 0xd & 0xfff)),
                                       *(unsigned char *)
                                        (*(int *)((uVar2 + 0xc >> 10 & 0x3ffffc) + iVar1) +
                                        (uVar2 + 0xc & 0xfff))),
                              *(unsigned char *)
                               (*(int *)((uVar2 + 0xb >> 10 & 0x3ffffc) + iVar1) +
                               (uVar2 + 0xb & 0xfff))),
                     *(unsigned char *)
                      (*(int *)((uVar2 + 10 >> 10 & 0x3ffffc) + iVar1) + (uVar2 + 10 & 0xfff)));
    *(unsigned int *)(param_1 + 0xc) = uVar4;
    iVar1 = *(int *)(*piVar8 + 0xc);
    lVar6 = (unsigned __int64)
            CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)
                                        (*(int *)((uVar2 + 0x11 >> 10 & 0x3ffffc) + iVar1) +
                                        (uVar2 + 0x11 & 0xfff)),
                                       *(unsigned char *)
                                        (*(int *)((uVar2 + 0x10 >> 10 & 0x3ffffc) + iVar1) +
                                        (uVar2 + 0x10 & 0xfff))),
                              *(unsigned char *)
                               (*(int *)((uVar2 + 0xf >> 10 & 0x3ffffc) + iVar1) +
                               (uVar2 + 0xf & 0xfff))),
                     *(unsigned char *)(*(int *)((uVar7 >> 10 & 0x3ffffc) + iVar1) + (uVar7 & 0xfff)))
            + lVar3 + 4;
    *(int *)(param_1 + 0x10) = (int)lVar6;
    lVar6 = ((unsigned __int64)uVar4 & 0x1fffffff) * 8 + lVar6;
    lVar3 = fn_827664B0(piVar8,lVar6,param_1 + 0x14);
    lVar3 = lVar3 + lVar6;
    *(int *)(param_1 + 0x18) = (int)lVar3;
    lVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x14) * 6 - param_2) + lVar3;
  }
  return lVar3;
}

