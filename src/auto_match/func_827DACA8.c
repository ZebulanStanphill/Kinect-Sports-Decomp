extern int fn_827D9E98();
void *memmove(void *dst, const void *src, unsigned int n);
void RtlEnterCriticalSection(void *cs);
void RtlLeaveCriticalSection(void *cs);

typedef struct Obj Obj;
struct Obj {
  void (**vtbl)(Obj *, int);
};

void fn_827DACA8(int param_1)

{
  Obj *obj;
  Obj **p;
  Obj **next;

  RtlEnterCriticalSection((void *)(param_1 + 0xbfc));
  p = *(Obj ***)(param_1 + 0xbd4);
  if (p != *(Obj ***)(param_1 + 0xbd8)) {
    next = p + 1;
    do {
      obj = *p;
      if (fn_827D9E98(obj) == 0) {
        memmove(p,next,(*(Obj ***)(param_1 + 0xbd8) - next) * sizeof(Obj *));
        *(Obj ***)(param_1 + 0xbd8) = *(Obj ***)(param_1 + 0xbd8) - 1;
        if (obj != 0) {
          obj->vtbl[0](obj,1);
        }
      }
      else {
        p = p + 1;
        next = next + 1;
      }
    } while (p != *(Obj ***)(param_1 + 0xbd8));
  }
  RtlLeaveCriticalSection((void *)(param_1 + 0xbfc));
  return;
}
