typedef unsigned int uint;
typedef int (*code)();
extern int fn_826C30F8();

void fn_82695828(char *param_1)
{
  unsigned char cVar1;
  uint *puVar2;
  uint uVar3;

  cVar1 = *(unsigned char *)param_1;
  if (cVar1 == 8) {
    fn_826C30F8(param_1 + 4);
    return;
  }
  if (cVar1 == 6) {
    puVar2 = *(uint **)(param_1 + 4);
    if (puVar2 != 0) {
      uVar3 = puVar2[2] + 1;
      puVar2[2] = uVar3;
      if ((uVar3 & 0x70000000) == 0) {
        return;
      }
      puVar2[2] = uVar3 & 0x8fffffff;
      (*(code *)*puVar2)(puVar2, 2);
      return;
    }
  }
  if (cVar1 != 9) {
    return;
  }
  puVar2 = *(uint **)(param_1 + 4);
  uVar3 = puVar2[2] + 1;
  puVar2[2] = uVar3;
  if ((uVar3 & 0x70000000) == 0) {
    return;
  }
  puVar2[2] = uVar3 & 0x8fffffff;
  (*(code *)*puVar2)(puVar2, 2);
}
