typedef struct { char pad[0x14]; int cnt; char pad2[0x24 - 0x18]; int x; int y; } Sub_82A44630;
typedef struct { char pad[0x34]; Sub_82A44630 *sub; char pad2[0xdc - 0x38]; int dx; int dy; } Obj_82A44630;

void fn_82A44630(Obj_82A44630 *p, int dir)
{
  Sub_82A44630 *s = p->sub;
  if (dir == 0) {
    s->cnt = s->cnt + 1; p->sub->x = p->dx + p->sub->x; p->sub->y = p->dy + p->sub->y;
  } else {
    s->cnt = s->cnt - 1; p->sub->x = p->sub->x - p->dx; s = p->sub; s->y = s->y - p->dy;
  }
}
