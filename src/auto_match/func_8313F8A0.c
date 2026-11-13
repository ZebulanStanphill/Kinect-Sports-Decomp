typedef struct Vec_8313F8A0 {
  void *first;
  void *last;
  void *end;
} Vec_8313F8A0;
extern void fn_8265CA20(void *);
extern Vec_8313F8A0 lbl_83296FE4;

void fn_8313F8A0(void)
{
  if (lbl_83296FE4.first != 0) {
    fn_8265CA20(lbl_83296FE4.first);
  }
  lbl_83296FE4.first = 0;
  lbl_83296FE4.last = 0;
  lbl_83296FE4.end = 0;
}
