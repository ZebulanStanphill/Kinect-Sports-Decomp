typedef unsigned char bool;

typedef struct Out {
  void *p;
  bool b4;
  bool b5;
} Out;

extern bool fn_82F64538(void *a, void *b);
extern char lbl_8315A330[];

void fn_828E6000(void **param_1, Out *param_2, int param_3)
{
  if (param_3 == 0) {
    param_2->p = *param_1;
  } else if (param_3 == 1) {
    param_2->p = *param_1;
    *param_1 = 0;
  } else if (param_3 == 2) {
    param_2->p = 0;
  } else if (param_3 == 3) {
    param_2->p = fn_82F64538(param_2->p, lbl_8315A330) ? (void *)param_1 : 0;
  } else {
    param_2->b4 = 0;
    param_2->p = lbl_8315A330;
    param_2->b5 = 0;
  }
}
