typedef struct Elem_827AEC38 { char pad[0x24]; unsigned char flags; char pad2[3]; } Elem_827AEC38;
typedef struct Obj_827AEC38 { Elem_827AEC38 *data; unsigned int count; char pad[0x11]; signed char state; } Obj_827AEC38;

int fn_827AEC38(Obj_827AEC38 *param_1)
{
  unsigned int i;
  unsigned int n;
  if (param_1->state == 0) {
    i = 0;
    param_1->state = -1;
    n = param_1->count;
    if (n != 0) {
      do {
        if ((param_1->data[i].flags & 7) != 0) {
          param_1->state = 1;
          break;
        }
        i++;
      } while (i < n);
    }
  }
  return param_1->state == 1;
}
