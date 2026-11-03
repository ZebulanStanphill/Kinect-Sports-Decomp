void __emit(unsigned int opcode);
#define __lwsync() __emit(0x7C2004AC)
typedef struct { int pad0; int f4; unsigned f8; unsigned fc; } O_8281F440;
extern void fn_82812B80(void *);
extern unsigned char fn_82813A78(void);
extern void fn_82A1E650(unsigned, int);
void fn_8281F440(O_8281F440 *o, int arg)
{
  if (o->fc != 0 && o->f8 != 0) {
    if (fn_82813A78() != 0) fn_82812B80(o);
    while (o->f4 == 0) fn_82A1E650(o->f8, arg);
    __lwsync();
  }
}
