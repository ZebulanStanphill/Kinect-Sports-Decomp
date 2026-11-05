typedef struct Itf_82EE2578 Itf_82EE2578;
struct Itf_82EE2578 {
  struct { int pad; void (*f1)(Itf_82EE2578 *); } *vt;
};
int fn_82EE2578(char *param_1, Itf_82EE2578 **param_2)
{
  int hr = 0;
  if (param_2 == 0) {
    hr = 0x80070057;
  } else {
    Itf_82EE2578 *p;
    if (param_1 != 0) {
      p = (Itf_82EE2578 *)(param_1 + 0x4c);
    } else {
      p = 0;
    }
    *param_2 = p;
    if (p != 0) {
      p->vt->f1(p);
    }
  }
  return hr;
}
