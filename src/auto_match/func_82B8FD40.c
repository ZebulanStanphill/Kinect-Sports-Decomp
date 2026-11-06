typedef struct Vec4_82B8FD40 { float x, y, z, w; } Vec4_82B8FD40;
typedef struct Obj_82B8FD40 {
  char pad[0x24];
  Vec4_82B8FD40 key;
  char pad2[0x68 - 0x34];
  int count;
} Obj_82B8FD40;

void fn_82B8FD40(Obj_82B8FD40 *param_1, Vec4_82B8FD40 *param_2)
{
  Vec4_82B8FD40 *end = param_2 + param_1->count;
  Vec4_82B8FD40 *p;

  for (p = param_2; p < end; p++) {
    if (p->x == param_1->key.x && p->y == param_1->key.y &&
        p->z == param_1->key.z && p->w == param_1->key.w) {
      p->w = 0.0f;
      p->z = 0.0f;
      p->y = 0.0f;
      p->x = 0.0f;
    }
  }
}
