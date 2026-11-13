extern unsigned int *auStack_88;
extern int fn_824DCB30();
extern int fn_829CFE50();
extern unsigned int lbl_82015BE0;
extern unsigned int lbl_8202236C;
extern float lbl_82028880;
extern unsigned int lbl_82167C70;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


unsigned __int64
fn_82F5D668(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4,int *param_5,
             unsigned int *param_6)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned short auStack_88;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  struct { unsigned int first; unsigned int second; } stack_pair_78;

  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  
  uStack_80 = lbl_8202236C;
  uStack_7c = lbl_82167C70;
  stack_pair_78.first = lbl_821AAD20;
  stack_pair_78.second = 0;
  uStack_70 = lbl_82167C70;
  uStack_6c = lbl_82186E6C;
  uStack_68 = lbl_821AAD20;
  uStack_64 = 0;
  fn_824DCB30(&uStack_90,&uStack_8c,&auStack_88);
  fn_824DCB30(&uStack_80,&uStack_7c,&stack_pair_78.first);
  piVar3 = param_4 + 1;
  fn_829CFE50(2,param_3,uStack_90,uStack_8c,auStack_88,param_4,piVar3);
  piVar4 = param_4 + 3;
  piVar2 = param_4 + 2;
  fn_829CFE50(2,param_3,uStack_80,uStack_7c,(((unsigned __int64)(stack_pair_78.first) >> 0) & 0xFFFF),piVar2,piVar4);
  fVar1 = lbl_82015BE0;
  if ((*param_4 < param_4[2]) && (*piVar3 < *piVar4)) {
    *param_5 = (int)((float)(__int64)(param_4[2] - *param_4) * lbl_82028880);
    param_5[1] = (int)((float)(__int64)(*piVar4 - *piVar3) * fVar1);
    if (*param_4 < 0) {
      *param_6 = *param_6 | 0x80;
      *param_4 = 0;
    }
    if (*piVar3 < 0) {
      *piVar3 = 0;
    }
    if (0x280 < *piVar2) {
      *param_6 = *param_6 | 0x100;
      *piVar2 = 0x280;
    }
    if (0x1df < *piVar4) {
      *piVar4 = 0x1e0;
    }
    if (*piVar4 < param_5[1] << 1) {
      *param_6 = *param_6 | 0x200;
    }
    if ((*param_5 <= *piVar2 - *param_4) && (param_5[1] <= *piVar4 - *piVar3)) {
      return 0;
    }
  }
  return 0xffffffff80004005;
}

