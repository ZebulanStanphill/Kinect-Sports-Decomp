typedef struct Obj Obj;
typedef struct Inner {
  char pad[0x34];
  Obj *obj;
} Inner;
typedef struct Slot {
  char pad[0x24];
  Inner *inner;
} Slot;

extern int fn_823AB478(Obj *o);
extern void fn_824B71A8(Obj *o, int a, int n, int b, int flag);
extern unsigned char fn_82512508(Obj *o);
extern unsigned char fn_828EA5F8(Obj *o);
extern unsigned char fn_828EA610(Obj *o);
extern unsigned char fn_828EA840(Obj *o);
extern Obj *lbl_83265988;

void fn_82407968(int param_1, Slot *param_2, Slot *param_3, Slot *param_4, int param_5)
{
  Obj *g;
  Obj *o;
  int n;
  int a;
  int b;
  int flag;
  int id;

  g = lbl_83265988;
  if (lbl_83265988 != 0 && fn_828EA610(g) == 0 && fn_828EA5F8(g) != 0 && fn_82512508(g) != 0) {
    n = 0;
    a = -1;
    b = -1;
    if (param_3->inner != 0) {
      o = param_3->inner->obj;
      n = 1;
      if (o != 0 && fn_828EA840(o) != 0 && fn_828EA5F8(o) != 0) {
        a = fn_823AB478(o);
      }
    }
    if (param_4->inner != 0) {
      o = param_4->inner->obj;
      n++;
      if (o != 0 && fn_828EA840(o) != 0 && fn_828EA5F8(o) != 0) {
        b = fn_823AB478(o);
      }
    }
    flag = param_3 == param_2;
    id = fn_823AB478(g);
    if (a == id) {
      fn_824B71A8(g, param_5, n, param_1, flag);
    } else if (b == id) {
      fn_824B71A8(g, param_5, n, param_1, !flag);
    }
  }
}
