/* Calls the module export with ordinal 0x318, resolving and caching its address on first use
   (fn_82BD3818 looks it up with XexGetProcedureAddress); returns 2 when it cannot be found. */
typedef int (*Proc_82BD3880)(void);
extern Proc_82BD3880 lbl_83223ED4;
extern void fn_82BD3818(unsigned int ordinal, Proc_82BD3880 *proc);

int fn_82BD3880(void)
{
    if (lbl_83223ED4 == 0)
        fn_82BD3818(0x318, &lbl_83223ED4);
    if (lbl_83223ED4 != 0)
        return lbl_83223ED4();
    return 2;
}
