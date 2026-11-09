extern void *fn_8265D5A8(void *);
extern void fn_82F8F5D0(void *, void *);
extern void fn_82F8F420(void *, int);
void *fn_82F8EDD0(void *self) {
 struct { int tmp; void *p; } local;
 local.p = &local.tmp;
 fn_82F8F5D0(self, fn_8265D5A8(local.p));
 fn_82F8F420(self, 0);
 return self;
}
