/* Passes the global context to fn_825315E0 only when fn_82A1BB18() equals its id at +0x2a88 (else null),
   then returns the entry at +0x2fc of the lbl_83296890 table. */
typedef struct Context_825308E8 {
    char pad0[0x2a88];
    int id;                         /* 0x2a88 */
} Context_825308E8;

extern Context_825308E8 *lbl_8320A898;
extern char lbl_83296890[];
extern int fn_82A1BB18(void);
extern void fn_825315E0(Context_825308E8 *ctx);

void *fn_825308E8(void)
{
    int id = lbl_8320A898->id;
    fn_825315E0(id == fn_82A1BB18() ? lbl_8320A898 : 0);
    return lbl_83296890 + 0x2fc;
}
