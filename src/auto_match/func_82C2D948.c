extern int fn_82A6ADE0();
extern int fn_82C3DCE8();
extern int fn_82C3DF08();
extern int fn_82C3E110();
extern int fn_82C3E3E8();
extern int fn_82C3E860();
extern int fn_82C3EC38();
extern int fn_82C3EE10();
extern int fn_82C3F1B8();
extern int fn_82C3FC50();
extern int fn_82C410F0();
extern int fn_82C41598();
extern int fn_82C43008();
extern int fn_82C435C0();
extern int fn_82C439F8();


unsigned __int64 fn_82C2D948(int param_1)

{
  int (**pcVar1)();
  int (**pcVar2)();
  int (**pcVar3)();
  int (**pcVar4)();
  
  fn_82A6ADE0();
  *(int (***)())(param_1 + 0x1f0) = fn_82C41598;
  *(int (***)())(param_1 + 0x204) = fn_82C410F0;
  if (*(unsigned short *)(param_1 + 0x6e) < 0x11) {
    pcVar4 = fn_82C3DCE8;
    pcVar3 = fn_82C3E110;
    pcVar2 = fn_82C3E860;
    pcVar1 = fn_82C3EC38;
  }
  else {
    pcVar4 = fn_82C3DF08;
    pcVar3 = fn_82C3E3E8;
    pcVar2 = fn_82C3EE10;
    pcVar1 = fn_82C3F1B8;
  }
  *(int (***)())(param_1 + 0x200) = pcVar1;
  *(int (***)())(param_1 + 0x1fc) = pcVar2;
  *(int (***)())(param_1 + 0x1f8) = pcVar3;
  *(int (***)())(param_1 + 500) = pcVar4;
  if (*(int *)(param_1 + 0x118) == 1) {
    if (*(int *)(param_1 + 0x28) == 0) {
      *(unsigned int *)(param_1 + 0x1dc) = 0;
      goto LAB_82c2da0c;
    }
    pcVar1 = fn_82C3FC50;
  }
  else {
    pcVar1 = fn_82C439F8;
  }
  *(int (***)())(param_1 + 0x1dc) = pcVar1;
LAB_82c2da0c:
  *(int (***)())(param_1 + 0x204) = fn_82C43008;
  *(int (***)())(param_1 + 0x1f0) = fn_82C435C0;
  return 0;
}

