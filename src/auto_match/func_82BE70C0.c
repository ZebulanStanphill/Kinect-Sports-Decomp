typedef struct Obj_82BE70C0 Obj_82BE70C0;
struct Obj_82BE70C0 {
  void (**vtable)(Obj_82BE70C0 *self, int flags);
};

extern unsigned __int64 lbl_8322B1C8;
extern unsigned __int64 lbl_8322B1D0;
extern Obj_82BE70C0 *lbl_8322B1D8;

void fn_82BE70C0(void)
{
  lbl_8322B1D0 = 0;
  lbl_8322B1C8 = 0;
  if (lbl_8322B1D8 != 0) {
    lbl_8322B1D8->vtable[0](lbl_8322B1D8, 1);
  }
  lbl_8322B1D8 = 0;
}
