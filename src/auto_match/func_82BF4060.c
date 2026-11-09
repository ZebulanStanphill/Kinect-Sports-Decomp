typedef struct Obj_82BF4060 Obj_82BF4060;
extern void *fn_82BE56B0(unsigned int size);
extern Obj_82BF4060 *fn_82BF3C50(void *mem);
extern int fn_82BF3FF8(Obj_82BF4060 *p);
extern Obj_82BF4060 *lbl_8322B4F4;
int fn_82BF4060(void)
{
 int result;
 if (lbl_8322B4F4) return 1;
 {
  void *mem = fn_82BE56B0(100);
  lbl_8322B4F4 = mem ? fn_82BF3C50(mem) : 0;
  result = (int)lbl_8322B4F4;
  if (lbl_8322B4F4) result = fn_82BF3FF8(lbl_8322B4F4) != 0;
 }
 return result;
}
