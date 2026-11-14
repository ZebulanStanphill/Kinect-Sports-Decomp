struct TryBlock_82F69398 {
    int tryLow;
    int tryHigh;
    int catchHigh;
    int catchCount;
    void *handlers;
};
struct _s_FuncInfo {
    int pad[3];
    unsigned int tryBlockCount;
    TryBlock_82F69398 *tryBlocks;
};
struct _xDISPATCHER_CONTEXT { unsigned long controlPc; };

int __StateFromControlPc(const _s_FuncInfo *info, unsigned long controlPc);

static __forceinline const TryBlock_82F69398 *FindCatch(const _s_FuncInfo *info, int state)
{
    unsigned int i;
    for (i = info->tryBlockCount; i != 0; i--) {
        const TryBlock_82F69398 *t = &info->tryBlocks[i - 1];
        if (state > t->tryHigh && state <= t->catchHigh)
            return t;
    }
    return 0;
}

int _ExecutionInCatch(_xDISPATCHER_CONTEXT *context, const _s_FuncInfo *info)
{
    int state = __StateFromControlPc(info, context->controlPc);
    return FindCatch(info, state) != 0;
}
