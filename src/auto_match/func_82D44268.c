typedef struct Obj_82D44268 Obj_82D44268;
typedef struct { void *f0, *f4, *f8; void (*fc)(Obj_82D44268 *, const char *, int, int); } VT_82D44268;
struct Obj_82D44268 { VT_82D44268 *vt; };
extern int fn_82CE3DC8();
extern char lbl_8323C5E4[];
void fn_82D44268(int param_1, Obj_82D44268 *param_2)
{
  param_2->vt->fc(param_2, "Child", *(int *)(param_1 + 0x18), 0);
  fn_82CE3DC8(param_1, param_2, lbl_8323C5E4);
}
