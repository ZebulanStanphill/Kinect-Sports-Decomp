struct EHExceptionRecord;

struct _CONTEXT {
    unsigned char data[0xa40];
};

struct _xDISPATCHER_CONTEXT {
    unsigned long controlPc;         /* 0x0 */
    unsigned long imageBase;         /* 0x4 */
    unsigned long *establisherFrame; /* 0x8 */
};

struct _s_FuncInfo;

struct _s_HandlerType {
    unsigned int adjectives; /* 0x0 */
    void *type;              /* 0x4 */
    int catchObjectOffset;   /* 0x8 */
    void *addressOfHandler;  /* 0xc */
};

struct _s_CatchableType;

struct _s_TryBlockMapEntry {
    int tryLow;  /* 0x0 */
    int tryHigh; /* 0x4 */
};

struct FRAMEINFO {
    void *exceptionObject;
    FRAMEINFO *next;
    int reserved[2];
};

struct RegistrationNode_82F80AC8 {
    int state;            /* 0x0 */
    unsigned long *frame; /* 0x4 */
    int reserved8;        /* 0x8 */
    int reservedC;        /* 0xc */
};

struct ThreadData_82F80AC8 {
    char pad0[0x8c];
    _CONTEXT *continuationContext; /* 0x8c */
};

unsigned long *_GetEstablisherFrame(unsigned long *frame, const _s_FuncInfo *info);
int _ExecutionInCatch(_xDISPATCHER_CONTEXT *context, const _s_FuncInfo *info);
void SetState(unsigned long *frame, _xDISPATCHER_CONTEXT *context, const _s_FuncInfo *info, int state);
extern "C" {
void __BuildCatchObject(EHExceptionRecord *record, unsigned long *frame, const _s_HandlerType *handler,
                        const _s_CatchableType *catchable);
ThreadData_82F80AC8 *_getptd(void);
FRAMEINFO *_CreateFrameInfo(FRAMEINFO *info, EHExceptionRecord *record);
void _UnwindNestedFrames(unsigned long *frame, EHExceptionRecord *record, _CONTEXT *context);
void __FrameUnwindToState(unsigned long *frame, _xDISPATCHER_CONTEXT *context, const _s_FuncInfo *info,
                          int targetState);
void *_CallCatchBlock(EHExceptionRecord *record, unsigned long *frame, _CONTEXT *context,
                      const _s_FuncInfo *info, void *handlerAddress, unsigned long *registration,
                      FRAMEINFO *frameInfo, _CONTEXT *continuationContext);
void _JumpToContinuation(void *continuation, _CONTEXT *context);
}

void CatchIt(EHExceptionRecord *record, unsigned long *registration, _CONTEXT *context,
             _xDISPATCHER_CONTEXT *dispatcher, const _s_FuncInfo *funcInfo, const _s_HandlerType *handler,
             const _s_CatchableType *catchable, const _s_TryBlockMapEntry *tryBlock, int catchDepth,
             unsigned long *markerFrame, unsigned char recursive)
{
    unsigned long *establisher;
    int inCatch;
    RegistrationNode_82F80AC8 node;
    FRAMEINFO frameInfo;
    FRAMEINFO *pFrameInfo;
    _CONTEXT continuationContext;
    void *continuation;

    establisher = _GetEstablisherFrame(registration, funcInfo);
    inCatch = _ExecutionInCatch(dispatcher, funcInfo);
    if (inCatch == 0) {
        node.frame = registration;
        node.reserved8 = 0;
        registration[1] = (unsigned long)&node;
        node.state = -2;
        node.reservedC = 0;
    }
    if (catchable != 0) {
        __BuildCatchObject(record, establisher, handler, catchable);
    }
    _getptd()->continuationContext = &continuationContext;
    pFrameInfo = _CreateFrameInfo(&frameInfo, record);
    /* a non-zero ninth argument is the frame to unwind to */
    _UnwindNestedFrames((unsigned long *)catchDepth != 0 ? (unsigned long *)catchDepth
                                                         : dispatcher->establisherFrame,
                        record, context);
    __FrameUnwindToState(establisher, dispatcher, funcInfo, tryBlock->tryLow);
    SetState(registration, dispatcher, funcInfo, tryBlock->tryHigh + 1);
    continuation = _CallCatchBlock(record, establisher, context, funcInfo, handler->addressOfHandler,
                                   registration + 1, pFrameInfo, _getptd()->continuationContext);
    if (continuation != 0) {
        if (inCatch == 0) {
            registration[1] = 0;
        }
        _JumpToContinuation(continuation, &continuationContext);
    }
}
