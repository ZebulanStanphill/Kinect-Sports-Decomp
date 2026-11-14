struct TryBlockMapEntry { int tryLow; int tryHigh; int catchHigh; int nCatches; void *handlers; };
struct _s_FuncInfo { int pad[3]; unsigned int nTryBlocks; TryBlockMapEntry *tryBlockMap; };
struct _xDISPATCHER_CONTEXT;

int __StateFromControlPc(const _s_FuncInfo *info, unsigned long pc);
extern "C" void __FrameUnwindToState(unsigned long *frame, _xDISPATCHER_CONTEXT *context, const _s_FuncInfo *info, int targetState);

static __forceinline unsigned long *_GetEstablisherFrame(unsigned long *frame, const _s_FuncInfo *info)
{
  if (info->nTryBlocks != 0 && frame[1] != 0) {
    return (unsigned long *)((unsigned long *)frame[1])[1];
  }
  return frame;
}

void __FrameUnwindToEmptyState(unsigned long *frame, _xDISPATCHER_CONTEXT *context, const _s_FuncInfo *info)
{
  unsigned long *establisher = _GetEstablisherFrame(frame, info);
  int state = __StateFromControlPc(info, *(unsigned long *)context);
  TryBlockMapEntry *entry;
  unsigned int i;

  for (i = info->nTryBlocks; i != 0; i--) {
    entry = &info->tryBlockMap[i - 1];
    if (state > entry->tryHigh && state <= entry->catchHigh) {
      goto found;
    }
  }
  entry = 0;
found:
  __FrameUnwindToState(establisher, context, info, entry == 0 ? -1 : entry->tryHigh + 1);
}
