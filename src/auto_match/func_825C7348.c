extern unsigned int lbl_8326B370[];
extern unsigned int lbl_8328227C;
extern unsigned int lbl_83282280;
extern unsigned int lbl_83282288;
extern unsigned int lbl_8328228C;

/* The game's switch has no range check, which this compiler only leaves out when the
 * default case is marked unreachable. */
unsigned int fn_825C7348(int kind)
{
    switch (kind) {
    case 0:
        return lbl_8326B370[3];
    case 1:
        return lbl_8326B370[8];
    case 2:
        return lbl_8326B370[3];
    case 3:
        return lbl_8326B370[8];
    case 4:
        return lbl_8328227C;
    case 5:
        return lbl_83282280;
    case 6:
        return lbl_83282288;
    case 7:
        return lbl_8328228C;
    default:
        __assume(0);
    }
}
