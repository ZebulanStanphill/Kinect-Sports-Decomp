typedef struct DName_82F73E68 {
    void *node;              /* 0x0 */
    unsigned int flags : 16; /* 0x4 */
    unsigned int spare : 16; /* 0x4 */
} DName_82F73E68;

extern signed char *lbl_832635C0;

extern DName_82F73E68 *fn_82F72F40(DName_82F73E68 *self, const char *text);
extern DName_82F73E68 *fn_82F72DD0(DName_82F73E68 *self, int status);
extern DName_82F73E68 *fn_82F735D8(DName_82F73E68 *self, char c);
extern DName_82F73E68 *fn_82F739E8(DName_82F73E68 *result, const char *left, DName_82F73E68 *right);
extern DName_82F73E68 *fn_82F73D20(DName_82F73E68 *result);

DName_82F73E68 *fn_82F73E68(DName_82F73E68 *out)
{
    DName_82F73E68 types;
    DName_82F73E68 text;
    DName_82F73E68 *joined;

    if (*lbl_832635C0 != 0) {
        if (*lbl_832635C0 == 'Z') {
            lbl_832635C0++;
            types.node = 0;
            types.flags = 0;
            *out = types;
            return out;
        }
        joined = fn_82F739E8(&text, " throw(", fn_82F73D20(&types));
        out->node = joined->node;
        *(unsigned int *)((char *)out + 4) = *(unsigned int *)((char *)joined + 4);
        fn_82F735D8(out, ')');
        return out;
    } else {
        types = *fn_82F72F40(&text, " throw(");
        fn_82F72DD0(&types, 1);
        *out = types;
        fn_82F735D8(out, ')');
        return out;
    }
}
