extern char lbl_82196582[];

const char *fn_8232EC10(unsigned int punch, unsigned int hand)
{
    switch (hand) {
    case 1:
        switch (punch) {
        case 0:
            return "punchhighcross";
        case 1:
            return "punchhighrighthook";
        case 2:
            return "punchlowcross";
        case 3:
            return "punchlowrighthook";
        case 4:
            return "punchuppercut";
        default:
            return lbl_82196582;
        }
        break;
    case 0:
        switch (punch) {
        case 0:
            return "punchhighjab";
        case 1:
            return "punchhighlefthook";
        case 2:
            return "punchlowjab";
        case 3:
            return "punchlowlefthook";
        case 4:
            return "punchfrontuppercut";
        default:
            return lbl_82196582;
        }
        break;
    }
    return lbl_82196582;
}
