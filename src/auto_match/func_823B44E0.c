extern void fn_8223C478(int w, int n, int z);
extern void fn_823B4970();
extern void fn_828E9D40();
extern void fn_828E9D60();
extern __int64 fn_828E9D90();
extern void fn_828E9F18(int w, unsigned __int64 v, int n);

static void WriteBits(int w, unsigned __int64 v, int n) { fn_8223C478(w, n, 0); fn_828E9F18(w, v, n); }

void fn_823B44E0(int param_1, int param_2)
{
  __int64 v;
  WriteBits(param_2, *(unsigned __int64 *)(param_1 + 0x88), 0x1e);
  v = fn_828E9D90(*(int *)(param_1 + 0x80));
  fn_828E9D40(*(int *)(param_1 + 0x80));
  fn_823B4970(param_2, *(int *)(param_1 + 0x80), v, 0);
  fn_828E9D60(*(int *)(param_1 + 0x80), v);
}
