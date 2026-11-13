typedef unsigned char bool;


typedef struct {
  unsigned __int64 limit;
  unsigned int stride;
  char pad0[0x20 - 0xc];
  char cs[0x40 - 0x20];
  char pad1[0x54 - 0x40];
  unsigned int count;
  char pad2[0x60 - 0x58];
  char sub[8];
  __int64 cur;
  char pad3[0x24 - 0x10];
  __int64 **ptr;
  char pad4[0x2c - 0x28];
  unsigned int flag;
} Obj_830512A8;

unsigned __int64 fn_830512A8(int param_1, unsigned int param_2)
{
  __int64 lVar1;
  unsigned __int64 uVar2;
  Obj_830512A8 *o = (Obj_830512A8 *)(param_1 - 0x60);

  RtlEnterCriticalSection(param_1 + -0x40);
  if (*(unsigned int *)(param_1 + 0x2c) != 0) {
    lVar1 = **(__int64 **)(param_1 + 0x24);
  }
  else {
    lVar1 = *(__int64 *)(param_1 + 8);
  }
  uVar2 = lVar1 - (o->count * o->stride);
  if (param_2 != 0) {
    *(bool *)param_2 = uVar2 >= o->limit;
  }
  RtlLeaveCriticalSection(param_1 + -0x40);
  return uVar2;
}
