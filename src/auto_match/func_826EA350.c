typedef struct Owner_826EA350 { char pad[0x18]; void *obj; } Owner_826EA350;
extern void *fn_8267B890(unsigned int heap, unsigned int size, int flags);
extern void *fn_826EA2B8(void *mem, int arg);
extern unsigned int lbl_831E7E64;

void fn_826EA350(Owner_826EA350 *o, int arg)
{
  void *mem = fn_8267B890(lbl_831E7E64, 0x824, 0);
  o->obj = mem != 0 ? fn_826EA2B8(mem, arg) : 0;
}
