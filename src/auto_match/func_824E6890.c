extern void *fn_824E6908(void *, int);
extern int fn_82576478(int, void *);
extern void *fn_8265C9E0(int);
typedef struct { char pad[0x1c]; void *obj; } Out_824E6890;

void *fn_824E6890(int param_1, Out_824E6890 *param_2)
{
  int hSrc;
  void *mem;
  void *obj;

  if (param_2->obj == 0) {
    hSrc = *(int *)(param_1 + 0x93c);
    mem = fn_8265C9E0(0x308);
    obj = mem ? fn_824E6908(mem, hSrc) : 0;
    param_2->obj = obj;
    fn_82576478(hSrc, obj);
  }
  return param_2->obj;
}
