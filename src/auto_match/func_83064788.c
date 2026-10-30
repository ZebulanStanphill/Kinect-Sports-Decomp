typedef struct A_83064788 { char b[0x30]; } A_83064788;
typedef struct B_83064788 { char b[0x50]; } B_83064788;
typedef struct Obj_83064788 { char pad[0x10]; unsigned char flag; char pad2[0x1b]; int *cur; } Obj_83064788;
extern void fn_8305D7D0(int, void *);
extern void fn_8305E0F8(B_83064788 *, A_83064788 *);
extern void fn_8305EC98(B_83064788 *, int);
extern void fn_8305F258(B_83064788 *);
extern void fn_8305F2E8(B_83064788 *);
extern void fn_83061508(A_83064788 *);
extern void fn_83061F30(A_83064788 *);
extern void fn_830641D8(Obj_83064788 *, int, B_83064788 *, int, int);
extern int *fn_83065E70(void);

void fn_83064788(Obj_83064788 *param_1, int param_2, unsigned int param_3, int param_4, int param_5)
{
  A_83064788 a;
  B_83064788 b;
  int *p;
  if (param_1->flag == 0) {
    if (param_3 == 0 && param_1->cur == 0) {
      p = fn_83065E70();
      param_1->cur = p;
      p[0xb] = 0;
      fn_8305D7D0(param_2, (char *)param_1->cur + 0x10);
    }
    else {
      fn_83061508(&a);
      fn_8305F2E8(&b);
      fn_8305E0F8(&b, &a);
      fn_8305EC98(&b, param_2);
      fn_830641D8(param_1, param_3 != 0 ? param_3 : (unsigned int)param_1->cur, &b, param_4, param_5);
      fn_8305F258(&b);
      fn_83061F30(&a);
    }
  }
}
