#define _uStack_20 ((*(unsigned __int64*)&uStack_20))
extern int fn_82CE5458();
extern unsigned int iStack_1c;
extern float lbl_82131F88[];
extern float lbl_821954B0[];
extern unsigned int uStack_20;


void fn_824203A0(int param_1,int *param_2)

{
  float uVar1;
  int iVar2;
  float uStack_20;
  int iStack_1c;
  
  if (*param_2 == 0) {
    iVar2 = param_2[2];
  }
  else {
    iVar2 = param_2[1];
  }
  if ((*(unsigned char *)(iVar2 + 0xe8) == '\x04') || (*(unsigned char *)(iVar2 + 0xe8) == '\x05')) {
    iVar2 = (int)(*(float *)(param_1 + 8) * lbl_821954B0[151]);
    *(char *)(param_2[6] + 0xd) = (char)iVar2;
    if (*(int *)(param_1 + 0x10) != 0) {
      if (*(int *)(param_1 + 0x14) == 0) {
        *(float *)(param_1 + 4) = lbl_82131F88[*(unsigned char *)(param_2[6] + 0xc)];
      }
      uVar1 = *(float *)(param_1 + 0xc);
    } else {
      if (*(int *)(param_1 + 0x14) == 0) goto LAB_82420464;
      uVar1 = *(float *)(param_1 + 4);
    }
    uStack_20 = uVar1;
    fn_82CE5458(param_2[6] + 0xc,&uStack_20);
  }
LAB_82420464:
  *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_1 + 0x10);
  return;
}

