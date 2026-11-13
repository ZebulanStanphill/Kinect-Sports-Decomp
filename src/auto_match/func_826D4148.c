extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_826A1050();
extern int fn_826A7318();
extern int fn_826C79E0();
extern int fn_826CD2D0();
extern int fn_826D3F58();
extern int fn_82755328();
extern int fn_82F691F0();
extern unsigned int lbl_8200C1D8;
extern unsigned int lbl_8200C22C;
extern unsigned int lbl_8200C238;


void fn_826D4148(unsigned int *param_1,int *param_2,unsigned __int64 param_3,int param_4,int *param_5,
                  unsigned int *param_6,char param_7)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar5;
  unsigned char bVar9;
  char cVar10;
  unsigned int auStack_60 [24];
  
  auStack_60[0] = *param_6;
  fn_826A1050(param_1,param_3,param_5,auStack_60);
  *param_1 = &lbl_8200C238;
  param_1[3] = &lbl_8200C22C;
  param_1[0x1a] = &lbl_8200C1D8;
  if (param_2 != (int *)0x0) {
    fn_8267C4C8(param_2);
  }
  uVar8 = 0;
  param_1[0x27] = param_2;
  param_1[0x28] = param_4;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  fn_826D3F58(param_1 + 0x34);
  param_1[0x6b] = 0;
  param_1[0x6a] = 0xffffffff;
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(unsigned char *)(param_1 + 0x73) = 0;
  *(unsigned char *)((int)param_1 + 0x1cd) = 0;
  *(unsigned char *)((int)param_1 + 0x1ce) = 0;
  param_1[0x74] = 0;
  param_1[0x6f] = 0;
  param_1[0x6d] = 0;
  uVar4 = (**(int (***)())(*param_2 + 8))(param_2);
  if ((uVar4 & 0xff00) == 0x8400) {
    fn_826C79E0(param_1,param_2[0xb]);
    *(unsigned char *)(param_1 + 0x73) = *(unsigned char *)(param_1 + 0x73) | 0x40;
  }
  fn_826A7318(param_1 + 0x34,param_1);
  bVar9 = *(unsigned char *)(param_1 + 0x73);
  *(unsigned char *)(param_1 + 0x73) = bVar9 & 0xdc | 1;
  if (param_7 == '\0') {
    bVar9 = bVar9 & 0xcc | 1;
  }
  else {
    bVar9 = bVar9 & 0xdc | 0x11;
  }
  *(unsigned char *)(param_1 + 0x73) = bVar9;
  if ((param_5 != (int *)0x0) && (param_7 == '\0')) {
    uVar4 = (**(int (***)())(*param_5 + 0x48))(param_5);
    cVar10 = '\x01';
    if ((uVar4 & 0xffffffff) != (param_3 & 0xffffffff)) goto LAB_826d42dc;
  }
  cVar10 = '\0';
LAB_826d42dc:
  if (((param_7 != '\0') || (param_5 == (int *)0x0)) || (cVar10 != '\0')) {
    iVar6 = *(int *)(param_1[0x28] + 0x74);
    if (iVar6 != param_1[0x28] + 0x70) {
      do {
        if ((*(int *)(iVar6 + 0xc) == param_1[0x1f]) && (*(char *)(iVar6 + 0x18) == cVar10)) {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          param_1[0x6b] = iVar6;
          break;
        }
        iVar6 = *(int *)(iVar6 + 4);
      } while (iVar6 != param_1[0x28] + 0x70);
    }
    if (param_1[0x6b] == 0) {
      uVar1 = *(unsigned int *)(param_4 + 0x14);
      iVar6 = fn_8267B890(uVar1,0x20,0);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        uVar7 = param_1[0x1f];
        *(char *)(iVar6 + 0x18) = cVar10;
        *(unsigned int *)(iVar6 + 8) = 1;
        *(unsigned int *)(iVar6 + 0xc) = uVar7;
        *(unsigned int *)(iVar6 + 0x1c) = 0;
      }
      param_1[0x6b] = iVar6;
      *(unsigned int *)(iVar6 + 0x14) = *(unsigned int *)(*(int *)(param_1[0x1f] + 0x1c) + 0x88);
      if (cVar10 == '\0') {
        uVar7 = (**(int (***)())(*(int *)param_1[0x1f] + 0x14))();
      }
      else {
        uVar7 = 0;
      }
      *(unsigned int *)(param_1[0x6b] + 0x10) = uVar7;
      uVar4 = fn_8267B890(uVar1,0x2c,0);
      if ((uVar4 & 0xffffffff) != 0) {
        uVar8 = fn_82755328(uVar4,param_1[0x1f],*(unsigned int *)(param_4 + 0x118));
      }
      iVar6 = param_1[0x6b];
      if (*(int *)(iVar6 + 0x1c) != 0) {
        fn_8267C498();
      }
      *(unsigned int *)(iVar6 + 0x1c) = uVar8;
      piVar2 = (int *)param_1[0x6b];
      iVar6 = param_1[0x28];
      iVar3 = *(int *)(iVar6 + 0x74);
      *piVar2 = iVar6 + 0x70;
      piVar2[1] = iVar3;
      **(int **)(iVar6 + 0x74) = (int)piVar2;
      *(int **)(iVar6 + 0x74) = piVar2;
    }
  }
  uVar5 = (**(int (***)())(*(int *)param_1[0x27] + 0x28))();
  fn_826CD2D0(param_1 + 0x30,uVar5);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1[0x30],0,uVar5);
}

