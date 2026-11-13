extern unsigned char fn_82BA9230();
extern int fn_82BC27A0();
extern unsigned char fn_82BC2EB0();

typedef struct {
  unsigned int pad : 22;
  unsigned int flag : 1;
  unsigned int rest : 9;
} Bits;

unsigned char fn_82BABC88(int param_1)

{
  int iVar1;
  
  for (iVar1 = 1; iVar1 <= *(int *)(param_1 + 0x14); iVar1++) {
    if (*(char *)(param_1 + 0x98 + iVar1) == '\x01') {
      return 0;
    }
    if (*(char *)(iVar1 + param_1 + 0x9e) == '\x01') {
      return 0;
    }
    if (fn_82BC2EB0(param_1,iVar1) != 0) {
      return 0;
    }
  }
  if ((((*(char *)(param_1 + 0xa4) != '\x01') && ((unsigned char)((Bits *)(param_1 + 0xe4))->flag == 0)) &&
      (fn_82BA9230(param_1) == 0)) &&
     (fn_82BC27A0(param_1,0) == 0)) {
    return 1;
  }
  return 0;
}
