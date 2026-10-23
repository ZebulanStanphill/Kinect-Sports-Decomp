typedef struct RefObj {
  int unk0;
  int refcount;
} RefObj;

void fn_8267C498(RefObj *p);

void fn_826C6420(char *self, RefObj *obj)
{
  if (obj != 0) {
    obj->refcount++;
  }
  if (*(RefObj **)(self + 0x30) != 0) {
    fn_8267C498(*(RefObj **)(self + 0x30));
  }
  *(RefObj **)(self + 0x30) = obj;
}
