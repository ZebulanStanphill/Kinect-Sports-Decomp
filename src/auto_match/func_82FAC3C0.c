typedef struct { int pad; int f4; } In_82FAC1D0;
extern void *fn_82FF8ED8(void *, int);
extern void *fn_82FAB9C0(void *, int);
extern int *fn_82FB2D38(int);
extern int fn_82FB31B0(int *, int *, int);
extern void fn_82FFAAF0(void *, void *, void *);
extern void fn_82FF86A8(void *);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern char lbl_8326434C[];

int fn_82FAC3C0(char *param_1, In_82FAC1D0 *param_2, void *param_3, void *param_4)
{
  int rc = 1;
  int *entry = (int *)fn_82FF8ED8(param_1 + 4, param_2->f4);
  int key;
  int *obj;
  if (entry == 0)
    return 2;
  key = *entry;
  obj = (int *)fn_82FAB9C0(param_4, key);
  if (obj == 0) {
    RtlEnterCriticalSection(lbl_8326434C);
    obj = fn_82FB2D38(key);
    if (obj == 0) {
      rc = 2;
    } else {
      rc = fn_82FB31B0(obj, entry, param_2->f4);
      if (rc != 1)
        (*(void (**)(int *))(*obj + 8))(obj);
    }
    RtlLeaveCriticalSection(lbl_8326434C);
    if (rc != 1)
      goto done;
  }
  fn_82FFAAF0(param_1, param_3, obj);
done:
  fn_82FF86A8(param_1 + 4);
  return rc;
}
