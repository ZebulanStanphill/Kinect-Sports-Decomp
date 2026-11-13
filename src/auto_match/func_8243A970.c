typedef unsigned char bool;
struct O_8243A970;
typedef struct VT_8243A970 { void *s[5]; void (*f14)(struct O_8243A970 *); } VT_8243A970;
typedef struct O_8243A970 { VT_8243A970 *vt; int pad[4]; int a; int b; int pad2[9]; struct Ctl_8243A970 *ctl; } O_8243A970;
typedef struct Ctl_8243A970 { char pad[8]; char flag; char pad1[0x1c4-9]; O_8243A970 **arr; char pad2[0x1d4-0x1c8]; int idx; } Ctl_8243A970;
extern void fn_8243C0C0(void *, float);
extern void fn_82437EC8(void *, int);
int fn_8243A970(O_8243A970 *o, float f)
{
  O_8243A970 *p;
  bool x;
  fn_8243C0C0(o, f);
  if (o->a == 0) fn_82437EC8(o, 2);
  x = o->b != o->a && o->b != 0;
  if (!x) {
    if (o->ctl->idx == -1) goto r1;
    p = o->ctl->arr[o->ctl->idx];
    if (p == 0) { r1: return 1; }
    if (o->a == 7) return 1;
    if (o->a != 3 && p->ctl->flag != 0) {
      x = p->b != p->a && p->b != 0;
      if (!x) {
        p->vt->f14(p);
        fn_82437EC8(o, 3);
        return 0;
      }
    }
    fn_8243C0C0(p, f);
    if (p->ctl->flag == 0 && p->a == 1) {
      x = p->b != 1 && p->b != 0;
      if (!x) return 1;
    }
  }
  return 0;
}
