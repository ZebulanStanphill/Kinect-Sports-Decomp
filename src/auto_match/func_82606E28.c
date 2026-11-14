/* The game's switch has no range check: it indexes its jump table with any value. This
 * compiler only leaves the check out when the default case is marked unreachable, so the
 * original source must have said so (`default: __assume(0);`, or a macro that expands to it). */
typedef struct Table_82606E28 {
    char data[0x2b0];
} Table_82606E28;

extern Table_82606E28 lbl_831D5170;
extern Table_82606E28 lbl_831D5420;
extern Table_82606E28 lbl_831D56D0;
extern Table_82606E28 lbl_831D5980;
extern Table_82606E28 lbl_831D5C30;
extern Table_82606E28 lbl_831D5EE0;
extern Table_82606E28 lbl_831D6190;
extern Table_82606E28 lbl_831D6440;
extern Table_82606E28 lbl_831D66F0;
extern Table_82606E28 lbl_831D69A0;
extern Table_82606E28 lbl_831D6C50;

Table_82606E28 *fn_82606E28(int index)
{
    switch (index) {
    case 1:
        return &lbl_831D5420;
    case 2:
        return &lbl_831D56D0;
    case 3:
        return &lbl_831D5980;
    case 4:
        return &lbl_831D5C30;
    case 5:
        return &lbl_831D5EE0;
    case 6:
        return &lbl_831D6190;
    case 7:
        return &lbl_831D6440;
    case 8:
        return &lbl_831D66F0;
    case 9:
        return &lbl_831D69A0;
    case 10:
        return &lbl_831D6C50;
    case 0:
    case 11:
        return &lbl_831D5170;
    default:
        __assume(0);
    }
}
