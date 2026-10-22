extern int fn_82C10968(void *a, void *b);
extern int fn_82C10BA8(void *a, void *b, void **out);
extern int fn_82C27728();
extern int fn_82C28158();
extern int fn_82C281E0();
extern int fn_82C28288();
extern int fn_82C28290();
extern int fn_82C28428();
extern int fn_82C284D8();
extern int fn_82C28608();
extern int fn_82C28858();
extern int fn_82C28B28();
extern int fn_82C28B98();
extern void *lbl_83175B68;
extern void *lbl_83175B74;

int fn_82C28D48(void *param_1, void *param_2, int *param_3, void **param_4)
{
  int hr;
  void *obj;

  hr = fn_82C10BA8(param_1, lbl_83175B68, &obj);
  if (hr >= 0) {
    if (obj == 0 || fn_82C10968(obj, lbl_83175B74) == 0) {
      param_4[0] = fn_82C27728;
      param_4[1] = fn_82C28158;
      param_4[2] = fn_82C28288;
      hr = 0;
      param_4[3] = fn_82C28B28;
      param_4[0xb] = 0;
      param_4[4] = fn_82C28B98;
      param_4[5] = fn_82C28290;
      param_4[6] = fn_82C28428;
      param_4[7] = fn_82C284D8;
      param_4[8] = fn_82C28608;
      param_4[9] = fn_82C28858;
      param_4[10] = fn_82C281E0;
      if (*param_3 == 0) {
        hr = 0x500000;
      }
    }
    else {
      hr = 0x80500003;
    }
  }
  return hr;
}
