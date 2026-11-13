typedef struct Inst_82BA8E18 {
    char pad[0x50];
    int opcode;            /* 0x50 */
    char pad54[0x3b8 - 0x54];
    int type;              /* 0x3b8 */
} Inst_82BA8E18;

extern int fn_82BC2EF0(int opcode, int type);

int fn_82BA8E18(Inst_82BA8E18 *inst)
{
    switch (fn_82BC2EF0(inst->opcode, inst->type)) {
    case 5:
    case 6:
        return 1;
    case 4:
    case 7:
    case 8:
        return 2;
    case 0x2b:
    case 0x2c:
        return 3;
    default:
        return 0;
    }
}
