struct _s_FuncInfo { int pad[3]; unsigned int field_c; };

unsigned long *_GetEstablisherFrame(unsigned long *frame, const _s_FuncInfo *info)
{
  if (info->field_c == 0) {
    return frame;
  }
  if (frame[1] == 0) {
    return frame;
  }
  return (unsigned long *)((unsigned long *)frame[1])[1];
}
