typedef struct { int state; int handler; unsigned int *p; int saved; } Frame_82F80638;
extern int _getptd();
extern int _CallSettingFrame(int, int, int, Frame_82F80638 *);
extern void _FindAndUnlinkFrame(unsigned int *);
extern int _IsExceptionObjectToBeDestroyed(unsigned int);
extern void fn_82F80590(int, int);

int CallCatchBlock(int a1, int a2, int a3, int a4, int a5, int *a6, unsigned int *a7)
{
  Frame_82F80638 fr;
  int save1, save2, r;
  save1 = *(int *)(_getptd() + 0x7c);
  save2 = *(int *)(_getptd() + 0x80);
  *(int *)(_getptd() + 0x7c) = a1;
  *(int *)(_getptd() + 0x80) = a3;
  fr.state = -2;
  fr.handler = a2;
  fr.p = a7;
  fr.saved = *a6;
  r = _CallSettingFrame(a5, a2, 0x100, &fr);
  _FindAndUnlinkFrame(a7);
  *(int *)(_getptd() + 0x7c) = save1;
  *(int *)(_getptd() + 0x80) = save2;
  if (*a7 != 0 && _IsExceptionObjectToBeDestroyed(*a7)) {
    fn_82F80590(a1, 1);
    *a7 = 0;
  }
  return r;
}
