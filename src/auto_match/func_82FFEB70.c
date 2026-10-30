typedef struct { void **vt; } Obj_82FFEB70;
typedef struct { int pad0; int f4; } Msg_82FFEB70;
typedef struct { int pad[13]; int f34; } Dst_82FFEB70;
extern char lbl_8326434C[];
extern void *fn_82FF8ED8(void *, int);
extern Obj_82FFEB70 *fn_82FAB9C0(void *, int);
extern Obj_82FFEB70 *fn_83031918(int);
extern int fn_83031A78(Obj_82FFEB70 *, void *, int);
extern Obj_82FFEB70 **fn_830080D8(void *);
extern void fn_82FF86A8(void *);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

int fn_82FFEB70(char *p1, Msg_82FFEB70 *p2, char *p3, void *p4)
{
  int rc = 1;
  int *rec = (int *)fn_82FF8ED8(p1 + 4, p2->f4);
  Obj_82FFEB70 *obj;
  int id;
  if (rec == 0) return 2;
  id = *rec;
  obj = fn_82FAB9C0(p4, id);
  if (obj == 0) {
    RtlEnterCriticalSection(lbl_8326434C);
    obj = fn_83031918(id);
    if (obj == 0) {
      rc = 2;
    } else {
      rc = fn_83031A78(obj, rec, p2->f4);
      if (rc != 1) ((void (*)(Obj_82FFEB70 *))obj->vt[2])(obj);
    }
    RtlLeaveCriticalSection(lbl_8326434C);
    if (rc != 1) goto done;
  }
  {
    Obj_82FFEB70 **d = fn_830080D8(p3 + 0x34);
    if (d != 0) *d = obj;
  }
done:
  fn_82FF86A8(p1 + 4);
  return rc;
}
