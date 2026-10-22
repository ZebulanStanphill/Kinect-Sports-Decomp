extern int fn_82FF6A78();
extern unsigned char fn_830069B8();
extern int lbl_832642E8;

typedef struct {
  char pad[0x30];
  void *a;
  void *b;
} Inner;

typedef struct {
  void **vtbl;
  int pad[7];
  Inner *inner;
} Obj;

void fn_83007A38(Obj *param_1)
{
  if (param_1->inner != 0 && param_1->inner->a != 0) {
    fn_82FF6A78(lbl_832642E8, param_1->inner->a, param_1);
    param_1->inner->a = 0;
  }
  if (param_1->inner != 0 && param_1->inner->b != 0 && fn_830069B8(param_1)) {
    param_1->inner->b = 0;
  }
  ((void (*)(Obj *))param_1->vtbl[0xdc / 4])(param_1);
}
