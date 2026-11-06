typedef unsigned char undefined1;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned __int64 undefined8;
extern unsigned int fn_829E0C20();
extern unsigned int fn_829E0980();
extern unsigned int fn_829E0EE8();
extern void fn_82A1DDC0();

unsigned int fn_829E0F70(int param_1, int param_2, ushort *param_3)
{
  uint *puVar2;
  unsigned int uVar1;
  uint uVar3;
  short *psVar4;

  puVar2 = (uint *)fn_829E0C20(param_2, *param_3);
  if (puVar2 == (uint *)0x0) {
    return 0x80004005;
  }
  uVar1 = fn_829E0980(puVar2, 0xc, 0x14, 4, param_2);
  if ((int)uVar1 >= 0) {
    *param_3 = (ushort)(puVar2[1] >> 0x11);
    fn_82A1DDC0(puVar2 + 2, param_1 + 0x9c90, 4);
    uVar3 = 0;
    psVar4 = (short *)((*puVar2 >> 0xe) + (int)puVar2);
    do {
      uVar1 = fn_829E0EE8(param_1, param_2, psVar4);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if (*psVar4 == 0) {
        return 0x80004005;
      }
      uVar3 = uVar3 + 1;
      psVar4 = psVar4 + 1;
      param_1 = param_1 + 0x7d4;
    } while (uVar3 < 0x14);
    uVar1 = 0;
  }
  return uVar1;
}
