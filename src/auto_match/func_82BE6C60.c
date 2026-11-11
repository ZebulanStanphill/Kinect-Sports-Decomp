typedef struct {
  char pad[0x1c];
  void *key;
  int pad20;
  int len;
  int count;
} Req_82BE6C60;
extern void fn_82BE5240(Req_82BE6C60 *, int, const char *);
extern int fn_82BE6268(Req_82BE6C60 *, void *, int);
extern int fn_82BE6328(Req_82BE6C60 *, void *, int);
extern void *fn_82BE1A10(void);
extern unsigned __int64 fn_82BE1FD8(void *);
extern unsigned __int64 fn_82BA02A8(unsigned __int64);
extern unsigned int fn_82F6D460(const char *, int);
extern void *fn_82BF1CA0(void *, int, const char *, unsigned int);
extern void (*lbl_831751CC)(void *);

static __forceinline int Check(Req_82BE6C60 *self)
{
  if (self->key != 0 && self->count > 0) return 1;
  fn_82BE5240(self, 0x65, "Can't finish an invalid data buffer.");
  return 0;
}
int fn_82BE6C60(Req_82BE6C60 *self, unsigned char type, int stamp, int sign)
{
  union { unsigned char b; unsigned short h; int w; unsigned __int64 q; } v;
  void *mac;
  void *key;
  const char *k;
  int n;
  if (!Check(self)) return 0;
  if (stamp != 0) {
    v.b = 0x3b;
    if (fn_82BE6268(self, &v, 1) == 0) return 0;
    v.q = fn_82BA02A8(fn_82BE1FD8(fn_82BE1A10()));
    if (fn_82BE6268(self, &v, 8) == 0) return 0;
  }
  if (sign != 0) {
    v.b = 0x1e;
    if (fn_82BE6268(self, &v, 1) == 0) return 0;
  }
  n = self->len;
  if (sign != 0) n += 0x16;
  v.w = n;
  if (fn_82BE6328(self, &v, 4) == 0) return 0;
  v.b = type;
  if (fn_82BE6328(self, &v, 1) == 0) return 0;
  if (sign != 0) {
    k = "11111111111111111111111111111111";
    n = fn_82F6D460(k, 0x21);
    key = self->key;
    mac = fn_82BF1CA0(key, self->len, k, n);
    if (mac == 0) {
      fn_82BE5240(self, 0x65, "Could not allocate memory for SHA1 HMAC");
      return 0;
    }
    v.h = 0x14;
    if (fn_82BE6268(self, &v, 2) == 0) return 0;
    if (fn_82BE6268(self, mac, 0x14) == 0) return 0;
    lbl_831751CC(mac);
  }
  v.b = 5;
  return fn_82BE6328(self, &v, 1) != 0;
}
