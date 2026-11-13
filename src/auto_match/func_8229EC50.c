typedef struct { int first; int second; int third; } Pair_8229EC50;
typedef struct { void *f0; int f4; int f8; int fc; } Obj_8229EC50;
extern void fn_82273C88(Pair_8229EC50 *);
extern void fn_82273CD8(Pair_8229EC50 *, int);
extern void fn_8266F628(void *, int);
extern void fn_8266F640(void *, int);
extern void fn_82672C20(void *, const char *, Pair_8229EC50 *, int);

void fn_8229EC50(Obj_8229EC50 *o, int param_2)
{
  Pair_8229EC50 st;

  if (o->fc == 0) {
    st.first = 0;
    st.second = 0;
    fn_82273CD8(&st, 5);
    st.third = param_2;
    fn_8266F640(o->f0, 0);
    fn_8266F628(o->f0, 0);
    fn_82672C20(o->f0, "_root.mc_replaycaption.displayCaption", &st, 1);
    o->fc = 1;
    fn_82273C88(&st);
  }
}
