struct Wr_82D4B950;
typedef struct WrVt_82D4B950 { int f0, f4, f8; void (*fc)(struct Wr_82D4B950 *, const char *, int, int); } WrVt_82D4B950;
typedef struct Wr_82D4B950 { WrVt_82D4B950 *vt; } Wr_82D4B950;
extern void fn_82CE3DC8(int, Wr_82D4B950 *, char *);
extern char lbl_8323C3D4[];

void fn_82D4B950(int self, Wr_82D4B950 *w)
{
  w->vt->fc(w, "Mesh", *(int *)(self + 0x34), 0);
  w->vt->fc(w, "Mopp", *(int *)(self + 0x14), 0);
  fn_82CE3DC8(self, w, lbl_8323C3D4);
}
