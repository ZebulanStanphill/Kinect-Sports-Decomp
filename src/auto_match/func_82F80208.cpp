struct _s_FuncInfo { int pad[3]; unsigned int field_c; };
struct _xDISPATCHER_CONTEXT;

void SetState(unsigned long *frame, _xDISPATCHER_CONTEXT *context, const _s_FuncInfo *info, int state)
{
  if (info->field_c == 0) {
    return;
  }
  if (frame[1] == 0) {
    return;
  }
  *(int *)frame[1] = state;
}
