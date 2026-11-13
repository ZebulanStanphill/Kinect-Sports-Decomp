extern int fn_82359698();
extern void fn_8236B4F0(int,float);
extern int fn_8236B7E0();
extern int fn_823CC298();
extern int fn_823D6088();
extern int fn_82508078();
extern void *memcpy(void *,const void *,unsigned);
extern float lbl_8218E8E8;
extern float lbl_821CA45C[];


void fn_823CE680(int param_1,int *param_2)

{
  int *piVar1;
  float uVar2;
  int iVar3;
  
  uVar2 = lbl_8218E8E8;
  iVar3 = *param_2 * 0x84 + *(int *)(param_1 + 0x4bc);
  { int *pc = (int *)(iVar3 + 0x54); *pc = *pc + 1; }
  *(float *)(param_1 + 0x1024) = uVar2;
  *(unsigned int *)(param_1 + 0x1028) = 0;
  if (*(void **)(param_1 + 0x4c0) == 0) {
    fn_82508078(*(unsigned int *)(param_1 + 0xa4),"outforcorner",0);
  }
  fn_823CC298(*(unsigned int *)(param_1 + 0x4b8),0x11);
  fn_8236B7E0(param_1,*param_2,3);
  piVar1 = *(int **)(*param_2 * 4 + *(int *)(param_1 + 0x20));
  { unsigned int n = (piVar1[1] - *piVar1) >> 2; if (n > 0) {
    *(unsigned int *)(param_1 + 0xe38) = 1;
  } }
  if (*(int *)(*(int *)(param_1 + 0x4b0) + 0xd4) == 0) {
    fn_8236B4F0(param_1,lbl_821CA45C[1]);
  }
  *(unsigned char *)(param_1 + 0xd51) = 0;
  *(unsigned char *)(param_1 + 0xd52) = 0;
  *(unsigned char *)(param_1 + 0xd50) = 0;
  *(unsigned int *)(param_1 + 0x1390) = 8;
  memcpy(param_1 + 0x13a0,param_2,0x90);
  fn_82359698(param_1,0x15);
  fn_823D6088(param_1 + 0x9f8);
  return;
}

