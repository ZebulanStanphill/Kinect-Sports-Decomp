unsigned __int64 _byteswap_uint64(unsigned __int64);
int fn_82EE5F60(void *s, void *buf, unsigned int n);
int fn_82EE5E28(void *s, unsigned int n);
void fn_82E576A8(unsigned __int64 *out, void *s)
{
  unsigned __int64 v;
  if (fn_82EE5F60(s, &v, 8) >= 0) {
    *out = _byteswap_uint64(v);
    fn_82EE5E28(s, 8);
  }
}
