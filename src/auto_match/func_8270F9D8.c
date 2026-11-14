typedef struct Obj_8270F9D8 { unsigned base; unsigned char kind; } Obj_8270F9D8;
extern unsigned char fn_826A18A8(unsigned, int, int);
extern unsigned char fn_826C0330(char *, Obj_8270F9D8 *, int, char *);
extern void *fn_82693A98(void *);
extern void fn_8269A1F0(char *, void *);

unsigned char fn_8270F9D8(char *param_1, Obj_8270F9D8 *param_2, int param_3, char *param_4)
{
  unsigned char r;

  if (fn_826A18A8(param_2->base + 0x250, param_3, 6 < param_2->kind) != 0) {
    if (fn_826C0330(param_1, param_2, param_3, param_4) == 0 || *param_4 == 10) {
      fn_8269A1F0(param_4, fn_82693A98(param_1 + 0x20));
    }
    return 1;
  }
  return fn_826C0330(param_1, param_2, param_3, param_4) != 0;
}
