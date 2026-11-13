extern int fn_827ECE88(void *, float, void *, void *, void *, void *);
extern void fn_827EF590(float *, void *);
extern void fn_827EF608(void *, void *, void *);
extern int fn_8280A5E8(float);
extern void fn_82810328(void *, void *, void *);
extern void fn_828106A0(void *);
extern void fn_8281CB50(void *, void *, void *, int);

typedef struct V3_827EDAF8 { float x, y, z; } V3_827EDAF8;

int fn_827EDAF8(void *param_1, void *param_2, void *param_3, void *param_4, float *param_5, void *param_6)
{
  struct { char m[16]; char buf[32]; V3_827EDAF8 v[3]; } L;

  fn_828106A0(L.buf);
  if (fn_8280A5E8(param_5[0]) == 0 && fn_8280A5E8(param_5[1]) == 0 && fn_8280A5E8(param_5[2]) == 0) {
    fn_82810328(param_1, param_4, &L.v[0]);
    fn_82810328(param_2, param_4, &L.v[1]);
    fn_82810328(param_3, param_4, &L.v[2]);
    fn_8281CB50(param_6, &L.v[0], &L.v[0], 3);
    fn_827EF590(param_5, L.m);
    fn_827EF608(L.m, &L.v[0], &L.v[0]);
    fn_827EF608(L.m, &L.v[1], &L.v[1]);
    fn_827EF608(L.m, &L.v[2], &L.v[2]);
    return fn_827ECE88(L.buf, 1.0f, &L.v[0], &L.v[1], &L.v[2], L.buf + 16);
  }
  return 0;
}
