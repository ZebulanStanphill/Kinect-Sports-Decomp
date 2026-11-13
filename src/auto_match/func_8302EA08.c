struct O_8302EA08;
typedef struct VT_8302EA08 { void *pad0; void (*addref)(struct O_8302EA08 *); void (*release)(struct O_8302EA08 *); } VT_8302EA08;
typedef struct O_8302EA08 { VT_8302EA08 *vt; } O_8302EA08;

void fn_8302EA08(O_8302EA08 **param_1, O_8302EA08 *param_2, unsigned char param_3)
{
  O_8302EA08 *old;
  if (param_2 != 0 && param_3 != 0) {
    param_2->vt->addref(param_2);
  }
  old = *param_1;
  *param_1 = param_2;
  if (old != 0) {
    old->vt->release(old);
  }
}
