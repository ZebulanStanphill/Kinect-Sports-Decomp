extern unsigned int *auStack_50;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_824C01C0();
extern int fn_824C04E0();
extern int fn_824C0870();
extern int fn_824C0E08();
extern int fn_8265C9E0();
extern int fn_828A1D58();
extern int fn_828C03E8();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821C0678;
extern unsigned int lbl_821C0688;
extern unsigned int lbl_821C06D0;
extern unsigned int lbl_821C06E8;
extern unsigned int lbl_821C0700;
extern unsigned int uStack_84;


int * fn_824BFFB0(int *param_1)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  unsigned char **ppuStack_90;
  int (**pcStack_8c)();
  int *piStack_88;
  unsigned int uStack_84;
  unsigned char ***pppuStack_80;
  unsigned char **ppuStack_70;
  int *piStack_6c;
  unsigned char ***pppuStack_60;
  unsigned char auStack_50 [80];
  
  fn_82230110(auStack_50,0xffffffff821c0620);
  fn_824C0870(param_1,auStack_50);
  *param_1 = (int)&lbl_821C0678;
  fn_82230300(auStack_50,1,0);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  pcStack_8c = (int (**)())fn_8265C9E0(0x38);
  if (pcStack_8c == (int (**)())0x0) {
    pcStack_8c = (int (**)())0x0;
  }
  else {
    *(unsigned char ***)pcStack_8c = &lbl_821A8D8C;
    *(unsigned int *)((int)pcStack_8c + 4) = 1;
    *(unsigned int *)((int)pcStack_8c + 8) = 1;
    if ((unsigned int *)((int)pcStack_8c + 0x10) != (unsigned int *)0x0) {
      pppuStack_60 = &ppuStack_70;
      ppuStack_70 = &lbl_821C06D0;
      piStack_6c = param_1;
      fn_824C0E08((unsigned int *)((int)pcStack_8c + 0x10),1,&ppuStack_70);
    }
  }
  ppuStack_90 = (unsigned char **)((int)pcStack_8c + 0x10);
  (**(int (***)())(*param_1 + 4))(param_1,&ppuStack_90);
  puVar2 = (unsigned int *)fn_8265C9E0(0x38);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    *puVar2 = &lbl_821A8D8C;
    puVar2[1] = 1;
    puVar2[2] = 1;
    if (puVar2 + 4 != (unsigned int *)0x0) {
      pppuStack_60 = &ppuStack_70;
      ppuStack_70 = &lbl_821C06E8;
      piStack_6c = param_1;
      fn_824C0E08(puVar2 + 4,2,&ppuStack_70);
    }
  }
  pcStack_8c = (int (**)())puVar2;
  ppuStack_90 = (unsigned char **)((int)pcStack_8c + 0x10);
  (**(int (***)())(*param_1 + 4))(param_1,&ppuStack_90);
  puVar2 = (unsigned int *)fn_8265C9E0(0x38);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    *puVar2 = &lbl_821A8D8C;
    puVar2[1] = 1;
    puVar2[2] = 1;
    if (puVar2 + 4 != (unsigned int *)0x0) {
      pppuStack_60 = &ppuStack_70;
      ppuStack_70 = &lbl_821C0700;
      piStack_6c = param_1;
      fn_824C0E08(puVar2 + 4,3,&ppuStack_70);
    }
  }
  pcStack_8c = (int (**)())puVar2;
  ppuStack_90 = (unsigned char **)((int)pcStack_8c + 0x10);
  (**(int (***)())(*param_1 + 4))(param_1,&ppuStack_90);
  fn_824C04E0(param_1,1);
  pppuStack_80 = &ppuStack_90;
  uStack_84 = piStack_88;
  ppuStack_90 = &lbl_821C0688;
  pcStack_8c = fn_824C01C0;
  piStack_88 = param_1;
  uVar1 = fn_828A1D58();
  fn_828C03E8(uVar1,&ppuStack_90);
  return param_1;
}

