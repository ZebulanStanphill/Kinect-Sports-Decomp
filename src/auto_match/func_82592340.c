/* Constructor of the scene-control callback table: fills the 13 function slots
   (in the source's order, not slot order). It returns nothing; its LTCG callers
   (fn_825D9988 and siblings) keep the object pointer in r3 across the call. */
typedef void (*Func_82592340)(void);
typedef struct { Func_82592340 f[13]; } Table_82592340;
extern void fn_825D9A28(void);
extern void fn_8253BE58(void);
extern void fn_8253C1F0(void);
extern void fn_825925D8(void);
extern void fn_825923E8(void);
extern void fn_82592430(void);
extern void fn_8253F898(void);
extern void fn_8252AB38(void);
extern void fn_825F6BE8(void);
extern void fn_825F6CC8(void);
extern void fn_825F6DA8(void);
extern void fn_825F6E70(void);
extern void fn_825F6F38(void);

void fn_82592340(Table_82592340 *t)
{
  t->f[0] = fn_825D9A28;
  t->f[1] = fn_8253BE58;
  t->f[2] = fn_8253C1F0;
  t->f[3] = fn_825925D8;
  t->f[4] = fn_825923E8;
  t->f[5] = fn_82592430;
  t->f[6] = fn_8253F898;
  t->f[12] = fn_8252AB38;
  t->f[9] = fn_825F6BE8;
  t->f[10] = fn_825F6CC8;
  t->f[7] = fn_825F6DA8;
  t->f[8] = fn_825F6E70;
  t->f[11] = fn_825F6F38;
}
