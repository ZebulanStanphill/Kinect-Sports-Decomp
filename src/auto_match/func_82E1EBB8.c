extern int fn_82A1E650();
extern int fn_82A1F2F8();
extern int fn_82E1EAE8();
extern int fn_82E205A0();
extern int fn_82E205F8();
extern int fn_82E20890();
extern int fn_82E208B0();
extern int fn_82E20B98();
extern int fn_82E20E58();


void fn_82E1EBB8(int param_1)

{
  unsigned __int64 uVar1;
  
  if (*(char *)(param_1 + 9) != '\0') {
    if (*(char *)(param_1 + 0xc) != '\0') {
      fn_82E1EAE8();
    }
    *(unsigned char *)(param_1 + 10) = 0;
    if (*(char *)(param_1 + 0xf) != '\0') {
      fn_82A1F2F8();
      fn_82A1E650(*(unsigned int *)(param_1 + 0x3c),0xffffffffffffffff);
      fn_82A1F2F8();
    }
    if (*(char *)(*(int *)(param_1 + 0x54) + 2) == '\0') {
      uVar1 = fn_82E20890();
      fn_82E205F8(uVar1,0);
      fn_82E208B0(*(unsigned int *)(param_1 + 0x54),uVar1,0xffffffff8214ba1c);
      fn_82E205A0(uVar1,0xffffffff8214ba14);
      fn_82E20E58(*(unsigned int *)(param_1 + 0x54));
    }
    else {
      fn_82E20B98();
      *(int *)(*(int *)(param_1 + 0x54) + 4) = 3 - *(int *)(*(int *)(param_1 + 0x54) + 4);
    }
  }
  return;
}

