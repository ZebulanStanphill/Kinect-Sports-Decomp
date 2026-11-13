typedef unsigned int U32;
extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
#define NUM_RS_BLOCKS_IN_PROGRAM 6
#define CP_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledprogram.cpp", line)
typedef struct CompiledProgram_82B7F488 {
    U32 pad[6];
    void *blocks[NUM_RS_BLOCKS_IN_PROGRAM]; /* 0x18 */
} CompiledProgram_82B7F488;

void *fn_82B7F488(CompiledProgram_82B7F488 *pCP, U32 index)
{
    CP_ASSERT(pCP, 0x25c);
    CP_ASSERT(index < NUM_RS_BLOCKS_IN_PROGRAM, 0x25e);
    return pCP->blocks[index];
}
