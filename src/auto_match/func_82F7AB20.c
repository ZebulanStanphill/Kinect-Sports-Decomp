typedef struct { char *_ptr; int _cnt; char *_base; int _flag; } FILE;
extern unsigned short fn_82F859B0(unsigned short ch, FILE *f);
void fn_82F7AB20(unsigned short ch, FILE *f, int *pnumwritten)
{
  if ((f->_flag & 0x40) && f->_base == 0) {
    ++*pnumwritten;
    return;
  }
  if (fn_82F859B0(ch, f) == 0xffff)
    *pnumwritten = -1;
  else
    ++(*pnumwritten);
}
