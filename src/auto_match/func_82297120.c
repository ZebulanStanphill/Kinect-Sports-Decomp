extern int fn_82F85C08();

typedef struct { char pad[0x18]; int loc; } Ctype_82297120;
typedef struct { unsigned char ch; unsigned short wc; int state; } Loc_82297120;

unsigned char *fn_82297120(char *param_1, unsigned char *param_2, unsigned char *param_3, unsigned short *param_4)
{
  int iVar1;
  unsigned short uVar2;
  unsigned short *puVar3;
  unsigned char ch;
  unsigned short wc;
  int state;

  if (param_2 != param_3) {
    char *loc = param_1 + 0x18;
    puVar3 = param_4 - 1;
    do {
      ch = *param_2;
      state = 0;
      iVar1 = fn_82F85C08(&wc, &ch, 1, &state, loc);
      if (iVar1 < 0) {
        uVar2 = 0xffff;
      } else {
        uVar2 = wc;
      }
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = uVar2;
    } while (param_2 != param_3);
  }
  return param_2;
}
