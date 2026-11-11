/* The C runtime's abort(): raise(SIGABRT) if a handler is set (fn_82F714E8/fn_82F71500),
   report the fault if the abort behavior asks for it (_CALL_REPORTFAULT), then _exit(3). */
extern unsigned fn_82F714E8(void);
extern void fn_82F71500(int);
extern void fn_82F63BD8(int, unsigned, int);
__declspec(noreturn) extern void fn_82F6CDE8(int);
extern unsigned lbl_831BB230;
__declspec(noreturn) void abort(void) {
    if (fn_82F714E8()) fn_82F71500(22);
    if (lbl_831BB230 & 2) fn_82F63BD8(3, 0x40000015, 1);
    fn_82F6CDE8(3);
}
