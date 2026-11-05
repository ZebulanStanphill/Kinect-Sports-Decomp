extern void *memcpy(void *, const void *, unsigned);
extern void *fn_82FA5060(void *, unsigned);
extern void fn_82FA5190(void *, void *);
extern void *lbl_831BC768;

typedef struct { int pad0; void *m4; unsigned short m8; } Obj_82FF2410;

int fn_82FF2410(Obj_82FF2410 *param_1, void *param_2, unsigned short param_3)
{
  void *p;

  if (param_3 != param_1->m8) {
    if (param_1->m4 != 0) {
      fn_82FA5190(lbl_831BC768, param_1->m4);
      param_1->m4 = 0;
      param_1->m8 = 0;
    }
    if (param_3 != 0) {
      p = fn_82FA5060(lbl_831BC768, (param_3 + param_3 * 2) * 8);
      param_1->m4 = p;
      if (p != 0) {
        param_1->m8 = param_3;
        goto copy;
      }
      return 0x34;
    }
  }
copy:
  memcpy(param_1->m4, param_2, param_1->m8 * 0x18);
  return 1;
}
