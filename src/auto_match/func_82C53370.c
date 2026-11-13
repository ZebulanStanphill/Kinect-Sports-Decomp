extern int fn_82C7A260();
extern int fn_82C7A648();
extern int fn_82C7AA08();
extern int fn_82C7AD70();
extern int fn_82C7AF68();
extern int fn_82C7B198();
extern int fn_82C7B3C0();
extern int fn_82C7B620();
extern int fn_82CAD6A8();
extern int fn_82CADA48();
extern int fn_82CADE98();
extern int fn_82CAE220();
extern int fn_82CAE568();


void fn_82C53370(int param_1)

{
  *(int (***)())(param_1 + 0xc7c) = fn_82C7A260;
  *(int (***)())(param_1 + 0xc80) = fn_82C7AA08;
  *(int (***)())(param_1 + 0xc90) = fn_82C7A648;
  *(int (***)())(param_1 + 0xc84) = fn_82C7AD70;
  *(int (***)())(param_1 + 0xc88) = fn_82C7AF68;
  *(int (***)())(param_1 + 0xc8c) = fn_82C7B620;
  if (*(int *)(param_1 + 0xf8c) != 0) {
    *(int (***)())(param_1 + 0xc80) = fn_82C7A648;
    *(int (***)())(param_1 + 0xc84) = fn_82C7B198;
    *(int (***)())(param_1 + 0xc88) = fn_82C7B3C0;
  }
  if (*(int *)(param_1 + 0x700) != 0) {
    *(unsigned int *)(param_1 + 0x708) = 1;
    *(int (***)())(param_1 + 0xc7c) = fn_82CADA48;
    *(int (***)())(param_1 + 0xc80) = fn_82CAD6A8;
    *(int (***)())(param_1 + 0xc84) = fn_82CADE98;
    *(int (***)())(param_1 + 0xc88) = fn_82CAE220;
    *(int (***)())(param_1 + 0xc8c) = fn_82CAE568;
    *(int (***)())(param_1 + 0xc90) = fn_82CAD6A8;
  }
  if (*(int *)(param_1 + 0x708) != 0) {
    *(unsigned int *)(param_1 + 0x780) = 0;
    *(unsigned int *)(param_1 + 0x784) = 8;
    *(unsigned int *)(param_1 + 0x788) = 0;
    *(unsigned int *)(param_1 + 0x78c) = 3;
    return;
  }
  *(unsigned int *)(param_1 + 0x784) = 0;
  *(unsigned int *)(param_1 + 0x780) = 8;
  *(unsigned int *)(param_1 + 0x788) = 3;
  *(unsigned int *)(param_1 + 0x78c) = 0;
  return;
}

