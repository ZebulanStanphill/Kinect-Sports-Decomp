typedef struct { char b[32]; } S32_828740D0;
typedef struct { char b[32]; } B_828740D0;
typedef struct Vt_828740D0 { char pad_0[0x10];  void *(*f8)(void *, B_828740D0 *, int, int, int); } Vt_828740D0;
typedef struct Obj_828740D0 { Vt_828740D0 *vt; } Obj_828740D0;
extern void fn_82230110(void *, const char *);
extern void fn_82230300(void *, int, int);
extern void fn_82864898(void *);
extern void *fn_828648F0(void *, void *);
extern void *fn_82865100(void);
extern void fn_82865170(void);
extern void *fn_82865EE0(void *, void *, void *, void *);
extern void fn_82866418(void);
extern Obj_828740D0 *fn_828685D8(void);
extern int fn_82873BB8(int, void *, int);
extern int fn_82878F88(void *, int, int);

int fn_828740D0(int a, int b, int c, int d, int e, int f, int g)
{
  struct { S32_828740D0 s2, s1, s3; B_828740D0 buf; } L;
#define s1 L.s1
#define s2 L.s2
#define s3 L.s3
#define buf L.buf
  Obj_828740D0 *o;
  void *r;
  int res;
  const char *ss = "SS";
  fn_82230110(&s1, ss - 8);
  fn_82230110(&s2, ss);
  fn_828648F0(&buf, fn_82865EE0(&s3, fn_82865100(), &s2, &s1));
  fn_82230300(&s3, 1, 0);
  fn_82230300(&s2, 1, 0);
  fn_82230300(&s1, 1, 0);
  o = fn_828685D8();
  r = o->vt->f8(o, &buf, c, d, e);
  if (fn_82878F88(r, f, g) < 0) {
    fn_82864898(&buf);
    return 0xa0120000;
  }
  if (fn_82873BB8(a, r, b) < 0) {
    fn_82865170();
    fn_82866418();
    fn_82864898(&buf);
    return 0xa0120000;
  }
  fn_82864898(&buf);
  return 0x20120000;
}
