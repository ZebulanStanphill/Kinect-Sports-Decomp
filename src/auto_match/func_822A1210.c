typedef struct { int a; void *rc; } SP_822A1210;
typedef struct { int a; int b; } L8_822A1210;
extern void fn_822315A0(void *);
extern void fn_82266D28(void *, int);
extern void fn_823F2E20(void *, void *);
extern void fn_82520158(const char *, L8_822A1210 *, int);
extern void *fn_8266EC60(void);
extern void *fn_8266EE08(SP_822A1210 *, void *, L8_822A1210 *, int, int, int);
extern void fn_8266F628(void *, int);
extern void fn_8266F640(void *, int);
extern void fn_8266F658(void *, int);
extern void fn_8266F660(void *, int);
extern void fn_82673A28(void *, void (*)(void), void *);
extern void fn_822A13C8(void);

void *fn_822A1210(void **p)
{
  L8_822A1210 name;
  SP_822A1210 ref;
  p[0] = 0;
  p[1] = 0;
  fn_82266D28(p, 0);
  p[2] = 0;
  p[3] = 0;
  fn_82520158("ui_topmessage", &name, 0);
  fn_823F2E20(p, fn_8266EE08(&ref, fn_8266EC60(), &name, 0, 1, 0));
  if (ref.rc != 0) fn_822315A0(ref.rc);
  fn_8266F660(p[0], 1);
  fn_8266F658(p[0], 1);
  fn_8266F640(p[0], 1);
  fn_8266F628(p[0], 1);
  fn_82673A28(p[0], fn_822A13C8, p);
  return p;
}
