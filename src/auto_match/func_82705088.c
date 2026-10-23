typedef struct Obj Obj;
typedef int (*VFn)(Obj *);
struct Obj { VFn *vt; };
extern unsigned char fn_826FC178(int);
extern void fn_827047D8(int, int, int);

void fn_82705088(int param_1, int param_2, Obj *param_3)
{
  int v;
  if (fn_826FC178(param_2 * 0x24 + param_1 + 0x944)) {
    v = 0;
    if (param_3 != 0) {
      v = param_3->vt[0x138 / 4](param_3);
    }
    fn_827047D8(param_1, param_2, v);
  }
}
