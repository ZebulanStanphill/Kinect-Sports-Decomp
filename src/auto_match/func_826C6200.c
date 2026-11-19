extern int fn_8267BE38();
extern unsigned int lbl_8200BD80;


unsigned int * fn_826C6200(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8200BD80;
  if ((flags & 1) != 0) {
    fn_8267BE38();
  }
  return self;
}

