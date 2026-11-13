extern int fn_83016920();
extern int fn_83016AB8();
extern int fn_83016B68();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


__int64 fn_8302AA50(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  double dVar6;
  
  fVar3 = lbl_821AAD20;
  fVar2 = lbl_82002AE0;
  lVar4 = 0;
  if (*(float *)(param_1 + 0x1c) != lbl_821AAD20) {
    fVar1 = ((float)param_2 - *(float *)(param_1 + 0x18)) / *(float *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x20) = fVar1;
    if (fVar1 < fVar2) {
      if (fVar1 < fVar3) {
        *(float *)(param_1 + 0x20) = fVar3;
      }
      goto LAB_8302aac4;
    }
  }
  lVar4 = 1;
LAB_8302aac4:
  if (lVar4 == 1) {
    dVar6 = (double)*(float *)(param_1 + 0xc);
    if ((*(unsigned char *)(param_1 + 0x38) & 0x80) == 0x80) {
      dVar6 = (double)fn_83016AB8(dVar6,0xffffffff83264368);
    }
  }
  else if ((*(unsigned char *)(param_1 + 0x38) & 0x80) == 0) {
    dVar6 = (double)fn_83016920((double)*(float *)(param_1 + 0x20),
                                      (double)*(float *)(param_1 + 8),
                                      (double)*(float *)(param_1 + 0xc),0xffffffff83264368);
  }
  else {
    dVar6 = (double)fn_83016B68();
  }
  *(float *)(param_1 + 0x10) = (float)dVar6;
  puVar5 = *(unsigned int **)(param_1 + 0x28);
  *(unsigned char *)(param_1 + 0x38) = *(unsigned char *)(param_1 + 0x38) | 0x40;
  if (puVar5 != *(unsigned int **)(param_1 + 0x2c)) {
    do {
      (*(int (**)())**(unsigned int **)*puVar5)
                (dVar6,(unsigned int *)*puVar5,*(unsigned int *)(param_1 + 0x14),param_3,lVar4);
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(unsigned int **)(param_1 + 0x2c));
  }
  return lVar4;
}

