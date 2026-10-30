extern int fn_82FF5198();
extern int fn_83032FE8();
extern unsigned int lbl_83264304;
struct Obj;
typedef struct VT { void *s[10]; void (*f28)(struct Obj *, unsigned int *); } VT;
typedef struct Obj { VT *vt; int pad[4]; unsigned int w14; } Obj;
typedef struct Host { int pad[2]; Obj *obj; int pad2[7]; unsigned int f28; } Host;

void fn_8300F848(int param_1, Host *param_2)
{
  unsigned int buf[20];
  int t;
  buf[0] = 0;
  t = param_2->obj->w14 >> 8;
  if (t != 0x4011) {
    if (t != 0x5011) goto done;
    fn_83032FE8(param_2->obj);
  }
  param_2->obj->vt->f28(param_2->obj, buf);
done:
  fn_82FF5198(lbl_83264304, param_2->f28);
}
