struct _s_FuncInfo { int pad[3]; unsigned int field_c; };
struct _xDISPATCHER_CONTEXT { unsigned long controlPc; int pad; unsigned long *frame; };

int __StateFromControlPc(const _s_FuncInfo *info, unsigned long pc);

int GetCurrentState(unsigned long *frame, _xDISPATCHER_CONTEXT *context, const _s_FuncInfo *info)
{
  if (info->field_c != 0) {
    int *slot = (int *)context->frame[1];
    if (slot != 0) {
      int state = *slot;
      if (state != -2) {
        return state;
      }
    }
  }
  return __StateFromControlPc(info, context->controlPc);
}
