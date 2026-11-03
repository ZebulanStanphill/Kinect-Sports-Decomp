extern float lbl_821CA45C[];
extern unsigned **lbl_832767EC;
extern int lbl_8327F254;
extern void fn_827EFC90(void *, int, int, void *);
typedef struct Ent_82524C20 { float x, y, z, w; } Ent_82524C20;
typedef struct Obj_82524C20 {
  char p0[0xb68]; void *fb68; char p1[0x14]; int fb80; char p2[0x1950 - 0xb84];
  Ent_82524C20 e[1]; char p3[0x319b8 - 0x1960]; int f319b8;
} Obj_82524C20;
int fn_82524C20(Obj_82524C20 *o)
{
  unsigned *cnt;
  int i, j;
  if (o->fb80 == 0) {
    j = 0;
    cnt = *lbl_832767EC;
    if (*cnt > 0) {
      float k = lbl_821CA45C[1];
      i = 0;
      do {
        Ent_82524C20 *e = (Ent_82524C20 *)o + i + 0x195;
        if ((e->x != k || o->e[i].y != k || o->e[i].z != k) &&
            (o->f319b8 == 0 || (i != 0 && i != 0x1c && i != 0x1d && i != 8 && i != 0x24 && i != 1 && i != 2))) {
          fn_827EFC90(o->fb68, j, lbl_8327F254, e);
        }
        j = (i + 1) & 0xffff;
        i = j;
      } while (j < *cnt);
    }
    o->fb80 = 1;
  }
  return 0;
}
