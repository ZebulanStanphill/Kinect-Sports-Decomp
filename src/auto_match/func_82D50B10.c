typedef struct Obj_82D50B10 Obj_82D50B10;
typedef struct { void *f0, *f4, *f8; void (*fc)(Obj_82D50B10 *, const char *, int, int); } VT_82D50B10;
struct Obj_82D50B10 { VT_82D50B10 *vt; };
extern int fn_82CE3DC8();
extern char lbl_8323C5E4[];
void fn_82D50B10(int param_1, Obj_82D50B10 *param_2)
{
  param_2->vt->fc(param_2, "ChildShape", *(int *)(param_1 + 0x14), 0);
  fn_82CE3DC8(param_1, param_2, lbl_8323C5E4);
}
