extern int fn_82C10968(void *a, void *b);
extern int fn_82C10BA8(void *a, void *b, void **out);
extern int fn_82C28E48();
extern int fn_82C29878();
extern int fn_82C298F0();
extern int fn_82C29978();
extern int fn_82C29980();
extern int fn_82C29A30();
extern int fn_82C29B90();
extern int fn_82C29D30();
extern int fn_82C29F00();
extern int fn_82C29F08();
extern int fn_82C2A0A0();
extern void *lbl_83175B68;
extern void *lbl_83175B6C;

int fn_82C2A200(void *param_1, void *param_2, int *param_3, void **param_4)
{
  int hr;
  void *obj;

  hr = fn_82C10BA8(param_1, lbl_83175B68, &obj);
  if (hr >= 0) {
    if (obj == 0 || fn_82C10968(obj, lbl_83175B6C) == 0) {
      param_4[0] = fn_82C28E48;
      param_4[1] = fn_82C29878;
      param_4[2] = fn_82C29978;
      hr = 0;
      param_4[3] = fn_82C29F00;
      param_4[0xb] = 0;
      param_4[4] = fn_82C29F08;
      param_4[5] = fn_82C2A0A0;
      param_4[6] = fn_82C29980;
      param_4[7] = fn_82C29A30;
      param_4[8] = fn_82C29B90;
      param_4[9] = fn_82C29D30;
      param_4[10] = fn_82C298F0;
      if (*param_3 == 1) {
        hr = 0x500000;
      }
    }
    else {
      hr = 0x80500003;
    }
  }
  return hr;
}
