typedef struct Obj_83006528 { void (**vt)(); } Obj_83006528;
extern void fn_83007E90(unsigned *);
extern unsigned **fn_83007EF0(void *, int, unsigned ***);

void fn_83006528(int *param_1, unsigned param_2, unsigned param_3, int param_4, unsigned param_5)
{
  int *piVar1;
  struct { unsigned *it; char tmp[12]; } L;

  piVar1 = (int *)param_1[10];
  if (piVar1 != 0) {
    unsigned *b0 = (unsigned *)*piVar1;
    unsigned *e0 = (unsigned *)piVar1[1];
    L.it = b0;
    if (b0 != e0) {
      do {
        if (L.it[0] == param_2 && L.it[1] == param_3 && (int)L.it[3] == param_4 && L.it[4] == param_5) {
          fn_83007E90(L.it + 5);
          L.it = *fn_83007EF0(L.tmp, param_1[10], (unsigned ***)&L.it);
        } else {
          L.it = L.it + 8;
        }
      } while (L.it != *(unsigned **)(param_1[10] + 4));
    }
    (*(void (**)(int *, unsigned, unsigned, int, unsigned))(*param_1 + 0x58))(param_1, param_2, param_3, param_4, param_5);
  }
}
