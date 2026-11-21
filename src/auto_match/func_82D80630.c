/* The bridge atom of a constraint (hkpBridgeConstraintAtom layout). */
typedef struct BridgeAtom_82D80630 {
    unsigned short type;     /* 0x00 */
    void *buildJacobianFunc; /* 0x04 */
    void *constraintData;    /* 0x08 */
} BridgeAtom_82D80630;

/* hkpBridgeConstraintAtom::init(hkpConstraintData *) */
extern void fn_82D9FE70(BridgeAtom_82D80630 *atom, void *constraintData);

void fn_82D80630(BridgeAtom_82D80630 *atom, int enable)
{
    if (atom == 0) {
        return;
    }
    if (enable == 0) {
        return;
    }
    fn_82D9FE70(atom, atom->constraintData);
}
