typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_20;
extern int fn_82F4EBC0();
extern int fn_82F4EEC0();
extern int fn_82F4EFF8();
extern V16 vectorCompareGreaterThanFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_82462D48(int param_1)

{
  int iVar2;
  char cVar3;
  unsigned __int64 uVar1;
  unsigned char bVar4;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char auVar5 [16];
  unsigned char auStack_20 [16];
  
  bVar4 = (*(int *)(param_1 + 0x270) < 0) << 3;
  if (*(int *)(param_1 + 0x270) != 0) {
    iVar2 = fn_82F4EBC0(0);
    if (iVar2 == 0) {
      return 0;
    }
    fn_82F4EBC0(0);
    cVar3 = fn_82F4EFF8();
    if (cVar3 == '\0') {
      return 0;
    }
    uVar1 = fn_82F4EBC0(0);
    fn_82F4EEC0(auStack_20,uVar1);{ V16 _vt0 = vectorCompareGreaterThanFloatingPoint(in_vs32,in_vs44); memcpy(auVar5, &_vt0, 16); }
    if ((!(bool)(bVar4 >> 3 & 1)) ||
       (vectorCompareGreaterThanFloatingPoint(auVar5,in_vs32), !(bool)(bVar4 >> 3 & 1))) {
      return 0;
    }
  }
  return 1;
}

