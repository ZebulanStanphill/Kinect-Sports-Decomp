#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _fStack_20 ((*(unsigned __int64*)&fStack_20))
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_8255ABF8();
extern float lbl_821954D0;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_14;


void fn_8260E620(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int in_register_00010470;
  unsigned int in_register_00010474;
  unsigned int in_register_00010478;
  unsigned int in_vr71;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  unsigned int uStack_14;
  
  uStack_14 = lbl_821CA460;
  iVar1 = *(int *)(**(int **)(param_1 + 0x60) + 0x1a8);
  fStack_18 = (float)*(unsigned char *)(param_3 + 0x12) * lbl_821954D0;
  _fStack_20 = CONCAT44((float)*(unsigned char *)(param_3 + 0x10) * lbl_821954D0,
                        (float)*(unsigned char *)(param_3 + 0x11) * lbl_821954D0);
  fn_8255ABF8(param_3 + 0x14);
  puVar2 = (unsigned int *)((int)&fStack_20 + in_r0 & 0xfffffff0);
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  puVar3 = (unsigned int *)(iVar1 + 0x20U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  puVar2 = (unsigned int *)(iVar1 + 0x30U & 0xfffffff0);
  *puVar2 = in_register_00010470;
  puVar2[1] = in_register_00010474;
  puVar2[2] = in_register_00010478;
  puVar2[3] = in_vr71;
  return;
}

