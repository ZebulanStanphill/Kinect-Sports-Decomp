extern const char *lbl_83156680[8];
const char *fn_82752D38(unsigned int flags)
{

    if (flags != 0) {
        if (flags & 0x10) {
            if ((flags & 3) == 3)
                return lbl_83156680[7];
            if (flags & 2)
                return lbl_83156680[5];
            if (flags & 1)
                return lbl_83156680[6];
            return lbl_83156680[4];
        }
        if ((flags & 3) == 3)
            return lbl_83156680[3];
        if (flags & 2)
            return lbl_83156680[1];
        if (flags & 1)
            return lbl_83156680[2];
    }
    return lbl_83156680[0];
}
