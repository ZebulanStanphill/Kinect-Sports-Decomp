extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826959C8();
extern int fn_82696BC8();
extern int fn_8269E188();
extern int fn_827451A8();
extern int fn_82746C20();
extern unsigned int lbl_82005718;


unsigned __int64 fn_82718C80(int *param_1,int param_2,unsigned char *param_3)

{
  unsigned int uVar1;
  float *pfVar2;
  char cVar6;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  double dVar7;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  cVar6 = fn_8269E188();
  if (cVar6 == '\0') {
    if (param_2 == 0x24) {
      iVar5 = (**(int (***)())(*param_1 + 0x58))(param_1);
      if (7 < *(unsigned char *)(iVar5 + 0x7c)) {
        if (param_1[0x28] == 0) {
          fn_826959C8(param_3);
          *param_3 = 0;
        }
        else {
          iVar5 = (**(int (***)())(*param_1 + 0x58))(param_1);
          uVar4 = fn_8267B890(*(unsigned int *)(*(int *)(iVar5 + 0x78) + 0x288),0x30,0);
          if ((uVar4 & 0xffffffff) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = fn_82746C20(uVar4,iVar5);
          }
          pfVar2 = (float *)param_1[0x28];
          dVar7 = (double)lbl_82005718;
          dStack_48 = (double)(float)((double)pfVar2[1] * dVar7);
          dStack_50 = (double)(float)((double)*pfVar2 * dVar7);
          dStack_38 = (double)(float)((double)pfVar2[3] * dVar7 + dStack_48);
          dStack_40 = (double)(float)((double)pfVar2[2] * dVar7 + dStack_50);
          fn_827451A8(uVar4,iVar5,&dStack_50);
          fn_82696BC8(param_3,uVar4);
          if ((uVar4 & 0xffffffff) != 0) {
            fn_826824B0(uVar4);
          }
        }
        goto LAB_82718ca4;
      }
    }
    else if ((param_2 == 0x45) &&
            (iVar5 = (**(int (***)())(*param_1 + 0x58))(param_1),
            *(char *)(*(int *)(iVar5 + 0x78) + 0x2a4) == '\x01')) {
      uVar1 = param_1[0x23];
      fn_826959C8(param_3);
      param_3[4] = (unsigned char)(uVar1 >> 0xb) & 1;
      *param_3 = 2;
      return 1;
    }
    uVar3 = 0;
  }
  else {
LAB_82718ca4:
    uVar3 = 1;
  }
  return uVar3;
}

