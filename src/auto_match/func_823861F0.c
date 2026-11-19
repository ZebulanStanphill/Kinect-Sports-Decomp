typedef struct Owner_823861F0 {
    char unk0000[0x1fa0];
    void *unk1FA0; /* 0x1FA0 */
    void *unk1FA4; /* 0x1FA4 */
    void *unk1FA8; /* 0x1FA8 */
    char unk1FAC[0x1fc8 - 0x1fac];
    int single; /* 0x1FC8 */
} Owner_823861F0;

extern float lbl_831CB000[];
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_823838E0(void *self, int type, int unk1, int unk2);
extern void *fn_82383FB0(void *self, float *settings, int unk3, int unk4, int unk5, int flag, int unk1,
                         int unk2);

void fn_823861F0(Owner_823861F0 *owner, int forced, int kind, int unk3, int unk4, int unk5, int unk1,
                 int unk2)
{
    void *mem;
    int type;
    int single;

    if (forced != 0) {
        type = 0;
    } else {
        switch (kind) {
        case 1:
            type = 5;
            break;
        case 2:
            type = 4;
            break;
        case 3:
            type = 3;
            break;
        default:
            type = -1;
            break;
        }
    }
    if (type == -1) {
        mem = fn_8265C9E0(0xf0);
        owner->unk1FA0 = mem != 0 ? fn_823838E0(mem, 1, unk1, unk2) : 0;
        mem = fn_8265C9E0(0x290);
        owner->unk1FA4 = mem != 0 ? fn_82383FB0(mem, &lbl_831CB000[25], unk3, unk4, unk5, 1, unk1, unk2) : 0;
        mem = fn_8265C9E0(0x290);
        if (mem != 0) {
            mem = fn_82383FB0(mem, &lbl_831CB000[5], unk3, unk4, unk5, 0, unk1, unk2);
        } else {
            mem = 0;
        }
        single = 0;
        owner->unk1FA8 = mem;
    } else {
        mem = fn_8265C9E0(0xf0);
        if (mem != 0) {
            mem = fn_823838E0(mem, type, unk1, unk2);
        } else {
            mem = 0;
        }
        single = 1;
        owner->unk1FA0 = mem;
    }
    owner->single = single;
}
