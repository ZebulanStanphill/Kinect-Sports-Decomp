typedef unsigned int uint;
typedef unsigned __int64 U64;
void fn_82838C40(int param_1,int param_2,uint param_3)
{
  int iVar1;
  iVar1 = (param_2 + 0x30) * 0x18;
  *(uint *)(iVar1 + param_1) = (param_3 & 7) << 10 | *(uint *)(iVar1 + param_1) & 0xffffe3ff;
  *(U64 *)(param_1 + 0x18) |= 0x8000000000000000ULL >> (uint)(param_2 + 0x20);
}
