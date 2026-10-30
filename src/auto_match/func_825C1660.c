typedef struct Obj_825C1660 {
  char pad[0x68];
  float f68;
  char sub[0xc];
  int flag;
} Obj_825C1660;
extern int fn_825529B0(void *);
extern void fn_82552B50(void *, int);
extern float lbl_82192730[];

void fn_825C1660(Obj_825C1660 *param_1)
{
  if (param_1->flag != 0) {
    if (fn_825529B0(param_1->sub) != 0) {
      fn_82552B50(param_1->sub, 1);
    }
    param_1->flag = 0;
    param_1->f68 = lbl_82192730[1];
  }
}
