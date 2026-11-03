typedef struct Obj_82D3D0D0 Obj_82D3D0D0;
typedef struct { void *f0, *f4, *f8; void (*fc)(Obj_82D3D0D0 *, const char *, int, int); } VT_82D3D0D0;
struct Obj_82D3D0D0 { VT_82D3D0D0 *vt; };
extern int fn_82CE3DC8();
extern char lbl_8323C494[];
void fn_82D3D0D0(int param_1, Obj_82D3D0D0 *param_2)
{
  param_2->vt->fc(param_2, "Child", *(int *)(param_1 + 0x18), 0);
  fn_82CE3DC8(param_1, param_2, lbl_8323C494);
}
