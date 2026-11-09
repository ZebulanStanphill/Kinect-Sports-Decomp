extern int fn_8302BBA8();

struct Obj_8303D608;

typedef struct Vtbl_8303D608 {
  void *slots[0x29];
  void (*fn)(struct Obj_8303D608 *, int, int, float, unsigned int, int);
} Vtbl_8303D608;

typedef struct Obj_8303D608 {
  Vtbl_8303D608 *vt;
  int pad[2];
  unsigned int id;
} Obj_8303D608;

typedef struct Owner_8303D608 {
  int pad[5];
  unsigned int flags;
  int pad2;
  unsigned int *begin;
  unsigned int *end;
} Owner_8303D608;

void fn_8303D608(Owner_8303D608 *param_1, Obj_8303D608 *param_2, int a)
{
  unsigned int bits;
  unsigned int *it;

  it = param_1->begin;
  if (it != param_1->end) {
    do {
      if (*it == param_2->id) {
        return;
      }
      it = it + 1;
    } while (it != param_1->end);
  }
  bits = (param_1->flags >> 3) & 0x1f;
  param_2->vt->fn(param_2, a, 0, 0.0f, bits, fn_8302BBA8());
}
