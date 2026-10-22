extern unsigned char fn_82534820(int h);
extern int fn_82535298(int *h, int x, void *a, void *b);
extern void fn_82536288(int *h);
extern char lbl_83296BC0[];
extern char lbl_83296BD0[];

typedef struct Inner { char pad[0x84c]; int x; } Inner;
typedef struct Obj { char pad[0x20]; Inner *inner; } Obj;

void fn_82465390(Obj *o, int *h)
{
  int tmp;
  if (fn_82534820(*h)) {
    tmp = *h;
    tmp = fn_82535298(&tmp, o->inner->x, lbl_83296BC0, lbl_83296BD0);
    fn_82536288(&tmp);
  }
}
