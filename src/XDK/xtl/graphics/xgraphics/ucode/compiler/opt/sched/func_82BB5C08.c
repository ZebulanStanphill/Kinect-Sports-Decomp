extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
#define SCHED_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp", line)

typedef struct SchedNode_82BB5C08 {
    char pad0[0x1c];
    int issue_cycle;     /* 0x1c */
    char pad20[0x24 - 0x20];
    int topdown_count;   /* 0x24 */
} SchedNode_82BB5C08;

typedef struct Sched_82BB5C08 {
    char pad0[0x3c];
    char ready[1];       /* 0x3c */
} Sched_82BB5C08;

extern unsigned char fn_82BB5AC0(Sched_82BB5C08 *s, SchedNode_82BB5C08 *sn);
extern void fn_82BB5A58(Sched_82BB5C08 *s, SchedNode_82BB5C08 *sn);
extern void fn_82BBFE50(void *list, SchedNode_82BB5C08 *sn);

void fn_82BB5C08(Sched_82BB5C08 *s, SchedNode_82BB5C08 *sn)
{
    SCHED_ASSERT(sn->issue_cycle == 0-1, 0x58a);
    SCHED_ASSERT(sn->topdown_count == 0, 0x58b);
    if (fn_82BB5AC0(s, sn)) {
        fn_82BB5A58(s, sn);
    } else {
        fn_82BBFE50(s->ready, sn);
    }
}
