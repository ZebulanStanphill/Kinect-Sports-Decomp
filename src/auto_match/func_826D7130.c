typedef struct Obj_826D7130 {
  int pad0, pad4;
  unsigned int f8;
  unsigned int fc;
  unsigned __int64 f10;
  unsigned int f18;
  unsigned int f1c;
} Obj_826D7130;
extern unsigned int fn_8268AF48(unsigned int, unsigned int, unsigned int);

unsigned int fn_826D7130(Obj_826D7130 *o){ unsigned int h,x; unsigned int a=o->f8; unsigned int *p=(unsigned int*)(a&~3u); h=fn_8268AF48((a&~3u)+8, *p & 0x7fffffff,0x1505); x=o->f1c^o->f18^o->fc; return (unsigned int)o->f10^(x>>7)^x^h;}
