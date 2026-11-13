typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern int fn_8253D7A8();
extern int fn_82CE6010();
extern int fn_82D881F0();
extern unsigned int iStack_54;
extern unsigned int iStack_b8;
extern unsigned int lbl_821C40FC;
extern unsigned int stack0x00000030;
extern unsigned int uStack_b4;


bool fn_8253E960(int param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  int in_r0;
  bool bVar3;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned char **ppuStack_d0;
  char cStack_cc;
  int iStack_b8;
  unsigned int uStack_b4;
  unsigned char auStack_b0 [48];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [28];
  int iStack_54;
  
  if ((param_2 == 0) && (param_2 = *(int *)(param_1 + 0x7c0), param_2 == 0)) {
    bVar3 = true;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 0x1f8);
    puVar2 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar2 = in_register_00010010;
    puVar2[1] = in_register_00010014;
    puVar2[2] = in_register_00010018;
    puVar2[3] = in_vr1;
    cStack_cc = '\0';
    ppuStack_d0 = &lbl_821C40FC;
    uStack_b4 = 0;
    iStack_b8 = param_2;
    fn_82CE6010(auStack_b0,&stack0x00000030);
    fn_8253D7A8(auStack_70,*(unsigned int *)(param_2 + 0x10),auStack_b0,0);
    if (param_3 == -1) {
      param_3 = *(int *)(param_2 + 0x2c);
    }
    iStack_54 = param_3;
    fn_82D881F0(iVar1,auStack_70,*(unsigned int *)(iVar1 + 0x78),&ppuStack_d0);
    bVar3 = cStack_cc == '\0';
  }
  return bVar3;
}

