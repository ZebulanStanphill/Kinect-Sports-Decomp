typedef struct { char pad0[8]; void *f8; void *fc; void *f10; } Obj_8305B698;
extern int fn_83058758(void *, int, void *, void *);
extern int fn_83059948(void *, int, void *, void *);
extern int fn_8305B068(void *, int, void *, void *);
extern int fn_8305B2D0(void *, int);

void fn_8305B698(char *self, int *msg)
{
  switch ((unsigned int)msg[1]) {
  case 0x3f:
    fn_8305B068(*(void **)(self + 0x10), fn_8305B2D0(self + 0x3c, 0), msg, msg);
    break;
  case 4:
    fn_83059948(*(void **)(self + 8), fn_8305B2D0(self + 0x14, 0), msg, msg);
    break;
  case 3:
    fn_83058758(*(void **)(self + 0xc), fn_8305B2D0(self + 0x28, 0), msg, msg);
    break;
  }
}
