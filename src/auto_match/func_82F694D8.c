typedef struct FuncInfo_82F694D8 {
    unsigned int magic;
    int maxState;
    void *unwindMap;
    unsigned int tryBlockCount; /* 0x0c */
} FuncInfo_82F694D8;

typedef struct Frame_82F694D8 {
    void *unused;
    struct Frame_82F694D8 *parent;  /* 0x04 */
} Frame_82F694D8;

typedef struct DispatcherContext_82F694D8 {
    unsigned int controlPc;
    unsigned char **functionEntry;  /* 0x04 */
} DispatcherContext_82F694D8;

extern int __InternalCxxFrameHandler(void *record, Frame_82F694D8 *frame, void *context,
    DispatcherContext_82F694D8 *dispatch, FuncInfo_82F694D8 *info, int depth, void *marker, unsigned char recursive);

int __CxxFrameHandler(void *record, Frame_82F694D8 *frame, void *context, DispatcherContext_82F694D8 *dispatch)
{
    FuncInfo_82F694D8 *info = *(FuncInfo_82F694D8 **)(*dispatch->functionEntry - 4);

    if (info->tryBlockCount != 0 && frame->parent != 0) {
        frame = frame->parent->parent;
    }
    return __InternalCxxFrameHandler(record, frame, context, dispatch, info, 0, 0, 0);
}
