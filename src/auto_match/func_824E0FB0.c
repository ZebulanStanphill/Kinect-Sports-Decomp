extern int fn_8255A070();
extern int fn_8255A470();
extern unsigned int lbl_82192734;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_824E0FB0(double param_1,int param_2)

{
  float fVar1;
  unsigned int uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  fVar1 = lbl_821CA460;
  if (*(int *)(param_2 + 0x1c) == 1) {
    fVar1 = lbl_82192734;
  }
  dVar4 = (double)fVar1;
  dVar3 = (double)fn_8255A070();
  dVar5 = (double)(float)(dVar3 * dVar4);
  dVar3 = (double)fn_8255A070();
  dVar4 = (double)ltcg_pool_0_0f;
  dVar3 = (double)fn_8255A470((double)(float)(dVar5 - dVar3),dVar4,(double)lbl_82193E50);
  uVar2 = (unsigned int)((double)**(float **)(param_2 + 4) < dVar3);
  *(unsigned int *)(param_2 + 0x10) = uVar2;
  if ((uVar2 != 0) && ((*(int *)(param_2 + 8) == 0 || (*(int *)(param_2 + 0xc) != 0)))) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x14) + param_1);
    *(float *)(param_2 + 0x14) = fVar1;
    if (fVar1 <= (*(float **)(param_2 + 4))[1]) {
      return;
    }
    *(float *)(param_2 + 0x18) = (float)dVar4;
    *(unsigned int *)(param_2 + 8) = 1;
    *(unsigned int *)(param_2 + 0xc) = 0;
  }
  *(float *)(param_2 + 0x14) = (float)dVar4;
  return;
}

