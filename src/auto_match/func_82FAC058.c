extern void *fn_82FF8ED8(void *, int);
extern void *fn_82FAB9C0(void *, int);
extern unsigned char fn_82FB0928(void *);
extern void *fn_82FB0B80(int);
extern int fn_82FB1470(void *, int *, int, void *, int);
extern void fn_82FFAAF0(void *, void *, void *);
extern void fn_82FF86A8(void *);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern char lbl_8326434C[];

typedef struct Res_82FAC058 Res_82FAC058;
typedef struct { void *s0; void *s1; void (*f8)(Res_82FAC058 *); } ResVt_82FAC058;
struct Res_82FAC058 {
    ResVt_82FAC058 *vt;
    char pad[0x84];
    void *f88;
    void *f8c;
};
typedef struct { char pad[4]; char sub[1]; } Global_82FAC058;
extern Global_82FAC058 *lbl_832642E0;

int fn_82FAC058(char *a, char *b, void *c)
{
  int r;
  int *key;
  int k;
  Res_82FAC058 *res;
  char *list;

  list = a + 4;
  r = 1;
  key = (int *)fn_82FF8ED8(list, *(int *)(b + 4));
  if (key == 0) {
    return 2;
  }
  k = *key;
  res = (Res_82FAC058 *)fn_82FAB9C0(lbl_832642E0->sub, k);
  if (res != 0) {
    if (res->f8c != res->f88 || fn_82FB0928(res) == 0) {
      RtlEnterCriticalSection(lbl_8326434C);
      r = fn_82FB1470(res, key, *(int *)(b + 4), c, 1);
      RtlLeaveCriticalSection(lbl_8326434C);
      if (r != 1) {
        res->vt->f8(res);
      }
    }
  } else {
    RtlEnterCriticalSection(lbl_8326434C);
    res = (Res_82FAC058 *)fn_82FB0B80(k);
    if (res == 0) {
      r = 2;
    } else {
      r = fn_82FB1470(res, key, *(int *)(b + 4), c, 0);
      if (r != 1) {
        res->vt->f8(res);
      }
    }
    RtlLeaveCriticalSection(lbl_8326434C);
  }
  if (r == 1) {
    fn_82FFAAF0(a, c, res);
  }
  fn_82FF86A8(list);
  return r;
}
