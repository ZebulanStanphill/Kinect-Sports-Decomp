/* The game's switch has no range check: it indexes its jump table with any value. This
 * compiler only leaves the check out when the default case is marked unreachable, so the
 * original source must have said so (`default: __assume(0);`, or a macro that expands to it). */
typedef struct State_825474D0 {
    char pad0000[0x2efc];
    unsigned int unk2EFC_hi : 2;    /* 0x2efc */
    unsigned int level : 7;
    unsigned int unk2EFC_lo : 23;
    char pad2F00[0x35f0 - 0x2f00];
    unsigned int mask;              /* 0x35f0 */
} State_825474D0;

extern State_825474D0 *lbl_8320A898;

void fn_825474D0(int mode)
{
    switch (mode) {
    default:
        __assume(0);
        break;
    case 0:
        lbl_8320A898->mask = 0x80000000;
        lbl_8320A898->level = 100;
        break;
    case 1:
        lbl_8320A898->level = 0;
        lbl_8320A898->mask = 1;
        break;
    case 2:
        lbl_8320A898->level = 5;
        lbl_8320A898->mask = 1;
        break;
    case 3:
        lbl_8320A898->level = 10;
        lbl_8320A898->mask = 1;
        break;
    case 4:
        lbl_8320A898->level = 15;
        lbl_8320A898->mask = 1;
        break;
    case 5:
        lbl_8320A898->level = 20;
        lbl_8320A898->mask = 1;
        break;
    case 6:
        lbl_8320A898->level = 25;
        lbl_8320A898->mask = 1;
        break;
    case 7:
        lbl_8320A898->level = 30;
        lbl_8320A898->mask = 1;
        break;
    case 8:
        lbl_8320A898->level = 100;
        lbl_8320A898->mask = 1;
        break;
    case 9:
        lbl_8320A898->level = 0;
        lbl_8320A898->mask = 2;
        break;
    case 10:
        lbl_8320A898->level = 5;
        lbl_8320A898->mask = 2;
        break;
    case 11:
        lbl_8320A898->level = 10;
        lbl_8320A898->mask = 2;
        break;
    case 12:
        lbl_8320A898->level = 15;
        lbl_8320A898->mask = 2;
        break;
    case 13:
        lbl_8320A898->level = 20;
        lbl_8320A898->mask = 2;
        break;
    case 14:
        lbl_8320A898->level = 25;
        lbl_8320A898->mask = 2;
        break;
    case 15:
        lbl_8320A898->level = 30;
        lbl_8320A898->mask = 2;
        break;
    case 16:
        lbl_8320A898->level = 0;
        lbl_8320A898->mask = 4;
        break;
    case 17:
        lbl_8320A898->level = 5;
        lbl_8320A898->mask = 4;
        break;
    case 18:
        lbl_8320A898->level = 10;
        lbl_8320A898->mask = 4;
        break;
    case 19:
        lbl_8320A898->level = 15;
        lbl_8320A898->mask = 4;
        break;
    case 20:
        lbl_8320A898->level = 20;
        lbl_8320A898->mask = 4;
        break;
    case 21:
        lbl_8320A898->level = 25;
        lbl_8320A898->mask = 4;
        break;
    case 22:
        lbl_8320A898->level = 30;
        lbl_8320A898->mask = 4;
        break;
    }
}
