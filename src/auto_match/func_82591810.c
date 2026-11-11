/* Source of fn_82591810 (objects.json MISSING, in no batch list), the LTCG callee of fn_824FB738.
   Compiles to exactly 100.0% as its own unit: km/k try func_82591810 <this file>.
   Void constructor of an 11-slot callback table; f[10] is stored before f[9] as in the original. */
typedef void (*Func_82591810)(void);
typedef struct { Func_82591810 f[11]; } Table_82591810;
extern void fn_825917B0(void);
extern void fn_82591910(void);
extern void fn_825919E8(void);
extern void fn_82592238(void);
extern void fn_824FB8C0(void);
extern void fn_82BA02A8(void);

void fn_82591810(Table_82591810 *t)
{
  t->f[0] = fn_825917B0;
  t->f[1] = fn_82591910;
  t->f[2] = fn_825919E8;
  t->f[3] = fn_82592238;
  t->f[5] = fn_824FB8C0;
  t->f[6] = fn_82BA02A8;
  t->f[7] = fn_82BA02A8;
  t->f[8] = fn_82BA02A8;
  t->f[10] = fn_82BA02A8;
  t->f[9] = fn_82BA02A8;
}
