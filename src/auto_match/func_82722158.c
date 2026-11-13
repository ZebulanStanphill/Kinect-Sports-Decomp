extern int fn_826824B0();
extern int fn_82696B20();
extern int fn_826A7398();
extern int fn_826C1BA0();
extern int fn_826C3768();
extern int fn_827215B0();
extern int fn_827219A0();

typedef struct { unsigned int first; unsigned int second; unsigned char flags; } Pair_82722158;

int fn_82722158(char *param_1, char *param_2, unsigned int *param_3, int param_4, int param_5)

{
  int iVar2;
  int cVar3;
  unsigned int uVar4;
  unsigned int *pf;
  Pair_82722158 pair;

  iVar2 = *(int *)(param_2 + 0x78);
  if (*param_3 == *(unsigned int *)(iVar2 + 0x208)) {
    if (*(char *)(iVar2 + 0x2a4) == 1) {
      iVar2 = fn_82696B20(&pair, param_4, param_2);
      fn_826C3768(param_1 + 0x38, iVar2);
      if ((pair.flags & 2) == 0 && pair.first != 0) {
        fn_826824B0(pair.first);
      }
      pair.first = 0;
      if ((pair.flags & 1) == 0 && pair.second != 0) {
        fn_826824B0(pair.second);
      }
      pair.second = 0;
      cVar3 = fn_827219A0(param_1 - 0x10, param_2 + 0x78);
      iVar2 = fn_826A7398(param_2);
      pf = (unsigned int *)(iVar2 + 0xb00);
      if ((unsigned char)cVar3 != 0) {
        *pf = *pf | 0x1000;
      }
      else {
        *pf = *pf & 0xffffefff;
      }
    }
  }
  else if (*param_3 == *(unsigned int *)(iVar2 + 0x140)) {
    iVar2 = fn_826C1BA0(param_1, param_2, param_3, param_4, param_5);
    fn_827215B0(param_1 - 0x10, param_2 + 0x78, param_2);
    return iVar2;
  }
  return fn_826C1BA0(param_1, param_2, param_3, param_4, param_5);
}
