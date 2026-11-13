typedef struct {
  unsigned int first;
  unsigned int second;
  double value;
} Value_822A0238;

typedef struct {
  int movie;
  int pad[12];
  int penaltyShown[1];
} Obj_822A0238;

extern void fn_82273CD8(Value_822A0238 *v, int type);
extern void fn_82672C20(int obj, const char *path, Value_822A0238 *args, int count);
extern void fn_82273C88(Value_822A0238 *v);

void fn_822A0238(Obj_822A0238 *o, int player)
{
  Value_822A0238 v;

  if (o->penaltyShown[player] != 0) {
    o->penaltyShown[player] = 0;
    v.first = 0;
    v.second = 0;
    fn_82273CD8(&v, 3);
    v.value = (double)(player + 1);
    fn_82672C20(o->movie, "_root.mainCtrl.hideFalseStartPenalty", &v, 1);
    fn_82273C88(&v);
  }
}
