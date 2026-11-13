extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826959C8();
extern int fn_82696408();
extern int fn_82696BC8();
extern int fn_8269A1F0();
extern int fn_8269E188();
extern int fn_827451A8();
extern int fn_82746C20();
extern unsigned int lbl_82005718;


unsigned __int64 fn_826CED60(int *param_1,int param_2,unsigned char *param_3)

{
  float *pfVar1;
  unsigned char bVar2;
  char cVar4;
  int iVar3;
  unsigned __int64 uVar5;
  unsigned char uVar6;
  double dVar7;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  cVar4 = fn_8269E188();
  if (cVar4 != '\0') {
    return 1;
  }
  if (param_2 < 0x22) {
    if (param_2 != 0x21) {
      if (param_2 == 4) {
        uVar5 = (unsigned __int64)(unsigned int)param_1[0x2f] + 1;
        goto LAB_826cee04;
      }
      if (param_2 != 5) {
        if (param_2 != 0xc) {
          if (param_2 != 0x1c) {
            return 0;
          }
          bVar2 = *(unsigned char *)(param_1 + 0x73) >> 5;
          goto LAB_826cedbc;
        }
        iVar3 = param_1[0x6b];
        if ((iVar3 != 0) && (*(char *)(iVar3 + 0x18) == '\0')) {
          uVar5 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x10);
          goto LAB_826cee04;
        }
      }
      uVar5 = (**(int (***)())(*(int *)param_1[0x27] + 0x28))();
LAB_826cee04:
      fn_8269A1F0(param_3,uVar5);
      return 1;
    }
    cVar4 = *(char *)((int)param_1 + 0x1cd);
joined_r0x826cefa0:
    if (cVar4 != '\0') {
      bVar2 = cVar4 == '\x01';
LAB_826cedbc:
      fn_826959C8(param_3);
      uVar6 = 2;
      param_3[4] = bVar2 & 1;
      goto LAB_826cefb8;
    }
  }
  else {
    if (param_2 == 0x22) {
      cVar4 = *(char *)((int)param_1 + 0x1ce);
      goto joined_r0x826cefa0;
    }
    if (param_2 != 0x24) {
      if (param_2 == 0x25) {
        if (param_1[0x70] == 0) {
          fn_826959C8(param_3);
          *param_3 = 0;
          return 0;
        }
        fn_82696408();
        return 1;
      }
      if (param_2 != 0x45) {
        return 0;
      }
      iVar3 = (**(int (***)())(*param_1 + 0x58))(param_1);
      if (*(char *)(*(int *)(iVar3 + 0x78) + 0x2a4) != '\x01') {
        return 0;
      }
      bVar2 = (unsigned char)((unsigned int)param_1[0x23] >> 0xb);
      goto LAB_826cedbc;
    }
    iVar3 = (**(int (***)())(*param_1 + 0x58))(param_1);
    if (*(unsigned char *)(iVar3 + 0x7c) < 8) {
      return 0;
    }
    if (param_1[0x29] != 0) {
      iVar3 = (**(int (***)())(*param_1 + 0x58))(param_1);
      uVar5 = fn_8267B890(*(unsigned int *)(*(int *)(iVar3 + 0x78) + 0x288),0x30,0);
      if ((uVar5 & 0xffffffff) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = fn_82746C20(uVar5,iVar3);
      }
      pfVar1 = (float *)param_1[0x29];
      dVar7 = (double)lbl_82005718;
      dStack_48 = (double)(float)((double)pfVar1[1] * dVar7);
      dStack_50 = (double)(float)((double)*pfVar1 * dVar7);
      dStack_38 = (double)(float)((double)pfVar1[3] * dVar7 + dStack_48);
      dStack_40 = (double)(float)((double)pfVar1[2] * dVar7 + dStack_50);
      fn_827451A8(uVar5,iVar3,&dStack_50);
      fn_82696BC8(param_3,uVar5);
      if ((uVar5 & 0xffffffff) == 0) {
        return 1;
      }
      fn_826824B0(uVar5);
      return 1;
    }
  }
  fn_826959C8(param_3);
  uVar6 = 0;
LAB_826cefb8:
  *param_3 = uVar6;
  return 1;
}

