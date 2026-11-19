extern int lbl_83265A28;
extern const float lbl_8218E8E8[5];
extern char lbl_82196582[];
extern int fn_82520780(int *random, float chance);

static __forceinline int RandomPositive(int *seed)
{
    *seed = *seed * 0x19660d + 0x3c6ef35f;
    return *seed > 0;
}

const char *fn_822C5180(int part, int side)
{
    switch (part) {
    case 3:
        if (((1 << side) & 0xe0) != 0) {
            return "hitreact_head_left";
        }
        if (((1 << side) & 0xe) != 0) {
            return "hitreact_head_right";
        }
        if (side == 0) {
            return "hitreact_face";
        }
        return "hitreact_head_top";
    case 4:
        if (fn_82520780(&lbl_83265A28, lbl_8218E8E8[0]) == 0) {
            return "hitreact_stomach";
        }
        break;
    case 5:
    case 6:
        return "hitreact_groin";
    case 7:
    case 8:
        if (((1 << side) & 0xe0) != 0) {
            return "hitreact_leg_left";
        }
        if (((1 << side) & 0xe) != 0) {
            return "hitreact_leg_right";
        }
        if (RandomPositive(&lbl_83265A28)) {
            return "hitreact_leg_left";
        }
        return "hitreact_leg_right";
    case 9:
    case 10:
        break;
    default:
        return lbl_82196582;
    }
    return "hitreact_chest";
}
