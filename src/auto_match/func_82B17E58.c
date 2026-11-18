typedef struct Instruction_82B17E58 {
    char pad0[0x8];
    unsigned int bits; /* 0x08 */
    char padC[0x20];
    void *source0; /* 0x2c */
    void *source1; /* 0x30 */
} Instruction_82B17E58;

extern void fn_82B82D28(void *operand, int a, int *x, int *y, int *z, int d, int e, int f);
extern int fn_82B17968(int a, int b, int c, int d, int x0, int y0, int z0, int kind, int d2, int x1, int y1,
                       int z1, int h);

int fn_82B17E58(int a, int b, int c, int d, Instruction_82B17E58 *instruction, int f, unsigned int skip,
                int h)
{
    int kind;
    int opcode;
    int x0;
    int y0;
    int z0;
    int x1;
    int y1;
    int z1;

    if (skip == 0) {
        opcode = (instruction->bits >> 7) & 0x7f;
        if (opcode != 1) {
            switch (opcode) {
            case 5:
                kind = 0x13;
                break;
            case 6:
                kind = 0x10;
                break;
            case 7:
                kind = 0x12;
                break;
            case 8:
                kind = 0x14;
                break;
            default:
                return 0;
            }
            fn_82B82D28(instruction->source0, f, &x0, &y0, &z0, 0, 0, 0);
            fn_82B82D28(instruction->source1, f, &x1, &y1, &z1, 0, 0, 0);
            return fn_82B17968(a, b, c, d, x0, y0, z0, kind, d, x1, y1, z1, h);
        }
    }
    return 0;
}
