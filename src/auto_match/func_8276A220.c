typedef struct RefObj {
  int unk0;
  int refcount;
} RefObj;

void fn_8267C498(RefObj *p);

void fn_8276A220(char *self, RefObj *obj)
{
  if (obj != 0) {
    obj->refcount++;
  }
  if (*(RefObj **)(self + 0x18) != 0) {
    fn_8267C498(*(RefObj **)(self + 0x18));
  }
  *(RefObj **)(self + 0x18) = obj;
}
