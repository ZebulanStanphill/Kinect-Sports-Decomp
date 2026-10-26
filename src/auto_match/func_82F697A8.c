typedef struct {
    unsigned int ExceptionCode;
    unsigned int ExceptionFlags;
    void *ExceptionRecord;
    void *ExceptionAddress;
    unsigned int NumberParameters;
    unsigned int magicNumber;
    void *pExceptionObject;
    void **pThrowInfo;
} EHExceptionRecord;

typedef struct FrameInfo {
    void *pExceptionObject;
    void *pThrowImageBase;
    struct FrameInfo *pNext;
} FrameInfo;

typedef struct {
    char pad[0x94];
    FrameInfo *pFrameInfoChain;
} _tiddata;

extern _tiddata *_getptd(void);

FrameInfo *_CreateFrameInfo(FrameInfo *pFrameInfo, EHExceptionRecord *pExcept)
{
    void *base;

    if (pExcept->ExceptionCode == 0xe06d7363 && pExcept->NumberParameters == 3 &&
        (pExcept->magicNumber == 0x19930520 || pExcept->magicNumber == 0x19930521 ||
         pExcept->magicNumber == 0x19930522)) {
        pFrameInfo->pExceptionObject = pExcept->pExceptionObject;
        base = pExcept->pThrowInfo[1];
    } else {
        base = 0;
        pFrameInfo->pExceptionObject = 0;
    }
    pFrameInfo->pThrowImageBase = base;
    pFrameInfo->pNext = _getptd()->pFrameInfoChain;
    _getptd()->pFrameInfoChain = pFrameInfo;
    return pFrameInfo;
}
