typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8255F7E8();
extern int fn_827F2220();
extern int fn_827F22D0();
extern int fn_827F2DD0();
extern int fn_827F3DA8();
extern unsigned int ltcg_pool_0_0f;


void fn_8255F638(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  
  bVar2 = false;
  if ((*(int *)(param_1 + 0x110) != 0) && (cVar3 = fn_827F3DA8(), cVar3 != '\0')) {
    bVar2 = true;
  }
  fn_8255F7E8(param_1);
  cVar3 = fn_827F22D0(param_1);
  fVar1 = ltcg_pool_0_0f;
  if (cVar3 == '\0') {
    fVar1 = *(float *)(param_1 + 0x184);
  }
  *(float *)(param_1 + 0x188) = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x110) = 0;
  *(unsigned int *)(param_1 + 0x114) = 0;
  *(unsigned int *)(param_1 + 0x180) = 0;
  *(unsigned int *)(param_1 + 0x18c) = 0;
  fn_827F2DD0((double)fVar1,param_1,param_2,param_3,0,*(unsigned int *)(param_1 + 0x1a8));
  *(unsigned int *)(param_1 + 0x15c) = 0;
  if (bVar2) {
    fn_827F2220(param_1);
  }
  return;
}

