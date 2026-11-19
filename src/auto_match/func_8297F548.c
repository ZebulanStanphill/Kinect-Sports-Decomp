int fn_8297F548(void *self, int from, int to)
{
    if (from == to) {
        return 0;
    }
    switch (from) {
    case 1:
    case 2:
    case 6:
        if (to > 0 && to <= 9) {
            return 0;
        }
        break;
    case 3:
    case 7:
        if (to > 0 && (to <= 3 || (to > 5 && to <= 7))) {
            return 0;
        }
        break;
    case 4:
    case 8:
        if (to > 0 && (to <= 2 || to == 4 || to == 6 || to == 8)) {
            return 0;
        }
        break;
    case 5:
    case 9:
        if (to > 0 && (to <= 2 || (to > 4 && (to <= 6 || to == 9)))) {
            return 0;
        }
        break;
    case 10:
        if (to >= 10 && to <= 13) {
            return 0;
        }
        break;
    case 11:
        if (to >= 10 && to <= 11) {
            return 0;
        }
        break;
    case 12:
        if (to == 10 || to == 12) {
            return 0;
        }
        break;
    case 13:
        if (to == 10 || to == 13) {
            return 0;
        }
        break;
    }
    return 1;
}
