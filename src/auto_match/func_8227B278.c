extern int fn_82279E08();
extern int fn_8227B3F0();
extern int fn_82284B08();
extern unsigned int lbl_82191FB8;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192510;
extern unsigned int lbl_82192A60;
extern unsigned int lbl_82192F70;


void fn_8227B278(double param_1,int *param_2)

{
  float fVar1;
  unsigned int uVar2;
  float fVar3;
  
  uVar2 = param_2[0x292];
  if (uVar2 < 2) {
    if ((double)lbl_82192510 <= (double)(float)param_2[0x293]) goto LAB_8227b380;
    fVar1 = (float)((double)(float)param_2[0x293] + param_1);
    fVar3 = lbl_82192510;
  }
  else if (uVar2 == 2) {
    if ((double)lbl_82191FB8 <= (double)(float)param_2[0x293]) goto LAB_8227b380;
    fVar1 = (float)((double)(float)param_2[0x293] + param_1);
    fVar3 = lbl_82191FB8;
  }
  else if (uVar2 < 4) {
    if ((double)lbl_821922D0 <= (double)(float)param_2[0x293]) goto LAB_8227b380;
    fVar1 = (float)((double)(float)param_2[0x293] + param_1);
    fVar3 = lbl_821922D0;
  }
  else if (uVar2 == 4) {
    if ((double)lbl_82192A60 <= (double)(float)param_2[0x293]) goto LAB_8227b380;
    fVar1 = (float)((double)(float)param_2[0x293] + param_1);
    fVar3 = lbl_82192A60;
  }
  else {
    if (5 < uVar2) goto LAB_8227b380;
    if ((double)lbl_82192F70 <= (double)(float)param_2[0x293]) goto LAB_8227b380;
    fVar1 = (float)((double)(float)param_2[0x293] + param_1);
    fVar3 = lbl_82192F70;
  }
  param_2[0x293] = (int)fVar1;
  if (fVar3 <= fVar1) {
    param_2[0x293] = (int)fVar3;
    param_2[0x292] = 6;
  }
LAB_8227b380:
  if ((1 < (unsigned int)param_2[0x292]) && (param_2[0x29e] != 0)) {
    (**(int (***)())(*param_2 + 8))(param_2);
  }
  if (param_2[0x45a] != 0) {
    fn_82284B08(param_1);
  }
  fn_8227B3F0(param_1,param_2);
  fn_82279E08(param_1,param_2);
  return;
}

