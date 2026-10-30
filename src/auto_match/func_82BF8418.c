typedef struct P_82BF8418 { int pad0[2]; int f8; int pad1; long long f10; int f18; int f1c; int f20; int f24; int f28; const char *s2c; const char *s30; } P_82BF8418;
typedef struct W_82BF8418 { int pad[3]; unsigned f0c; } W_82BF8418;
extern long long fn_82BA02A8(long long);
extern int fn_82BF6FC0();
extern int fn_82BF7098();
extern unsigned strlen(const char *);

int fn_82BF8418(P_82BF8418 *p, W_82BF8418 *w)
{
  int a50, a54, a58, a5c, a60, a64, a68, a6c, a70, a74;
  long long a78;
  unsigned start, len1, len2;
  const char *s;

  if (w != 0) {
    a50 = p->f8;
    a54 = 0;
    start = w->f0c;
    a78 = fn_82BA02A8(p->f10);
    a58 = p->f18;
    a5c = p->f1c;
    a60 = p->f20;
    a64 = p->f24;
    a68 = p->f28;
    s = p->s2c;
  if (s == 0 || *s == 0) len1 = 0; else len1 = strlen(p->s2c);
    if (len1 <= 0x7d0) {
      s = p->s30;
  if (s == 0 || *s == 0) len2 = 0; else len2 = strlen(p->s30);
      if (len2 <= 0x7d0) {
        a6c = len1;
        a70 = len2;
        if (fn_82BF6FC0(w, w->f0c, &a54, 4) && fn_82BF6FC0(w, w->f0c, &a50, 4) && fn_82BF6FC0(w, w->f0c, &a50, 4) &&
            fn_82BF6FC0(w, w->f0c, &a78, 8) && fn_82BF6FC0(w, w->f0c, &a58, 4) && fn_82BF6FC0(w, w->f0c, &a5c, 4) &&
            fn_82BF6FC0(w, w->f0c, &a60, 4) && fn_82BF6FC0(w, w->f0c, &a64, 4) && fn_82BF6FC0(w, w->f0c, &a68, 4) &&
            fn_82BF6FC0(w, w->f0c, &a6c, 4) && (len1 == 0 || fn_82BF6FC0(w, w->f0c, p->s2c, len1)) &&
            fn_82BF6FC0(w, w->f0c, &a70, 4) && (len2 == 0 || fn_82BF6FC0(w, w->f0c, p->s30, len2))) {
          a74 = w->f0c - start;
          return fn_82BF7098(w, start + 4, &a74, 4) != 0;
        }
      }
    }

  }
  return 0;
}
