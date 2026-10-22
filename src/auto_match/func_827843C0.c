typedef unsigned int uint;

typedef struct Pt { float x, y; } Pt;
typedef struct Owner { int f0, f4, f8, fc, f10; Pt **blocks; } Owner;
typedef struct Range { Owner *owner; uint count; uint start; } Range;

void fn_827843C0(Range *param_1, float *param_2, float *param_3, float *param_4, float *param_5)
{
  uint i;
  Pt *p;

  for (i = 0; i < param_1->count; i++) {
    uint idx = i + param_1->start;
    p = &param_1->owner->blocks[idx >> 8][idx & 0xff];
    if (p->x < *param_2) {
      *param_2 = p->x;
    }
    if (p->y < *param_3) {
      *param_3 = p->y;
    }
    if (p->x > *param_4) {
      *param_4 = p->x;
    }
    if (p->y > *param_5) {
      *param_5 = p->y;
    }
  }
}
