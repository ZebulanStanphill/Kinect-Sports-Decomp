typedef void (*vfn)(void *, int);
typedef struct { vfn *vtbl; } Obj;
extern int fn_82BF3D30();
extern Obj *lbl_8322B4F4;

void fn_82BF3F48(void)
{
  if (lbl_8322B4F4 != 0) {
    fn_82BF3D30(lbl_8322B4F4);
    if (lbl_8322B4F4 != 0) {
      lbl_8322B4F4->vtbl[0](lbl_8322B4F4, 1);
    }
    lbl_8322B4F4 = 0;
  }
}
