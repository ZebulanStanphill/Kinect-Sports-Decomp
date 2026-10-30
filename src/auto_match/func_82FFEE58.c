typedef struct { void **vt; } Obj_82FFEE58;
typedef struct { int pad0; int f4; } Msg_82FFEE58;
typedef struct { int pad[13]; int f34; } Dst_82FFEE58;
extern char lbl_8326434C[];
extern void *fn_82FF8ED8(void *, int);
extern Obj_82FFEE58 *fn_82FAB9C0(void *, int);
extern Obj_82FFEE58 *fn_8301E958(int);
extern int fn_8301E890(Obj_82FFEE58 *, void *, int);
extern Obj_82FFEE58 **fn_830080D8(void *);
extern void fn_82FF86A8(void *);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

int fn_82FFEE58(char *p1, Msg_82FFEE58 *p2, char *p3, void *p4)
{
  int rc = 1;
  int *rec = (int *)fn_82FF8ED8(p1 + 4, p2->f4);
  Obj_82FFEE58 *obj;
  int id;
  if (rec == 0) return 2;
  id = *rec;
  obj = fn_82FAB9C0(p4, id);
  if (obj == 0) {
    RtlEnterCriticalSection(lbl_8326434C);
    obj = fn_8301E958(id);
    if (obj == 0) {
      rc = 2;
    } else {
      rc = fn_8301E890(obj, rec, p2->f4);
      if (rc != 1) ((void (*)(Obj_82FFEE58 *))obj->vt[2])(obj);
    }
    RtlLeaveCriticalSection(lbl_8326434C);
    if (rc != 1) goto done;
  }
  {
    Obj_82FFEE58 **d = fn_830080D8(p3 + 0x34);
    if (d != 0) *d = obj;
  }
done:
  fn_82FF86A8(p1 + 4);
  return rc;
}
