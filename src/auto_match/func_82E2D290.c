typedef struct Obj_82E2D290 Obj_82E2D290;
typedef struct {
  void *s[2];
  int (*release)(Obj_82E2D290 *);
  void *s3[0x54 / 4 - 3];
  int (*f54)(Obj_82E2D290 *, void *, int);
  int (*f58)(Obj_82E2D290 *, void *, unsigned long long);
} Vt_82E2D290;
struct Obj_82E2D290 { Vt_82E2D290 *vt; };
extern char lbl_82153598[];
extern char lbl_821535E8[];
extern int fn_82E2D1D8(Obj_82E2D290 **);
extern int fn_82E28460(Obj_82E2D290 *, int, int, int);
extern int fn_82E27BF0(Obj_82E2D290 *, int);

int fn_82E2D290(int a, int b, unsigned int hi, unsigned int lo, int x, int y, int z, Obj_82E2D290 **out)
{
  int hr;
  *out = 0;
  hr = fn_82E2D1D8(out);
  if (hr >= 0) {
    if (*out == 0) {
      hr = 0x8000ffff;
    } else {
      hr = fn_82E28460(*out, a, b, z);
      if (hr >= 0 && (hi == 0 || lo == 0 || (hr = (*out)->vt->f58(*out, lbl_82153598, ((unsigned long long)hi << 32) | lo)) >= 0)
          && (x == 0 || (hr = (*out)->vt->f54(*out, lbl_821535E8, x)) >= 0)
          && (hr = fn_82E27BF0(*out, y)) >= 0) {
        return hr;
      }
    }
  }
  if (*out != 0) {
    (*out)->vt->release(*out);
    *out = 0;
  }
  return hr;
}
