/* The name of a screen or flow state, written into a 64-byte buffer: one case per id.
 *
 * The game's switch has no range check and no default block: it indexes its jump table with any
 * id (its only caller, fn_82484EE0, tests `id > 75` itself and writes "Unknown" there).  This
 * compiler only leaves the check out when the default is marked unreachable, hence
 * `default: __assume(0);` (the one allowed use; it is exact as the last arm and as the first). */
extern int fn_82F64020(char *buf, unsigned n, const char *fmt, ...);

void fn_82485358(char *buf, int id)
{
    switch (id) {
    case 0:
        fn_82F64020(buf, 0x40, "Conduct Crowd Screen Start");
        break;
    case 1:
        fn_82F64020(buf, 0x40, "Start Screen Mini Game");
        break;
    case 2:
        fn_82F64020(buf, 0x40, "Start Screen Single Game");
        break;
    case 3:
        fn_82F64020(buf, 0x40, "Start Screen Party");
        break;
    case 4:
        fn_82F64020(buf, 0x40, "Sports Screen Bowling");
        break;
    case 5:
        fn_82F64020(buf, 0x40, "Sports Screen Boxing");
        break;
    case 6:
        fn_82F64020(buf, 0x40, "Sports Screen Football");
        break;
    case 7:
        fn_82F64020(buf, 0x40, "Sports Screen Table Tennis");
        break;
    case 8:
        fn_82F64020(buf, 0x40, "Sports Screen Track And Field");
        break;
    case 9:
        fn_82F64020(buf, 0x40, "Sports Screen Volleyball");
        break;
    case 10:
        fn_82F64020(buf, 0x40, "Event Screen Football Single Match");
        break;
    case 11:
        fn_82F64020(buf, 0x40, "Event Screen Football Super Saver");
        break;
    case 12:
        fn_82F64020(buf, 0x40, "Event Screen Football Target Kick");
        break;
    case 13:
        fn_82F64020(buf, 0x40, "Event Screen Table Tennis Rally Tally");
        break;
    case 14:
        fn_82F64020(buf, 0x40, "Event Screen Table Tennis Single Match");
        break;
    case 15:
        fn_82F64020(buf, 0x40, "Event Screen Table Tennis Paddle Panic");
        break;
    case 16:
        fn_82F64020(buf, 0x40, "Event Screen Volleyball Bump Bash");
        break;
    case 17:
        fn_82F64020(buf, 0x40, "Event Screen Volleyball Single Match");
        break;
    case 18:
        fn_82F64020(buf, 0x40, "Event Screen Volleyball Body Ball");
        break;
    case 19:
        fn_82F64020(buf, 0x40, "Event Screen Bowling Pin Rush");
        break;
    case 20:
        fn_82F64020(buf, 0x40, "Event Screen Bowling Single Match");
        break;
    case 21:
        fn_82F64020(buf, 0x40, "Event Screen Bowling One Bowl Roll");
        break;
    case 22:
        fn_82F64020(buf, 0x40, "Event Screen Boxing King Of The Ring");
        break;
    case 23:
        fn_82F64020(buf, 0x40, "Event Screen Boxing Single Match");
        break;
    case 24:
        fn_82F64020(buf, 0x40, "Event Screen Track And Field Single Event");
        break;
    case 25:
        fn_82F64020(buf, 0x40, "Event Screen Track And Field More Events");
        break;
    case 26:
        fn_82F64020(buf, 0x40, "Single Event Screen Track And Field Hurdles");
        break;
    case 27:
        fn_82F64020(buf, 0x40, "Single Event Screen Track And Field Long Jump");
        break;
    case 28:
        fn_82F64020(buf, 0x40, "Single Event Screen Track And Field Discus");
        break;
    case 29:
        fn_82F64020(buf, 0x40, "Single Event Screen Track And Field 100m");
        break;
    case 30:
        fn_82F64020(buf, 0x40, "Single Event Screen Track And Field Javelin");
        break;
    case 31:
        fn_82F64020(buf, 0x40, "Single Event Screen Track And Field More Events");
        break;
    case 32:
        fn_82F64020(buf, 0x40, "Team Setup Overview A Your Team");
        break;
    case 33:
        fn_82F64020(buf, 0x40, "Team Setup Overview A Opponents");
        break;
    case 34:
        fn_82F64020(buf, 0x40, "Team Setup Overview A Accept");
        break;
    case 35:
        fn_82F64020(buf, 0x40, "Team Setup Overview B Your Team");
        break;
    case 36:
        fn_82F64020(buf, 0x40, "Team Setup Overview B Accept");
        break;
    case 37:
        fn_82F64020(buf, 0x40, "Team Setup Overview C Your Team");
        break;
    case 38:
        fn_82F64020(buf, 0x40, "Team Setup Overview C Opponent 1");
        break;
    case 39:
        fn_82F64020(buf, 0x40, "Team Setup Overview C Opponent 2");
        break;
    case 40:
        fn_82F64020(buf, 0x40, "Team Setup Overview C Opponent 3");
        break;
    case 41:
        fn_82F64020(buf, 0x40, "Team Setup Overview C Finish");
        break;
    case 42:
        fn_82F64020(buf, 0x40, "Team Setup Overview D Your Team");
        break;
    case 43:
        fn_82F64020(buf, 0x40, "Team Setup Overview D Opponent");
        break;
    case 44:
        fn_82F64020(buf, 0x40, "Team Setup Overview D Finish");
        break;
    case 45:
        fn_82F64020(buf, 0x40, "Sport Review Game Mode");
        break;
    case 46:
        fn_82F64020(buf, 0x40, "Sport Review Sport");
        break;
    case 47:
        fn_82F64020(buf, 0x40, "Sport Review Event");
        break;
    case 48:
        fn_82F64020(buf, 0x40, "Sport Review Team Select");
        break;
    case 49:
        fn_82F64020(buf, 0x40, "Sport Review Start Game");
        break;
    case 50:
        fn_82F64020(buf, 0x40, "Sport Review Difficulty Bronze");
        break;
    case 51:
        fn_82F64020(buf, 0x40, "Sport Review Difficulty Silver");
        break;
    case 52:
        fn_82F64020(buf, 0x40, "Sport Review Difficulty Gold");
        break;
    case 53:
        fn_82F64020(buf, 0x40, "Sport Review Difficulty Platinum");
        break;
    case 54:
        fn_82F64020(buf, 0x40, "Sport Review Turn Taking 1");
        break;
    case 55:
        fn_82F64020(buf, 0x40, "Sport Review Turn Taking 2");
        break;
    case 56:
        fn_82F64020(buf, 0x40, "Sport Review Turn Taking 3");
        break;
    case 57:
        fn_82F64020(buf, 0x40, "Sport Review Turn Taking 4");
        break;
    case 58:
        fn_82F64020(buf, 0x40, "Sport Review MP Solo");
        break;
    case 59:
        fn_82F64020(buf, 0x40, "Sport Review MP Coop");
        break;
    case 60:
        fn_82F64020(buf, 0x40, "Sport Review MP Versus");
        break;
    case 61:
        fn_82F64020(buf, 0x40, "Sport Review MP Live 2P");
        break;
    case 62:
        fn_82F64020(buf, 0x40, "Sport Review MP Live 4P");
        break;
    case 63:
        fn_82F64020(buf, 0x40, "Sport Review MP Turn Taking");
        break;
    case 64:
        fn_82F64020(buf, 0x40, "E3 Show Floor");
        break;
    case 65:
        fn_82F64020(buf, 0x40, "E3 On Stage");
        break;
    case 66:
        fn_82F64020(buf, 0x40, "Mini Game More");
        break;
    case 67:
        fn_82F64020(buf, 0x40, "Sport Review Mini Game");
        break;
    case 68:
        fn_82F64020(buf, 0x40, "E3 Roadshow");
        break;
    case 69:
        fn_82F64020(buf, 0x40, "E3 Main Menu 1");
        break;
    case 70:
        fn_82F64020(buf, 0x40, "E3 Main Menu 2");
        break;
    case 71:
        fn_82F64020(buf, 0x40, "E3 Main Menu 3");
        break;
    case 72:
        fn_82F64020(buf, 0x40, "E3 Show Floor 1");
        break;
    case 73:
        fn_82F64020(buf, 0x40, "E3 Show Floor 2");
        break;
    case 74:
        fn_82F64020(buf, 0x40, "E3 Show Floor 3");
        break;
    case 75:
        fn_82F64020(buf, 0x40, "E3 Show Floor 4");
        break;
    default:
        __assume(0);
    }
}
