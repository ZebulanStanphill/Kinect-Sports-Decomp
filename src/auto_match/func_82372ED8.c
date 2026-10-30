typedef struct Cell_82372ED8 { char pad[0x20]; float pos; } Cell_82372ED8;
typedef struct Track_82372ED8 { Cell_82372ED8 **cells; int pad[3]; int cur; } Track_82372ED8;
typedef struct Grid_82372ED8 { char pad[0x148]; int w; int span; int h; } Grid_82372ED8;

static int iabs(int x) { return x < 0 ? -x : x; }
int fn_82372ED8(int param_1)
{
  Grid_82372ED8 *g = *(Grid_82372ED8 **)(param_1 + 0x260);
  int last = g->h - 1;
  Track_82372ED8 **t = **(Track_82372ED8 ****)(param_1 + 8);
  int a = (int)t[0]->cells[t[0]->cur]->pos;
  int b = (int)t[1]->cells[t[1]->cur]->pos;
  if (a != last && b != last && (a >= g->w - 1 || b >= g->w - 1) && iabs(a - b) < g->span - 1) {
    return 1;
  }
  return 0;
}
