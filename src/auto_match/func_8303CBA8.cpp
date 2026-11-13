struct Target_8303CBA8 {
  virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
  virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
  virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
  virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
  virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c();
  virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5c();
  virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6c();
  virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7c();
  virtual void v80(); virtual void v84(); virtual void v88(); virtual void v8c();
  virtual void v90(); virtual void v94(); virtual void v98(); virtual void v9c();
  virtual void va0(); virtual void va4(); virtual void va8();
  virtual void f(int, int, float, unsigned int, int);
};

struct Timer_8303CBA8 {
  float base;           /* 0x00 */
  float clock;          /* 0x04 */
};

struct Obj_8303CBA8 {
  char pad0[0x14];
  unsigned int bits;    /* 0x14 */
  char pad18[0x10];
  Timer_8303CBA8 timer; /* 0x28 */
  char pad30[4];
  int value;            /* 0x34 */
};

extern "C" float fn_82FFFC20(float *clock);
extern "C" int fn_8302BBA8(void *);

extern "C" void fn_8303CBA8(Obj_8303CBA8 *self, Target_8303CBA8 *target, int arg)
{
  Timer_8303CBA8 *timer = &self->timer;
  float t = fn_82FFFC20(&timer->clock) + timer->base;
  unsigned int idx = self->bits >> 3 & 0x1f;
  int value = self->value;
  target->f(arg, value, t, idx, fn_8302BBA8(self));
}
