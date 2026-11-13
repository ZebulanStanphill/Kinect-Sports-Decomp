extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8236FB68();
extern int fn_82508078();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831DCD58;


void fn_8238C990(unsigned __int64 param_1,int *param_2,int param_3,int param_4,unsigned __int64 param_5,
                  int param_6,unsigned __int64 param_7,unsigned __int64 param_8,unsigned __int64 param_9)

{
  float fVar1;
  int iVar4;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iVar5;
  double dVar6;
  double dVar7;
  unsigned char auStack_60 [96];
  
  if (param_6 < 0x18) {
    iVar5 = *(int *)(&lbl_831DCD58 + param_6 * 4);
  }
  else {
    iVar5 = 6;
  }
  if (iVar5 == 0) {
    iVar4 = (**(int (***)())(*param_2 + 0x9c))(param_2);
    if (iVar4 == 0) {
      dVar7 = (double)*(float *)(param_4 + 0x344);
      dVar6 = (double)(**(int (***)())(*param_2 + 0x74))(param_2);
      fVar1 = (float)(dVar6 + dVar7);
      if (lbl_821CA460 < (float)(dVar6 + dVar7)) {
        fVar1 = ltcg_pool_0_0f;
      }
      *(float *)(param_4 + 0x344) = fVar1;
    }
  }
  iVar4 = *param_2;
  uVar2 = fn_82365BD8(auStack_60,param_3);
  (**(int (***)())(iVar4 + 0x34))(param_1,param_2,uVar2,param_4,param_5,param_6,param_7,param_9);
  if (iVar5 != 0) {
    iVar5 = param_2[2];
    lVar3 = fn_8236FB68(10);
    if (lVar3 != 0) {
      fn_82508078(*(unsigned int *)(iVar5 + 0xa4),lVar3,0);
    }
  }
  if (*(int *)(param_3 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

