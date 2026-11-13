extern int fn_822BD338();
extern int fn_822C04D0();
extern int fn_822C1928();
extern int fn_82320BE0();
extern int fn_82321138();
extern int fn_823261A0();
extern int fn_8234E808();
extern int fn_824D3510();
extern int fn_827F5708();
extern int fn_827F57E8();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_822BFC40(int param_1,unsigned int *param_2)

{
  float fVar1;
  int iVar2;
  char cVar3;
  unsigned __int64 uVar4;
  float *pfVar5;
  __int64 lVar6;
  
  iVar2 = fn_822C1928((unsigned __int64)param_2[2] + 4,0xffffffff821acc30,0,9);
  if (iVar2 == -1) {
    iVar2 = fn_822C1928((unsigned __int64)param_2[2] + 4,0xffffffff821acc28,0,5);
    if (iVar2 != -1) {
      iVar2 = param_1 + 0x558;
      goto LAB_822bfcc0;
    }
    iVar2 = fn_822C1928((unsigned __int64)param_2[2] + 4,0xffffffff821acc7c,0,5);
    if (iVar2 != -1) {
      *(unsigned int *)(param_1 + 0x7c0) = 0;
    }
  }
  else {
    *(unsigned int *)(param_1 + 0x7ac) = 0;
    iVar2 = param_1 + 0x568;
LAB_822bfcc0:
    fn_82321138(iVar2,param_1);
  }
  cVar3 = fn_822BD338((unsigned __int64)*param_2 + 4,0xffffffff821acbf0);
  if (cVar3 == '\0') {
    iVar2 = fn_822C1928((unsigned __int64)*param_2 + 4,0xffffffff821acbe0,0,0xf);
    if (iVar2 == -1) {
      lVar6 = (unsigned __int64)*param_2 + 4;
      cVar3 = fn_822BD338(lVar6,0xffffffff821aca8c);
      if (((cVar3 == '\0') && (cVar3 = fn_822BD338(lVar6,0xffffffff821acc04), cVar3 == '\0'))
         && (cVar3 = fn_822BD338(lVar6,0xffffffff821acc10), cVar3 == '\0')) {
        iVar2 = fn_822C1928((unsigned __int64)*param_2 + 4,0xffffffff821acc1c,0,10);
        if (iVar2 == -1) {
          iVar2 = fn_822C1928((unsigned __int64)*param_2 + 4,0xffffffff821acc28,0,5);
          if (iVar2 != -1) {
            fn_82321138(param_1 + 0x548,param_1);
            goto LAB_822bfe14;
          }
          iVar2 = fn_822C1928((unsigned __int64)*param_2 + 4,0xffffffff821acc3c,0,5);
          if (iVar2 != -1) {
            uVar4 = 0;
            goto LAB_822bfe44;
          }
          iVar2 = fn_822C1928((unsigned __int64)*param_2 + 4,0xffffffff821acc7c,0,5);
          if (iVar2 == -1) {
            lVar6 = (unsigned __int64)*param_2 + 4;
            cVar3 = fn_822BD338(lVar6,0xffffffff821acc50);
            if (((cVar3 != '\0') ||
                (cVar3 = fn_822BD338(lVar6,0xffffffff821acc5c), cVar3 != '\0')) ||
               (cVar3 = fn_822BD338(lVar6,0xffffffff821acc6c), cVar3 != '\0')) {
              *(unsigned int *)(param_1 + 0x7b0) = 1;
              if (*(int *)(param_1 + 0x7d4) != 0) {
                fn_82320BE0(*(int *)(param_1 + 0x7d4),1);
              }
            }
          }
          else {
            *(unsigned int *)(param_1 + 0x7c0) = 1;
          }
        }
        else if (*(int *)(param_1 + 0x788) != 2) {
          uVar4 = 2;
          goto LAB_822bfe44;
        }
      }
      else if (*(int *)(param_1 + 0x788) != 1) {
LAB_822bfe14:
        uVar4 = 1;
        goto LAB_822bfe44;
      }
    }
    else if (*(int *)(param_1 + 0x788) != 3) {
      uVar4 = 3;
      goto LAB_822bfe44;
    }
  }
  else {
    uVar4 = 4;
LAB_822bfe44:
    fn_822C04D0(param_1,uVar4);
  }
  iVar2 = fn_822C1928((unsigned __int64)*param_2 + 4,0xffffffff821acc30,0,9);
  if (iVar2 != -1) {
    *(unsigned int *)(param_1 + 0x7ac) = 1;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  iVar2 = fn_823261A0(*(unsigned int *)(param_1 + 0x114),param_2);
  if (iVar2 == 1) {
    iVar2 = *(int *)(param_1 + 0x118);
    fn_827F57E8((double)lbl_821CA460,(double)lbl_8218E8FC,*(unsigned int *)(iVar2 + 0x10));
    iVar2 = *(int *)(iVar2 + 0x10);
    *(unsigned int *)(iVar2 + 0x108) = *(unsigned int *)(iVar2 + 0x10c);
    fVar1 = ltcg_pool_0_0f;
    iVar2 = *(int *)(param_1 + 0x778);
    pfVar5 = (float *)(iVar2 + 0x18);
    if (iVar2 + 0x18 != iVar2 + 0x60) {
      do {
        pfVar5[2] = (pfVar5[1] - *pfVar5) * fVar1 + *pfVar5;
        pfVar5 = pfVar5 + 3;
      } while (pfVar5 != (float *)(iVar2 + 0x60));
    }
LAB_822c0130:
    fn_8234E808();
LAB_822c0134:
    *(unsigned int *)(*(int *)(param_1 + 0x118) + 0x60) = 1;
    iVar2 = *(int *)(param_1 + 0x24);
    if (iVar2 == 0) {
      return;
    }
    uVar4 = 0;
  }
  else {
    if (iVar2 == 2) {
      iVar2 = *(int *)(param_1 + 0x118);
      fn_827F57E8((double)lbl_821CA460,(double)lbl_8218E8FC,*(unsigned int *)(iVar2 + 0x10));
      iVar2 = *(int *)(iVar2 + 0x10);
      *(unsigned int *)(iVar2 + 0x108) = *(unsigned int *)(iVar2 + 0x10c);
      fVar1 = ltcg_pool_0_0f;
      iVar2 = *(int *)(param_1 + 0x780);
      pfVar5 = (float *)(iVar2 + 0x18);
      if (iVar2 + 0x18 != iVar2 + 0x60) {
        do {
          pfVar5[2] = (pfVar5[1] - *pfVar5) * fVar1 + *pfVar5;
          pfVar5 = pfVar5 + 3;
        } while (pfVar5 != (float *)(iVar2 + 0x60));
      }
      fn_8234E808();
      *(unsigned int *)(*(int *)(param_1 + 0x118) + 0x60) = 0;
    }
    else {
      if (iVar2 != 3) {
        if (iVar2 == 4) {
          iVar2 = *(int *)(param_1 + 0x118);
          fn_827F57E8((double)lbl_821CA460,(double)lbl_8218E8FC,*(unsigned int *)(iVar2 + 0x10))
          ;
          iVar2 = *(int *)(iVar2 + 0x10);
          *(unsigned int *)(iVar2 + 0x108) = *(unsigned int *)(iVar2 + 0x10c);
          fVar1 = ltcg_pool_0_0f;
          iVar2 = *(int *)(param_1 + 0x770);
          pfVar5 = (float *)(iVar2 + 0x18);
          if (iVar2 + 0x18 != iVar2 + 0x60) {
            do {
              pfVar5[2] = (pfVar5[1] - *pfVar5) * fVar1 + *pfVar5;
              pfVar5 = pfVar5 + 3;
            } while (pfVar5 != (float *)(iVar2 + 0x60));
          }
          goto LAB_822c0130;
        }
        if (iVar2 != 5) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0x118);
        fn_827F5708((double)ltcg_pool_0_0f,*(unsigned int *)(iVar2 + 0x10));
        iVar2 = *(int *)(iVar2 + 0x10);
        *(unsigned int *)(iVar2 + 0x108) = *(unsigned int *)(iVar2 + 0x10c);
        goto LAB_822c0134;
      }
      iVar2 = *(int *)(param_1 + 0x118);
      fn_827F57E8((double)lbl_821CA460,(double)lbl_8218E8FC,*(unsigned int *)(iVar2 + 0x10));
      iVar2 = *(int *)(iVar2 + 0x10);
      *(unsigned int *)(iVar2 + 0x108) = *(unsigned int *)(iVar2 + 0x10c);
      iVar2 = *(int *)(param_1 + 0x770);
      for (pfVar5 = (float *)(iVar2 + 0x18); pfVar5 != (float *)(iVar2 + 0x60); pfVar5 = pfVar5 + 3)
      {
        pfVar5[2] = (pfVar5[1] - *pfVar5) + *pfVar5;
      }
      fn_8234E808();
      *(unsigned int *)(*(int *)(param_1 + 0x118) + 0x60) = 1;
    }
    iVar2 = *(int *)(param_1 + 0x24);
    if (iVar2 == 0) {
      return;
    }
    uVar4 = 1;
  }
  fn_824D3510(iVar2,uVar4);
  return;
}

